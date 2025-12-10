#include<iostream>
#include<string>

using namespace std;

struct Sales_data{
        string bookNo;
        unsigned unites_sold=0;
        double revenue=0.0;
        void display(){
            cout<<bookNo<<" "<<revenue<<" "<<unites_sold<<endl;
        }
    };
    Sales_data data1,data2,*salesptr;

int main(){
    cin>>data1.bookNo>>data1.revenue>>data1.unites_sold;
    cin>>data2.bookNo>>data2.revenue>>data2.unites_sold;
    salesptr=&data1;
    data1.display();
    data2.display();
    return 0;
}