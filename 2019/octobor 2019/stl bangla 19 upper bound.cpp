#include<bits/stdc++.h>
#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;
int main()
{
    vector<int>v={1,3,5,7,9,12};
    auto it=upper_bound(v.begin(),v.end(),8);
    cout<<((it==v.end())?"not found":to_string(*it))<<endl;

}
