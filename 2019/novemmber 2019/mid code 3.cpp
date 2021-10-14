#include<bits/stdc++.h>
using namespace std;
class student{
public:
    int x,y;
};
class teacher:public student{
    public:
    string  c;
};
int main()
{
    teacher ob;
    ob.x=3;
    ob.y=4;

    ob.c="tasir";

    cout<<ob.x<<endl;
    cout<<ob.y<<endl;
    cout<<ob.c<<endl;
    return 0;
}

