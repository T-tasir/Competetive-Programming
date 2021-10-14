#include<iostream>
#include<cstring>
using namespace std;
class banking{
    int id,balance,amount;
    string name;
public:
    banking(){
        cout<<"Enter your name, id, balance: "<<endl;
        cin>>name>>id>>balance;
    }
    void input(){
        cin>>amount;
    }
    void deposit(){
        balance=balance+amount;
    }
    void withdraw(){
        balance=balance-amount;
    }
    void show(){
        cout<<balance<<endl;
    }
};
int main()
{
    banking c;
    string a,d,w;
    d="deposit";
    w="withdraw";
    cout<<"Enter Amount:";
    c.input();
    cout<<"deposit or withdraw"<<endl;
    cin>>a;
    if(a==d){
         c.deposit();
    }
    else if(a==w){
         c.withdraw();
    }
    c.show();
    return 0;
}
