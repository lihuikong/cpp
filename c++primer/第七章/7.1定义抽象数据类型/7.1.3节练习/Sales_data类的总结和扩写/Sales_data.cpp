#include <iostream>
#include <string>

struct Sales_data; // 声明Sales_data函数
// Sales_data的非成员接口函数
Sales_data add(const Sales_data &, const Sales_data &);  // 求和生成
std::ostream &print(std::ostream &, const Sales_data &); // 报表展示
std::istream &read(std::istream &, Sales_data &);        // 录入数据

struct Sales_data // 定义Sales_data函数
{
    //------------------ 练习7.11 新增：四个构造函数 ----------------------
    // 1.默认构造函数
    Sales_data() = default;
    // 2.接受ISBN
    Sales_data(const std::string &s) : bookNo(s) {}
    // 3.完整参数构造函数
    Sales_data(const std::string &s, unsigned n, double p) : bookNo(s), units_sold(n), revenue(p * n) {}
    // 4.接受输入流的构造函数：从键盘或文件直接创建对象
    Sales_data(std::istream &is)
    {
        read(is, *this); // 复用已经写好的read函数
    }
    //-----------------------------------------------------------------

    std::string isbn() const { return bookNo; } // 只读书籍编号
    Sales_data &combine(const Sales_data &);    // 把另一个账本加到这个账本上并返回，原账本不变（销量和收入）
    double avg_price() const;                   // 计算均价
    std::string bookNo;                         // 书籍编号
    unsigned units_sold = 0;                    // 销售数量
    double revenue = 0.0;                       // 总收入
};

double Sales_data::avg_price() const
{
    if (units_sold)
        return revenue / units_sold;
    else
        return 0;
}

// 返回Sales_data类型的成员
Sales_data &Sales_data::combine(const Sales_data &rhs)
{
    units_sold += rhs.units_sold; // 把rhs的成员加到this对象的成员上
    revenue += rhs.revenue;
    return *this;
}

std::istream &read(std::istream &is, Sales_data &item)
{
    double price = 0;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = price * item.units_sold;
    return is;
}

std::ostream &print(std::ostream &os, const Sales_data &item)
{
    os << item.isbn() << " " << item.units_sold << " "
       << item.revenue << " " << item.avg_price();
    return os;
}

Sales_data add(const Sales_data &lhs, const Sales_data &rhs)
{
    Sales_data sum = lhs; // 拷贝lhs的数据成员给sum
    sum.combine(rhs);     // 把rhs的数据成员加到sum中
    return sum;
}

int main()
{
    std::cout << "请输入交易记录（书号 销量 单价）" << std::endl;
    //---练习 7.13 的核心---

    Sales_data total(std::cin);
    // 如果构造成功就进入if语句
    if (std::cin)
    {
        // 每次循环从cin中诞生一个新对象直到读不到数据为止
        while (true)
        {
            Sales_data trans(std::cin);
            if (!std::cin)
                break;
            if (total.isbn() == trans.isbn())
            {
                total.combine(trans);
            }
            else
            {
                print(std::cout, total) << std::endl;
                total = trans;
            }
        }

        // 打印最后一条记录的统计结构
        print(std::cout, total) << std::endl;
    }
    else
    {
        std::cerr << "没有有效数据！" << std::endl;
    }
    return 0;
}