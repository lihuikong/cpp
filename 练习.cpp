#include<iostream>
using namespace std;
/*函数 search（nums,target){
对于i从0到nums长度-1：
   对于j从0到nums长度-1：
      if(nums【i】+nums【j】==target){
      cout<<"["<<i<<","<<j<<"]"<<endl;
      }
}
*/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        for(int i=0;i!=n-1;++i){
            for(int j=0;j!=n-1;++j){
                if(nums[i]+nums[j]==target){
                    cout<<"["<<i<<","<<j<<"]"<<endl;
                }
            }
        }
    }
};