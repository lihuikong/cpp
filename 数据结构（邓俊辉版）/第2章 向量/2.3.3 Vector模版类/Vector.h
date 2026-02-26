typedef int Rank;          // 秩
#define DEFAULT_CAPACITY 3 // 默认的初始容量（实际应用中可设置为更大）
#include <cstdlib>
#include <algorithm>

template <typename T>
class Vector
{ // 向量模版类
private:
    Rank _size;
    int _capacity;
    T *_elem; // 规模、容量、数据区
protected:
    void copyFrom(T const *A, Rank lo, Rank hi);
    void expand();                         // 空间不足时扩容
    void shrink();                         // 装填因子过小时压缩
    bool bubble(Rank lo, Rank hi);         // 扫描交换
    void bubbleSort(Rank lo, Rank hi);     // 起泡排序算法
    void exchange(Rank i, Rank j);         // 元素交换
    Rank selectMax(Rank lo, Rank hi);      // 选取最大元素
    void selectionSort(Rank lo, Rank hi);  // 选取排序算法
    void merge(Rank lo, Rank mi, Rank hi); // 归并算法
    void mergeSort(Rank lo, Rank hi);      // 归并排序算法
    Rank partition(Rank lo, Rank hi);      // 轴点构造算法
    void quickSort(Rank lo, Rank hi);      // 快速排序算法
    void headSort(Rank lo, Rank hi);       // 堆排序
public:
    // 构造函数
    Vector(int c = DEFAULT_CAPACITY)
    {
        _elem = new T[_capacity = c];
        _size = 0;
    } // 默认
    Vector(T *A, Rank lo, Rank hi) { copyFrom(A, lo, hi); }                     // 数组区间复制
    Vector(T *A, Rank n) { copyFrom(A, 0, n); }                                 // 数组整体复制
    Vector(Vector<T> const &V, Rank lo, Rank hi) { copyFrom(V._elem, lo, hi); } // 向量区间复制
    Vector(Vector<T> const &V) { copyFrom(V._elem, 0, V._size); }               // 向量整体复制
    // 析构函数
    ~Vector() { delete[] _elem; } // 释放内部空间
    // 只读访问接口
    Rank size() const { return _size; }                             // 规模
    bool empty() const { return _size <= 0; }                       // 判空
    int disordered() const;                                         // 判断向量是否已经排序
    Rank find(T const &e) const { return find(e, 0, (Rank)_size); } // 无序向量整体查找
    Rank find(T const &e, Rank lo, Rank hi) const;                  // 无序向量区间查找
    Rank search(T const &e) const                                   // 有序向量整体查找
    {
        return (0 >= _size) ? -1 : search(e, (Rank)0, (Rank)_size);
    }
    Rank search(T const &e, Rank lo, Rank hi) const; // 有序向量区间查找
    // 可写访问接口
    T &operator[](Rank r) const;                         // 重载下标操作符，可以类似于数组形式引用各元素
    Vector<T> &operator=(Vector<T> const &);             // 重载赋值操作符，以便直接克隆向量
    T remove(Rank r);                                    // 删除秩为r的元素
    int remove(Rank lo, Rank hi);                        // 删除秩在区间[lo,hi]之间的元素
    Rank insert(Rank r, T const &e);                     // 插入元素
    Rank insert(T const &e) { return insert(_size, e); } // 默认作为末元素插入
    void sort(Rank lo, Rank hi);                         // 对[lo,hi]排序
    void sort() { sort(0, _size); }                      // 整体排序
    void unsort(Rank lo, Rank hi);                       // 对[lo,hi)治乱
    void unsort() { unsort(0, _size); }                  // 整体置乱
    int deduplicate();                                   // 无序去重
    int uniquify();                                      // 有序去重
    // 遍历
    void traverse(void (*)(T &)); // 遍历(使用函数指针，只读或局部性修改)
    template <typename VST>
    void traverse(VST &); // 遍历(使用函数对象，可全局修改)
}; // Vector

