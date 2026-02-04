#ifndef SALES_DATA_H
#define SALES_DATA_H
#include <iostream>
#include <string>
class Sales_data // 定义Sales_data函数
{
    //----------- 友元声明 -------------
    friend Sales_data add(const Sales_data &lhs, const Sales_data &rhs);
    friend std::istream &read(std::istream &is, Sales_data &item);
    friend std::ostream &print(std::ostream &os, const Sales_data &item);

public: // 添加公共访问说明符
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

private:                      // 添加私有访问说明符
    double avg_price() const; // 计算均价
    std::string bookNo;       // 书籍编号
    unsigned units_sold = 0;  // 销售数量
    double revenue = 0.0;     // 总收入
};

// Sales_data的非成员接口函数
Sales_data add(const Sales_data &, const Sales_data &);  // 求和生成
std::ostream &print(std::ostream &, const Sales_data &); // 报表展示
std::istream &read(std::istream &, Sales_data &);        // 录入数据

#endif