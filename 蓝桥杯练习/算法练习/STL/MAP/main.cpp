// map就是键值对
#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    // 声明：
    map<string, int> mp;
    string s;
    while (cin >> s)
    {
        mp[s]++;
    }

    // 遍历
    for (auto it : mp)
    {
        cout << it.first << " " << it.second << endl;
    }

    // 判断是否存在：
    if (mp.count("apple"))
    {
        cout << "'apple' is appearing." << endl;
    }
    return 0;
}