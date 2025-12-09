#include<iostream>
using namespace std;
int main(){
    int arr[10][20][30]={1,2,3,4};
    int ia[3][4]={{1,2,3},{4,5,6}};
    ia[2][3]=arr[0][0][0];
    int (&row)[4]=ia[1];
    //上面用定义、复制、和引用的方法对数组进定义和赋值。


    //用两层嵌套对一个数组赋值。
    constexpr size_t  rowCnt=3,colCnt=4;
    for(int i=0;i!=rowCnt;++i){
        for(int j=0;j!=colCnt;++j){
            ia[i][j]=i*colCnt+j;//将元素的位置序列当作他的值
        }
    }
    //在新的c++中可以使用新for类型。
    size_t cnt=0;
    for(auto &row:ia){
        for(auto &col:row){
            col=cnt;
            ++cnt;
        }
    }
}