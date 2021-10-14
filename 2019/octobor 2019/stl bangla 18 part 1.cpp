#include<bits/stdc++.h>
#include<iostream>
#include<stdio.h>
#include<map>
using namespace std;
int main()
{
    multimap<string,int>m;
    multimap<string,int>::iterator it;
    m.insert(make_pair("dipta",43));
    m.insert(make_pair("dipta",41));
    m.insert(make_pair("dipta",41));
    for(it=m.begin();it!=m.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
    return 0;
}
