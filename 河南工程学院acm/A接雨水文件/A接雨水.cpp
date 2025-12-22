#include<iostream>
#include<vector>
using namespace std;

int main()
{
    //输入有几个柱子和它的高度
    int n;
    vector<int> arr;
    cin>>n;
    int m;
    int temp = 0;
    for(int l=0;l!=n;++l){
        cin>>m;
        arr.push_back(m);
    }
    //第一个for遍历整个数组，作为基准。
    //第二个for找到比基准大的数后开始计算两个位置之间能存多少雨滴。
    //用基准减去中间的每个柱子的高度后相加。
    int i=0;
    for(int j = i+1;j != n;++j)
    {
        if(arr[j] >= arr[i])
        {
            for(int k = i;k != j;++k)
            {
                temp += arr[i] - arr[k];
            }
            i = j;
            break;
        }
    }
    cout<<temp<<endl;
    return 0;
}