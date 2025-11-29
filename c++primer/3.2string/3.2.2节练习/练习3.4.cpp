#include<iostream>
#include<string>
using namespace std;

int main(){
    string line1,line2;
    getline(cin,line1);
    getline(cin,line2);
    if(line1.size()!=line2.size()){
        cout<<"长度不同"<<endl;
        cout<<(line1.size()>line2.size()?line1:line2)<<"更长"<<endl;
    }else{
        cout<<"等长，为："<<line1<<endl;
    }
    return 0;
}