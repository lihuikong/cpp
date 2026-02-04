#include"Sales_data.h"

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