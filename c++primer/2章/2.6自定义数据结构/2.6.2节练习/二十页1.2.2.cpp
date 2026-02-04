#include<iostream>
#include<string>

using namespace std;

struct Sales_data{
    string bookNo;//书籍isbn
    unsigned unites_sold=0;//销售量，初始化为0
    double price=0.0;//单价
    double revenue=0.0;//销售额
    void calculateRevenue(){
        revenue=unites_sold*price;
    }
};

int main(){
    Sales_data total,trans;
    if(cin>>total.bookNo>>total.unites_sold>>total.price){
        total.calculateRevenue();
        while(cin>>trans.bookNo>>trans.unites_sold>>trans.price){
            trans.calculateRevenue();
            if(total.bookNo==trans.bookNo){
                total.unites_sold+=trans.unites_sold;
                total.revenue+=trans.revenue;
            }else{
                cout<<total.bookNo<<" "
                <<total.unites_sold<<" "
                <<total.revenue<<endl;
                total=trans;
            }
        }
        cout<<total.bookNo<<" "
        <<total.unites_sold<<" "
        <<total.revenue<<endl;
    }else{
        cerr<<"没有数据输入"<<endl;
        return -1;
    }
    return 0;
}