#include<stdio.h>
#include<iostream>
#include<utility>
#include<vector>
using namespace std;
int main()
{
    //frepen("input","r",stdin);
    vector<pair<int,string> >v;
    v.push_back(make_pair(21,"dipta"));
    v.push_back(make_pair(22,"nabil"));
    cout<<v[0].first<<endl;
    return 0;

}
