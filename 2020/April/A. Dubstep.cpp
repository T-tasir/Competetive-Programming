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
#define         arrsize(a)      (sizeof(a)/sizeof(a[0]))
//#define       arrsize(a)      (sizeof(a)/sizeof(*a))
#define 	S(a)            scanf("%lld",&a)
#define 	SS(a,b)         scanf("%lld %lld",&a,&b)
#define 	SSS(a,b,c)      scanf("%lld %lld %lld",&a,&b,&c)
#define		gcd(a,b)        __gcd(a,b)
#define		lcm(a,b)        (a*b)/gcd(a,b)
#define		pi              acos(-1.0)
typedef        pair <int, int>   pii;
typedef       pair <ll, ll>      pll;
typedef      vector< pair <ll, ll> >      vpll;
typedef		vector<ll>      vll;
typedef		map<string,ll>      msl;
typedef		map<ll,ll>      mll;
#define yes cout << "YES\n"
#define no cout<<"NO\n"
//#define sort(x) sort(x.begin(), x.end())
//sort(a,a+n,greater<ll>())
//for (auto it = mp.begin(); it != mp.end(); ++it){}
#define MAX 1000005
#define mod 1000000007



int main()
{
//O_O ;
    string s;
    char x[100000];
    cin>>s;
    ll l=s.length();ll p=0;
    for(ll i=0,j=0; i<l; i++)
    {
        if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B'&&p==0)
        {
            i+=2;
            if(i>=l)
                break;

      }
      else if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B'&&p==1)
        {
            i+=2; x[j++]=ss;
            if(i>=l)
                break;

      }
      else
        {
            p=1;

            x[j++]=s[i];

        }
        //cout<<x<<"*"<<nn;


    }
    //}
    cout<<x<<nn;



    return 0;
}
