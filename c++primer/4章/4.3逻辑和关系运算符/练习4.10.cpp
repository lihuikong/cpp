#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> line;
    int m;
    while(cin>>m&&m!=42){
        line.push_back(m);
    }
    for(int n:line){
        cout<<n<<" ";
    }
    cout<<endl;
    return 0;
}