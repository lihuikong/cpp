#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // 竞赛默认使用double，可以表达比float更高精度的小数。（float有效数字7位，double是15位）
    double x;
    cin >> x;
    // 使用固定小数模式，setprecision（）用于设置精度；fixed用于使用固定小数模式。
    cout << fixed << setprecision(3) << x / 1024.0 << endl;
    return 0;
}