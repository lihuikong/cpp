#include<iostream>
#include<string>
using namespace std;

int main(){
    string line;
    getline(cin,line);
    for(char m:line){
        if(m==' '){
            continue;
        }else{
            m='x';
        }
    }
    cout<<line<<endl;
    return 0;
}