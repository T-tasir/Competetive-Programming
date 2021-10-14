#include<bits/stdc++.h>
#include<stdio.h>
#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<string>s;
    s.push("dipto");
    s.push("nabil");
    s.push("arnob");
    while(!s.empty()){
        string x;
        x=s.top();
        cout<<x<<endl;
        s.pop();

    }
}
