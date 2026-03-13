// set(自动去重)
#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
using namespace std;

// 声明
// set<int> s;

// 插入
// s.insert(5);

int main()
{
    set<int> s;
    s.insert(3);
    s.insert(1);
    s.insert(3);

    for (auto m : s)
    {
        cout << m << " ";
    }
    cout << endl;
    // 会输出：1 3  因为set不允许重复元素出现。
    return 0;
}