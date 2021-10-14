#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={1,3,5,7,9,12};
    set<int>s(v.begin(),v.end());
    auto it=s.upper_bound(3);
    cout<<(it!=s.end()?to_string(*it):"not found")<<endl;

}
