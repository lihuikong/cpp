#include<iostream>
#include<string>
using namespace std;

int main(){
    string line;
    string sum;
    while(getline(cin,line)){
        if(line.size()==0){
            break;
        }
        sum=sum+" "+line;
    }
    cout<<sum<<endl;
    return 0;
}