//#include<bits/stdc++.h>
#include<iostream>
#include<stdio.h>
#include<set>
#include<iterator>
using namespace std;
int main()
{
    //freopen("input","r",stdin);
    set<string>s;
    set<string>::iterator  it;
    s.insert("dipta");
    s.insert("reza");
    s.insert("nabil");
    s.insert("arnob");
    for(it=s.begin();it!=s.end();++it){
        cout<<*it<<" ";

    }
    cout<<endl;
    return 0;


}
