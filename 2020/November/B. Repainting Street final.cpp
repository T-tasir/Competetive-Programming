#include<bits/stdc++.h>
using namespace std;
typedef		long long       ll;
typedef         long double      dl;
typedef     unsigned long long  ull;
#define		pb              push_back
#define		PB              pop_back
#define		nn              "\n"
#define     O_O             ios_base::sync_with_stdio(false); cin.tie(NULL)
#define		all(p)          p.begin(),p.end()
#define		zz(v)           (ll)v.size()
#define		ss              ' '
#define	       MEM(a,b)         memset(a,(b),sizeof(a))
#define	       CLR(p)           memset(p,0,sizeof(p))
#define rep0(i,b) for(ll i=0;i<(b);i++)
#define rep(i,b) for(ll i=1;i<=(b);i++)
#define f2(i,a,b) for(ll i=(a);i<=(b);i++)
#define fr(i,b,a) for(ll i=(b);i>=(a);i--)
//#define rep(i,a,b,c) for(int i=(a);i!=(b);i+=(c))
#define         arrsize(a)      (sizeof(a)/sizeof(a[0]))
//#define       arrsize(a)      (sizeof(a)/sizeof(*a))
#define 	S(a)            scanf("%lld",&a)
#define 	SS(a,b)         scanf("%lld %lld",&a,&b)
#define 	SSS(a,b,c)      scanf("%lld %lld %lld",&a,&b,&c)
#define		gcd(a,b)        __gcd(a,b)
#define		lcm(a,b)        (a*b)/gcd(a,b)
#define		pi              acos(-1.0)
#define	       ff               first
#define	       sc              second
typedef        pair <int, int>   pii;
typedef       pair <ll, ll>      pll;
typedef      vector< pair <ll, ll> >      vpll;
typedef		vector<ll>      vll;
typedef		map<string,ll>      msl;
typedef		map<ll,ll>      mll;
#define yes cout << "YES\n"
#define no cout<<"NO\n"
bool comp(pair<ll,ll> a,pair<ll,ll> b)
{
    if(a.first != b.first) return a.first > b.first;
    else
    return a.second > b.second;
}
//memset(ar,-1,sizeof(ar));
//#define sort(x) sort(x.begin(), x.end())
//sort(a,a+n,greater<ll>())
//for (auto it = mp.begin(); it != mp.end(); ++it){}
// string x(w.size(),'1');
#define MAX 1000005
#define precision(a) fixed << setprecision(a)

#define mod 1000000007

 ll ar[MAX];

int main()
{
 //O_O ;
   ll t;
   cin>>t;
   while(t--){
        ll n,k;cin>>n>>k;
        set<ll>st;
   rep(i,n)
   {
       ll x;cin>>x;
       st.insert(x);
       ar[i]=x;

   }
   ll ans2=INT_MAX;
   for (auto it = st.begin(); it != st.end(); ++it){
        ll x=*it;
        ll index=1,ans=0;
       // cout<<x<<nn;
       for(ll i=1;i<=n;i++)
        {
            if(ar[i]!=x)
            {
                i+=k;
                ans++;
                i--;
            }


        }


        ans2=min(ans2,ans);

   }
   cout<<ans2<<nn;
   st.clear();


   }


    return 0;
}