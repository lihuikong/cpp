#include<iostream>
using namespace std;

typedef int score;
typedef char studentnumber[100];
int main(){
    score math;
    score chinese;
    score English;
    score Sports;
    studentnumber a;
    cin>>math>>chinese>>English>>Sports>>a;
    cout<<chinese<<"\n";
    cout<<math<<"\n";
    cout<<English<<"\n";
    cout<<Sports<<"\n";
    cout<<a<<endl;
    return 0;
}

//把score和studentnumber当作int和char数组用，看起来更方便，更易懂。