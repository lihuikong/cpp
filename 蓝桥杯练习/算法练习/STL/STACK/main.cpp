#include <iostream>
#include <stack>
using namespace std;

// 声明
int main()
{
    // 声明
    stack<int> st;

    int n, m;

    cout << "How many numbers do you want to enter?" << endl;
    cin >> n;
    cout << "Enter them one by one" << endl;
    // 操作：
    for (int i = 0; i < n; i++)
    {
        cin >> m;
        st.push(m);
    }
    st.pop();
    cout << st.top();
    if (st.empty())
    {
        cout << "Nothing is set";
    }
    cout << endl;
    return 0;
}