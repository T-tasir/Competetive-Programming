#include<stdio.h>
#include<iostream>
#include<map>
#include<algorithm>
#include<iterator>
using namespace std;
int main()
{
    //freopen("input","r",stdin);
    map<string,int>m;
    map<string,int>::iterator it;
    m["dipta"]=43;
    m["arnob"]=42;
    //m["nsbil"]=41;
    m.insert(make_pair("nabil",41));
    printf("%d",m["arnob"]);
    return 0;
}
