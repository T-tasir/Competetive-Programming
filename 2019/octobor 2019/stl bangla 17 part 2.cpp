#include<bits/stdc++.h>
#include<iostream>
#include<stdio.h>
#include<queue>
using namespace std;
int main()
{
    priority_queue<string>q;
    q.push("dipta");
    q.push("nabil");
    q.push("arnob");
    q.push("reza");
    while(!q.empty()){
        string x;
        x=q.top();
        cout<<x<<endl;
        q.pop();
    }
    return 0;
}
