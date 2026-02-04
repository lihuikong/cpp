#include<iostream>
using namespace std;

int main(){
    int grade;
    cin>>grade;
    if(grade>=90){
        cout<<"high pass";
    }else if(grade>=60){
        if(grade<75){
            cout<<"low pass";
        }else{
            cout<<"pass";
        }
    }else{
        cout<<"fail";
    }
    cout<<endl;
    return 0;
}