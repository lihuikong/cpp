#include<iostream>
#include<vector>
using namespace std;

void selectedsort(vector<int>& arr){
    int size=arr.size();
    for(int i=0;i<size-1;++i){
        int minPos=i;
        for(int j=i+1;j<size;++j){
            if(arr[j]<arr[minPos]){
                minPos=j;
            }
        }
        if(minPos!=i){
            swap(arr[i],arr[minPos]);
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
    selectedsort(arr);
    cout<<"排列后的数据是："<<endl;
    for(auto m:arr){
        cout<<m<<" ";
    }
    cout<<endl;
    return 0;
}