// 实现expand类
template <typename T>
void Vector<T>::expand()
{                          // 向量空间不足时扩容
    if (_size < _capacity) // 尚未满员时，无需扩容
        return;
    if (_capacity < DEFAULT_CAPACITY) // 不低于最小容量
        _capacity = DEFAULT_CAPACITY;
    T *oldElem = _elem;
    _elem = new T[_capacity <<= 1]; // 容量加倍
    for (int i = 0; i < _size; i++)
    {
        _elem[i] = oldElem[i]; // 复制原向量内容（T为基本类型，或已重载赋值操作符‘=’）
    }
    delete[] oldElem; // 释放原空间
}

template <typename T>
void Vector<T>::shrink() // 装填因子过小时压缩向量所占空间
{
    if (_capacity < DEFAULT_CAPACITY << 1) // 不致收缩到DEFAULT_CAPACITY以下
        return;
    if (_size << 2 > _capacity) // 以25%为界
        return;
    T *oldElem = _elem;
    _elem = new T[_capacity >>= 1]; // 容量减半
    for (int i = 0; i < _size; i++) // 复制原向量内容
    {
        _elem[i] = oldElem[i];
    }
    delete[] oldElem; // 释放原空间
}

template <typename T> // 重载下标操作符
T &Vector<T>::operator[](Rank r) const
{
    return _elem[r]; // assert：0 <= r < _size
}

template <typename T>
void Vector<T>::unsort(Rank lo, Rank hi) // 等概率随机置乱向量区间[lo,hi)
{
    T *V = _elem + lo;                // 让指针V指向第lo个元素，_elem是原数组的首地址。将子向量_elem[lo,hi)视作另一向量V[0,hi-lo)
    for (int i = hi - lo; i > 0; i--) // 自后向前
    {
        std::swap(V[i - 1], V[rand() % i]); // 将V[i-1]与V[0,i-1]中某一元素随机交换
    }
}

template <typename T>
static bool lt(T *a, T *b)
{
    return lt(*a, *b); // less than（比较所指的对象而非地址）
}

template <typename T>
static bool lt(T &a, T &b)
{
    return a < b; // less than（直接比较数值）
}

template <typename T>
static bool eq(T *a, T *b)
{
    return eq(*a, *b); // equal（比较所指的对象）
}

template <typename T>
static bool eq(T &a, T &b)
{
    return a == b; // equal（直接比较数值）
}

template <typename T> // 无需向量的顺序查找：返回最后一个元素e的位置；失败时，返回lo - 1
Rank Vector<T>::find(T const &e, Rank lo, Rank hi) const
{
    while ((lo < hi--) && (_elem[hi] != e))
        ;      // 从后向前，顺序查找
    return hi; // 若hi < lo，则意味着失败；否则hi即命中元素的秩
}

template <typename T> // 将e作为秩为r的元素插入
Rank Vector<T>::insert(Rank r, T const &e)
{
    expand(); // 如有必要，扩容
    for (int i = _size; i > r; i--)
    {
        _elem[i] = _elem[i - 1]; // 自后向前，后继元素顺次后移一个单元
    }
    _elem[r] = e; // 将新元素插入
    _size++;      // 更新容量
    return r;     // 返回秩
}

template <typename T>
int Vector<T>::remove(Rank lo, Rank hi) // 删除秩在区间[lo,hi)之内的元素
{
    if (lo == hi) // 出于效率考虑，单独处理单元素删除
        return 0;
    T e = _elem[lo]; // 备份被删除元素
    while (hi < _size)
    {
        _elem[lo++] = _elem[hi++]; // 后续元素顺次前移一个单元
    }
    _size = lo;     // 更新规模,直接丢弃尾部[lo,_size = hi)区间
    shrink();       // 如有必要，压缩
    return hi - lo; // 返回被删除元素
}

