#include<iostream>
using namespace std;
class rectangle{
int height, weidth;
public:
    void set(int x,int y){
    height=x;
    weidth=y;
    }
    int area(){
    return height*weidth;

    }
    friend class cost;
};
class cost{
int costrate;
public:
    void setvalue(int i){
    costrate =i;
    }
int totalcost(rectangle A){
    return costrate*A.height*A.weidth;
}
};
int main()
{
    rectangle r;
    r.set(5,3);
    cout<<r.area()<<endl;
    cost c;
    c.setvalue(100);
    cout<<c.totalcost(r)<<endl;
}
