#include<stdio.h>
#include<iostream>
#include<map>
#include<iterator>
using namespace std;
int main()
{
    //freopen("input","r","stdin");
    map<string,int>m;
    map<string,int>::iterator it;
    m["dipta"]=43;
    m["arnob"]=42;
    m["arnob"]=45;
     //m["nabil"]=41;
     m.insert(make_pair("nabil",41));
     it=m.begin();
     cout<<it->first<<"\t";
     cout<<it->second<<endl;
     return 0;
}
