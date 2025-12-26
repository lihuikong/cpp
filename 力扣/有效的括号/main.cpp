#include<iostream>
#include<string>
#include<stack>
using namespace std;

bool isValid(string s)
{
    stack<char> stk;
    for( auto ch:s)
    {
        if (ch == '(' || ch == '{' || ch == '[') 
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
            if((ch == ')' && top == '(') ||
               (ch == '}' && top == '{') ||
               (ch == ']' && top == '['))
            {
            stk.pop();
            }else
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
    char l;
    while(cin >> l)
    {
        s.push_back(l);
    }
    if(isValid(s))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
    return 0;
}