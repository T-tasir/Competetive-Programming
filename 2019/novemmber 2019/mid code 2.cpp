#include<bits/stdc++.h>
using namespace std;
class football{
    public:
   int weight,radious;
   void input(int x,int y){
      weight=x;
      radious=y;
   }
   void input()
   {
       weight=1;
       radious=2;
   }
   void show()
   {
       cout<<radious<<endl;
       cout<<weight<<endl;
   }
};
int main()
{
    football ob,ob2;
    ob.input(10,20);
    ob2.input();
     ob.show();
     ob2.show();
     return 0;
}
