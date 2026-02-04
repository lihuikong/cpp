#include<iostream>
using namespace std;

int Example1()
    {
        static int count = 0;
        return ++count;
    }

int main()
{
    int example1 = 0;
    for(int i = 0; i < 10 ; ++i)
    {
        example1 += Example1();
    }
    cout << example1 << endl;
    return 0;
}