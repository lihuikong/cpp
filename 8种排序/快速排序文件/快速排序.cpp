#include<iostream>
#include<vector>
using namespace std;

void quicksort(vector<int>& arr,int left,int right){
    if(left>right)
    {
        return;
    }
    int privot=arr[(left+right)/2];
    int begin = left,end = right;
    while(begin <= end)
    {
        while(arr[begin] < privot && begin <= end)
        {
            begin++;
        }
        while(arr[end] > privot && begin <= end)
        {
            end--;
        }
        if(begin <= end)
        {
            swap(arr[begin],arr[end]);
            begin++;
            end--;
        }
    }
    quicksort(arr,left,end);
    quicksort(arr,begin,right);
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
    quicksort(arr,0,arr.size()-1);
    cout<<"排列后的数据是："<<endl;
    for(auto m:arr){
        cout<<m<<" ";
    }
    cout<<endl;
    return 0;
}