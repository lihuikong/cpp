#include<iostream>
using namespace std;

int main(){
    int ia[3][4]={
        {1,2,3,4},{5,6,7,8},{9,10,11,12}
    };
    int  row=sizeof(ia)/sizeof(ia[0]);
    int len=sizeof(ia[0])/sizeof(ia[0][0]);
    for(int i=0;i!=row;++i){
        for(int j=0;j!=len;++j){
            cout<<ia[i][j]<<" ";
        }
    }
    cout<<endl;
    return 0;
}