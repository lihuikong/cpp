#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, m, d;
    string s;
    char ch;
    cin >> n >> s >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> d >> ch;

        if (d == 1)
        {
            s.push_back(ch);
        }
        else if (d == 2)
        {
            bool vis = false;
            for (int j = 0; j < n;) // 不直接进行j++因为：如果删掉了一个字符，下一次应该还是当前位置检查
            {
                if (s[j] == ch)
                {
                    vis = true;
                    s.erase(j, 1);
                }
                else
                {
                    j++;
                }
            }

            if (!vis)
            {
                s.push_back(ch);
            }
        }
    }
    if (s.empty())
    {
        cout << "NULL" << endl;
    }
    else
    {
        cout << s << endl;
    }

    return 0;
}