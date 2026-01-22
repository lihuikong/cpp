#include<iostream>
#include<vector>
using namespace std;

int sum(const vector<int>& A, int n){
    if(1 > n){
        return 0;
    }else{
        return sum(A, n-1) + A[n - 1];
    }
}

int main(){
    int m;
    cin >> m;
    vector<int> A(m);
    for(int i = 0 ; i < m; ++i){
        cin >> A[i];
    }
    cout<< sum(A,m) << endl;
    return 0;
}