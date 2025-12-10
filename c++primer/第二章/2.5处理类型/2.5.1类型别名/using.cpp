#include<iostream>
using namespace std;

using score= int;
using id=char[100];
int main(){
    score English;
    id studentnumber;
    cin>>English;
    cin>>studentnumber;
    cout<<English<<"\n";
    cout<<studentnumber<<endl;
    return 0;
}

//using和typedef同理，但是新标准下，using更实用，语法更清晰。