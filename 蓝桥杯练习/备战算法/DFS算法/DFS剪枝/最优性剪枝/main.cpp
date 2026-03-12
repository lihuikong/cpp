// 题目：从 1 走到 target，每次可以 +1 或 +2，求最少用几步

#include<iostream>
using namespace std;

int target;
int ans = 1e9;

void dfs(int x,int step){
    if(x == target){
        if(step < ans) ans = step;
        return;
    }

    if(x > target) return;
    if(step >= ans) return;

    dfs(x + 1,step + 1);
    dfs(x + 2,step + 1);
}

int main(){
    cout << "请输入目标值" << endl;
    cin >> target;
    dfs(0,0);
    cout << ans << endl;
    return 0;
}