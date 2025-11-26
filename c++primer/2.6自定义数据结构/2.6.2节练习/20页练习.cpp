#include<iostream>
#include<string>

using namespace std;

struct Sales_data{
    string isbn;
    int price;
};

int main(){
    Sales_data book1,book2;
    int totalprice;
    cout<<"请输入第一本书的isbn和单价："<<endl;
    cin>>book1.isbn>>book1.price;
    cout<<"请输入第二本书的isbn和单价："<<endl;
    cin>>book2.isbn>>book2.price;
    if(book1.isbn==book2.isbn){
        cout<<book1.price+book2.price<<endl;
    }
    return 0;
}