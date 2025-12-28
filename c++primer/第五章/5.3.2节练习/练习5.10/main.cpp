#include<iostream>
using namespace std;

int main()
{
    char m;
    int aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
    while(cin >> m)
    {
        switch (m)
        {
            case 'a':case 'A':
            aCnt ++;
            break;
            case 'e':case 'E':
            eCnt ++;
            break;
            case 'i':case 'I':
            iCnt ++;
            break;
            case 'o':case 'O':
            oCnt ++;
            break;
            case 'u':case 'U':
            uCnt ++;
            break;
            default:
            break;
        }
    }
    cout << "a/A:" << aCnt << endl;
    cout << "e/E:" << eCnt << endl;
    cout << "i/I:" << iCnt << endl;
    cout << "o/O:" << oCnt << endl;
    cout << "u/U:" << uCnt << endl;
    return 0;
}