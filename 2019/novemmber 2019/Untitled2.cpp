#include<iostream>
using namespace std;

class banking
{
public:
    string name;int id;double currentamm;int amount;
    int input(string n, int i,double ca)

    {
       name=n;
       id=i;
       currentamm=ca;


    }

    double ok(double cashin)
    {
        return amount+cashin;
    }

    double ko(double cashout)
    {
        return amount-cashout;
    }
};


int main()
{
    banking ob;

    ob.input(r,4,5);
    ob.ok(1);
    cout<<ok;
}
