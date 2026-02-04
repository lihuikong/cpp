#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    string line;
    vector<string> text;
    while(getline(cin,line)){
        if(line.empty()){
            break;
        }
        text.push_back(line);
    }
    for(string m:text){
        cout<<m<<"\n";
    }
    cout<<endl;
    return 0;
}