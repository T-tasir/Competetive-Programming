#include<iostream>
#include<cstring>
using namespace std;
class banking{
    int id,balance,amount;
    string name;
public:
    void input(){
        cin>>name>>id>>balance>>amount;
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
    c.input();
    cin>>a;
    if(a==d){
         c.deposit();
    }
    if(a==w){
         c.withdraw();
    }
    c.show();
    return 0;
}
