#include<iostream>
#include<string>
using namespace std;

int main(){
    string line1="hello";
    string line2="hello world!";
    string line3="hi";
    if(line1<line2){
        cout<<"line1<line2"<<endl;
    }
    if(line2<line3){
        cout<<"line2<line3"<<endl;
    }
    return 0;
}
//相对的位置上的字符一样但是长度较短则小于关系
//有不同的字符，就比较第一对不同的字符，然后比较顺序，看大小。