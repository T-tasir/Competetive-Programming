#include<iostream>
#include<stdio.h>
#include<utility>
#include<iterator>
#include<vector>
using namespace std;
int main()
{
    //freopen("input","r",stdin);
    vector<pair<int,string> >v;
    vector<pair<int,string> >:: iterator it;
    v.push_back(make_pair(21,"dipta"));
    v.push_back(make_pair(22,"nabil"));
    for(it=v.begin();it!=v.end();++it){
        cout<<it->first<<" "<<it->second<<endl;
    }
    return 0;


}
