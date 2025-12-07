#include<iostream>
#include<vector>
using namespace std;

void create_array(vector<int>& vec){
    for(int i=0;i<10;++i){
        vec[i]=i;
    }
}
//create_attay函数意义就是为了给vector型输入元素值。
int main(){
    vector<int> vec(10);
    create_array(vec);
    for(auto &m:vec){
        cout<<m<<" ";
    }
    cout<<endl;
    return 0;
}