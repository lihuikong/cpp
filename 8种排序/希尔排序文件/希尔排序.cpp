#include<iostream>
#include<vector>
using namespace std;

void shellsort(vector<int>& arr){
    int size=arr.size();
    for(int gap=size/2;gap>0;gap--)
    {
        for(int i=gap;i<size;++i)
        {
            int temp=arr[i];
            int j=i-gap;
            while(j>=0 && arr[j]>temp)
            {
                arr[j+gap]=arr[j];
                j-=gap;
            }
            arr[j+gap]=temp;
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
    shellsort(arr);
    cout<<"排列后的数据是："<<endl;
    for(auto m:arr){
        cout<<m<<" ";
    }
    cout<<endl;
    return 0;
}