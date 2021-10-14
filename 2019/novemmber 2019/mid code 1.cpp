#include<bits/stdc++.h>
using namespace std;
class coordinate{
    public:
    int a,b,c;
    void set(){
    a=5;
    b=10;
    c=20;
    }
    void show(){
    cout<<a<<' '<<b<<' '<<c<<endl;
    }
};
int main(){
    coordinate a1,a2;
    a1.set();
    a1.show();
    a2=a1;
    a2.show();
    return 0;
}




