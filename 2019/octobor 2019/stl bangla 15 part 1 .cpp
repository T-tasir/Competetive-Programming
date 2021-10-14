//#include<bits/stdc++.h>
#include<iostream>
#include<stdio.h>
#include<set>
#include<iterator>
using namespace std;
int main()
{
    //freopen("input","r",stdin);
    set<int>s;
    set<int>::iterator it;
    s.insert(10);
    s.insert(3);
    s.insert(5);
    for(it=s.begin();it!=s.end();++it){
        cout<<*it<<" ";

    }
    cout<<endl;
}
