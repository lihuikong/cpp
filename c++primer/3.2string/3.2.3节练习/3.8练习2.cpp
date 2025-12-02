#include<iostream>
#include<string>
using namespace std;

int main(){
    string line;
    for(int n=0;;++n){
        getline(cin,line);
        for(int i=0;i<=line.size();++i){
            line[i]='x';
        }
        cout<<line;
    }
    cout<<endl;
    return 0;
}