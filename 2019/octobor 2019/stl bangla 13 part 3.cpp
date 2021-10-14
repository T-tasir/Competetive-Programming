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
    m["diapta"]=43;
    m["arnob"]=42;
    m["arnob"]=45;
    //m["nabil"]=41;
    m.insert(make_pair("nabil",41));
    for(it=m.begin();it!=m.end();++it){
        cout<<it->first<<" "<<it->second<<endl;
    }
    return 0;


}
