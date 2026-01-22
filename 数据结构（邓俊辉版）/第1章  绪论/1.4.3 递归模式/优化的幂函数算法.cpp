#include<iostream>
using namespace std;

inline long long sqr(long long a){return a * a;}

long long power2(int n){
    if( n == 0){
        return 1;
    }
    return (n & 1) ? sqr(power2( n >> 1)) << 1 : sqr(power2( n >> 1));
}

int main(){
    int m;
    cin >> m;
    cout << power2(m) << endl;
}