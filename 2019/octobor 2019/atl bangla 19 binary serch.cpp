#include<bits/stdc++.h>
#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;
int main()
{
    //freopen("input","r",stdin);

    vector<int>v= {1,3,5,8,9,12};
    bool ans=binary_search(v.begin(),v.end(),3);
    if(ans)
        cout<<"found"<<endl;
    else
        cout<<"not found"<<endl;

}
