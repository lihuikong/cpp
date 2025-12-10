#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    vector<int> text(100);
    int sought;
    auto beg=text.begin(),end=text.end();
    auto mid=text.begin()+(end-beg)/2;
    while(mid!=end&&*mid!=sought){
        if(sought<*mid){
            end=mid;
        }else{
            beg=mid+1;
        }
        mid=beg+(end-beg)/2;
    }
    cout<<*mid<<endl;
    return 0;
}

//只是介绍了二分法查找的原理，程序并无确切含义