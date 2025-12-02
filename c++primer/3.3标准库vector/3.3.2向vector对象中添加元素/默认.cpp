#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    string word;
    vector<string> text;
    while(getline(cin,word)){
        text.push_back(word);
        if(word.empty()){
            break;
        }
    }
    for(string x:text){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}