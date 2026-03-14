#include <iostream>
using namespace std;

int main()
{
    int R, W, C;
    cin >> R >> W >> C;

    int reqR, reqW;
    if (C == 0)
    {
        reqR = 10;
        reqW = 100;
    }
    else
    {
        reqR = 5;
        reqW = 200;
    }

    if (R >= reqR && W <= reqW)
    {
        cout << "Cun Ru" << endl;
        cout << R;
    }
    else if (R < reqR && W <= reqW)
    {
        cout << "Bao Zhi Qi Duan" << endl;
        cout << R;
    }
    else if (R >= reqR && W > reqW)
    {
        cout << "Chao Zhong" << endl;
        cout << W;
    }
    else
    {
        cout << "Wu Fa Cun" << endl;
        cout << R;
    }

    return 0;
}