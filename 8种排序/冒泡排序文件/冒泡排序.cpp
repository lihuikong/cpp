#include<iostream>
#include<vector>
using namespace std;

void bubblesort(vector<int>& arr){
    int size=arr.size();
    bool swapped=false;//为了防止外层循环重复循环（如果有一些数组是本来就排列好的，就没必要一直循环）。
    for(int i=0;i!=size-1;++i){//这是循环的遍数。
        swapped=false;
        for(int j=0;j!=size-1-i;++j){//这是每一层的循环
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);//交换两个数的顺序。
                swapped=true;//如果遍历一遍发现是排列好的数组就更改swapped的真值。
            }   
        }
        if(swapped==false){//如果有已经排列好的就直接退出。
            break;
        }
    }
}

int main(){
    srand(time(NULL));//随机生成数。
    vector<int> arr;
    cout<<"排列的原始数据:"<<endl;
    for(int i=0;i!=10;++i){
        arr.push_back(rand()%100);
        cout<<arr.back()<<" ";//输出arr数组尾部的数。
    }
    cout<<endl;
    bubblesort(arr);
    cout<<"排列后的数据是："<<endl;
    for(auto m:arr){
        cout<<m<<" ";
    }
    cout<<endl;
    return 0;
}