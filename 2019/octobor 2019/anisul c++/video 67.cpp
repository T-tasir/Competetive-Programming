#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    int id;
    double gpa;
    void setvalue(int x,double y)
    {
        id=x;
        gpa=y;
    }
    void display()
    {
        cout<<id<<" "<<gpa<<endl;
    }

};



int main()
{
    student alim;
    alim.setvalue(256,3.33);
    alim.display();


}
