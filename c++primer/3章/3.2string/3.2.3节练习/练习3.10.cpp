#include<iostream>
#include<string>
using namespace std;

int main(){
    string line;
    getline(cin,line);
    string result;
    for(auto &m:line){
        if(!ispunct(m)){
            result+=m;
        }
    }
    cout<<result<<endl;
    return 0;
}