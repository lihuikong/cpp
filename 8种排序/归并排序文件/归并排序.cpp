#include<iostream>
#include<vector>
using namespace std;

void mergesort(vector<int>& arr,int left,int right,vector<int> temp)
{
    if(left >= right)
    {
        return;
    }
    int mid = left + (right - left) / 2;//标记中心，从中心开始将原来的数组一分为二。
    //分别排序左右两个数组。
    mergesort(arr,left,mid,temp);
    mergesort(arr,mid + 1,right,temp);
    int i = left,j = mid + 1;
    int index = 0;
    while(i <= mid && j <= right)//将此刻两个数组里的元素一一比较，知道有一边的数组先全部放入temp中。
    {
        if (arr[i] <= arr[j])
        {
            temp[index++] = arr[i++];
        }
        else
        {
            temp[index++] = arr[j++];
        }
    }
    while(i <= mid)//此时已经有一边的数组按序全部放入了temp中，直接将剩下已排好序的元素放入temp中。
    {
        temp[index++] = arr[i++];
    }
    while(j <= right)
    {
        temp[index++] = arr[j++];
    }
    for(int k = 0;k < index;++k)
    {
        arr[left + k] = temp[k];
    }
}
void mergesort(vector<int>& arr)//重载函数，使得输入的时候比较方便。
{
    if(arr.empty()){
        return;
    }
    vector<int> temp(arr.size());
    mergesort(arr,0,arr.size()-1,temp);
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
    mergesort(arr);
    cout<<"排列后的数据是："<<endl;
    for(auto m:arr){
        cout<<m<<" ";
    }
    cout<<endl;
    return 0;
}