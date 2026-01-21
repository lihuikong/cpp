#include<iostream>
using namespace std;

int hailstone(int n)
{
    int length = 1;
    while(1 < n)
    {
        (n % 2) ? n = 3 * n + 1 : n /= 2;
        length++;
    }
    return length;
}
int main()
{
    int m;
     cin >> m;
    cout << hailstone(m) << endl;
    return 0; 
}