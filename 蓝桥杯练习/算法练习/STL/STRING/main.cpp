#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    string s1 = "hello ";
    string s2 = "world";
    int length, pos = 6, len = 5;
    cin >> s;
    cin.ignore();
    getline(cin, s);
    length = s.size(); // 长度
    cout << "The string's length is:" << length << endl;
    s = s1 + s2;                   // 拼接
    string t = s.substr(pos, len); // 子串
    int p = s.find("abc");         // 在字符串中查找子串“abc”第一次出现的位置，并且给出下标存在p中。
    if (p == -1)
    {
        cout << "'abc' didn't exist in the string line." << endl;
    }
    else
    {
        cout << "'abc' was appeared firstly at " << p << endl;
    }
    return 0;
}