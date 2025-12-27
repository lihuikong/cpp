#include<iostream>
#include<string>
#include<stack>
using namespace std;

bool isValid(string s)
{
    stack<char> stk;
    for(auto ch:s)
    {
        if(ch == '(' || ch == '[' || ch == '{')
        {
            stk.push(ch);
        }
        else
        {
            if(stk.empty())
            {
                return false;
            }
            char top = stk.top();
            if((ch == ')' && top == '(')
            || (ch == ']' && top == '[')
            || (ch == '}' && top == '{'))
            {
                stk.pop();
            }
            else
            {
                return false;
            }
        }
    }
    return stk.empty();
}

int main()
{
    string s;
    char m;
    while(cin >> m)
    {
        s.push_back(m);
    }
    if(isValid(s))
    {
        cout << "pass" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
    return 0;
}