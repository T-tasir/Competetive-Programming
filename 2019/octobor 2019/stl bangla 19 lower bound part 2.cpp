#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={1,3,5,7,9,11,13};
    auto it=lower_bound(v.begin(),v.end(),14);
    //cout<<distance(v.begin(),it)<<endl;
    if(it==v.end())
        cout<<"not found"<<endl;
    else
        cout<<"found"<<endl;

    return 0;
}
