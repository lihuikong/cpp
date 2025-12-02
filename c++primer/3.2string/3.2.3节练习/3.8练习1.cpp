#include<iostream>
#include<string>
using namespace std;

int main(){
    string line;
    while(getline(cin,line)){
        int n=0;
            while(n<line.size()){
                line[n]='x';
                ++n;
            }
            cout<<line;
    }
    cout<<endl;
    return 0;
}