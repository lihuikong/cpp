#include<iostream>
#include<string>
using namespace std;

int Romamath(string lin)
{
    const char *p = lin.data();
    int result = 0;
    auto getvalue=[](char c)
    {
        switch (c)
        {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default : return 0;
        }
    };
    while(*p !='\0')
    {
        int current = getvalue(*p);
        if(*(p + 1) && current < getvalue(*(p + 1)))
        {
            result -= current;
        }else
        {
            result += current;
        }
        ++p;
    }
    return result;
}

int main(){
    string lin;
    char m;
    while(cin >> m)
    {
        lin.push_back(m);
    }
    cout << "结果是：" << endl;
    cout << Romamath(lin) << endl;
    return 0;
}