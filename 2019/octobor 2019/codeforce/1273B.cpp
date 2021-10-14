#include<bits/stdc++.h>
using namespace std;
#define int long long
#define vvi vector<vector<int>>
#define vi vector<int>
#define vpii vector<pair<int,int>>
#define ff first
#define ss second
#define all(x) x.begin(),x.end()
#define ffor(i,n) for(int i = 0; i < n; ++i)
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> a(n),b(n),pos(n + 1);
    for(int i = 0; i < n; ++i)
    {
        cin >> a[i];
        pos[a[i]] = i;
    }
    int ans = 0;
    int maxi = 0;
    set<int> done;
    for(int i = 0; i < n; ++i){
        cin >> b[i];
    }

    for(int i = n - 1; i >= 0; --i){
        auto it = done.upper_bound(pos[b[i]]);
        if(it != done.begin()){
            ans++;
        }
        done.insert(pos[b[i]]);
    }
    cout << ans;
}
