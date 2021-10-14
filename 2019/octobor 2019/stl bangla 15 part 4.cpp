//#include<bits/stdc++.h>
#include<iostream>
#include<stdio.h>
#include<set>
#include<iterator>
using namespace std;
int main()
{
    set<string>s;
    set<string>::iterator it;
    s.insert("dipta");
    s.insert("reza");
    s.insert("arnob");
    pair<set<string>::iterator,bool>p;
    p=s.insert("abdul");
    if(p.second==false)
    {
        cout<<"not insert"<<endl;
    }
    else{
        cout<<"insert"<<endl;
    }
}
