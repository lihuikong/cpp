#include<iostream>
#include<string>
#include<vector>
using namespace std;

string longestCommonPrefix(vector<string>& strs) 
{
    if (strs.empty()) return "";
    string lin = "";
    int minLength = strs[0].size();
    //先进行垂直深入每个字符
    for (int i = 1; i < strs.size(); i++) {
        if (strs[i].size() < minLength) {
            minLength = strs[i].size();
        }
    }
    //再横向遍历每个字符串。
    for(int i = 0; i < minLength; ++i)
    {
        char currentChar = strs[0][i];
        bool ins = true;
        for(int j = 1; j < strs.size(); ++j)
        {
            if(strs[j][i] != currentChar )
            {
                ins = false;
                break;
            }
        }
        if(ins)
        {
            lin.push_back(currentChar);
        }else
        {
            break;
        }
    }
    return lin;
}

int main()
{
    vector<string> strs;
    string k;
    while(cin >> k)
    {
        strs.push_back(k);
    }
    string result = longestCommonPrefix(strs);
    if(result.empty()) {
        cout << " \"\"" << endl;
    } else {
        cout << "\"" << result << "\"" << endl;
    }
    return 0;
}