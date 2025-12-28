#include<iostream>
using namespace std;

int main()
{
    char m;
    int Acnt = 0 , Ecnt = 0 , Icnt = 0 , Ocnt = 0 , Ucnt = 0 ;
    while(cin >> m)
    {
        if( m == 'a')
        {
            Acnt += 1;
        }
        else if( m == 'e')
        {
            Ecnt += 1;
        }
        else if( m == 'i')
        {
            Icnt += 1;
        }
        else if( m == 'o')
        {
            Ocnt += 1;
        }
        else if( m == 'u')
        {
            Ucnt += 1;
        }
    }
    cout << "a:" << Acnt << endl;
    cout << "e:" << Ecnt << endl;
    cout << "i:" << Icnt << endl;
    cout << "o:" << Ocnt << endl;
    cout << "u:" << Ucnt << endl;
    return 0;
}