template <typename T>
T Vector<T>::remove(Rank r) // 删除秩为r的元素,0 <= r < _size
{
    T e = _elem[r];   // 备份被删除元素
    remove(r, r + 1); // 调用区间删除算法，等效于对区间[r,r+1)删除
    return e;         // 返回被删除元素
}

template <typename T>
int Vector<T>::deduplicate()
{
    int oldSize = _size; // 记录原规模
    Rank i = 1;          // 从第二个元素,即_elem[1]开始
    while (i < _size)    // 自前向后注意考察各元素_elem[i]
    {
        (find(_elem[i], 0, i) < 0) ? i++ : remove(i); // 在前缀中寻找_elem[i]，如无重复则继续扫描，否则删除当前元素
    }
    return oldSize - _size; // 返回删除元素的数量
}

// 写一个遍历接口是为了能够把“遍历权”交给 Vector，把“操作权”交给用户。
// 自己当然可以写for循环，但是这样会破坏封装性。
template <typename T>
void Vector<T>::traverse(void (*visit)(T &)) // 使用函数指针的遍历
{
    for (int i = 0; i < _size; i++)
    {
        visit(_elem[i]);
    }
}

template <typename T>
template <typename VST>              // 元素类型、操作器
void Vector<T>::traverse(VST &visit) // 利用函数对象机制的遍历
{
    for (int i = 0; i < _size; i++)
    {
        visit(_elem[i]);
    }
}

template <typename T>
struct Increase // 函数对象：递增一个T类对象
{
    virtual void operator()(T &e) { e++; } // 假设T可直接递增或已重载++
};

template <typename T>
void increase(Vector<T> &V) // 统一递增向量中的各元素
{
    V.traverse(Increase<T>()); // 以Increase<T>()为基本操作进行遍历
};

template <typename T>
int Vector<T>::disordered() const
{                                   // 返回向量中逆序元素对的总数
    int n = 0;                      // 计数器
    for (int i = 1; i < _size; i++) // 逐一检查_size - 1对相邻元素
    {
        if (_elem[i - 1] > _elem[i])
        {
            n++; // 逆序元素对出现，计数器增1
        }
    }
    return n; // 向量有序当且仅当n = 0
}

template <typename T>
int Vector<T>::uniquify()
{                       // 有序向量重复元素剔除算法（高效版）
    Rank i = 0, j = 0;  // 各对互异“相邻”元素的秩
    while (++j < _size) // 逐一扫描，直至末元素
    {
        if (_elem[i] != _elem[j]) // 跳过重复元素
        {
            _elem[++i] = _elem[j]; // 发现新元素，向前移置1个位置
        }
    }
    _size = ++i;  // 更新规模，截除尾部多余元素
    shrink();     // 如有必要，压缩空间
    return j - i; // 返回删除的元素个数
}

template <typename T> // 在有序向量的区间[lo,hi)内，确定不大于e的最后一个节点的秩
Rank Vector<T>::search(T const &e, Rank lo, Rank hi) const
{                         // assert: 0 <= lo < hi <= _size
    return (rand() % 2) ? // 按各50%的概率随机选用以下两种算法之一
               binSearch(_elem, e, lo, hi)
                        : fibsearch(_elem, e, lo, hi); // 二分查找或者Fibonacci查找
}

// 二分查找算法（版本A）：在有序向量的区间[lo,hi)内查找元素e，0 <= lo < hi <= _size
template <typename T> static Rank binSearch(T* A, T const& e, Rank lo, Rank hi){
    while(lo < hi){
        Rank mi = (lo + hi) >> 1; // 以均分为轴点
        if(e < A[mi]) hi = mi; // 前半段继续查找
        else if(A[mi] < e) lo = mi + 1; // 后半段继续查找
        else return mi; // 在mi处命中
    } // 成功查找可以提前终止
    return -1; // 查找失败
} // 有多个命中元素时，不能保证返回秩最大者；查找失败时，简单返回-1，而不能指示失败的位置