#include<bits/stdc++.h>
#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;
int main()
{
    vector<int>v={1,3,5,7,9,12};
    vector<int>::iterator it=lower_bound(v.begin(),v.end(),6);
    cout<<*it<<endl;
    //cout<<distance(v.begin(),it)<<endl;
    cout<<(it-v.begin())<<endl;


}
