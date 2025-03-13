#include <bits/stdc++.h>
using namespace std;


//2025-02-06 14:30:16
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define mod 1000000007
#define inf (1LL << 62)
#define all(x) x.begin(), x.end()
#define eb push_back
#define ff first
#define ss second
#define yes cout<<"YES"<<nl
#define no cout<<"NO"<<nl
#define dtob(bits, n) bitset<bits>(n).to_string()
#define btod(bin) stoll(bin, nullptr, 2)
#define ok cout<<"Eureka"<<nl
#define nl '\n'
#define SH 0
typedef long long ll;
typedef pair<ll, ll> pll;
typedef vector<ll> vl;
typedef vector<pll> vpll;


ll mn[1005];
void pre_calc()
{
    mn[1]=0;
    for(ll i=2;i<=1005;i++)
        mn[i]=inf;
    for(ll i=1;i<=1000;i++)
    {
        for(ll j=1;j<=i;j++)
        {
            if(i+i/j<=1000)
                mn[i+i/j] = min(mn[i+i/j],mn[i]+1);
        }
    }
}


int main()
{
    fastio;
    ll t;
    cin>>t;
    pre_calc();
    while(t--)
    {
        ll sum=0,tmp=0,res=0,cnt=0,ct=0,ans=0,mx=0;
        bool flag=true,fun=false,f=false;
        ll n,k;
        cin>>n>>k;
        ll a[n+5];
        for(ll i=1;i<=n;i++)
            cin >> a[i];
        ll b[n+5];
        for(ll i=1;i<=n;i++)
            cin>>b[i], sum += b[i];
        for(ll i=1;i<=n;i++)
            a[i] = mn[a[i]];
        if(k>=20000)
        {
            cout<<sum<<nl;
            continue;
        }
        ll dp[n+5][k+5]={};
        for(ll i=1;i<=n;i++)
        {
            for(ll j=0;j<=k;j++)
            {
                if(j>=a[i])
                    dp[i][j] = max(dp[i-1][j],dp[i-1][j-a[i]]+b[i]);
                else
                    dp[i][j] = dp[i-1][j];
            }
        }
        cout<<dp[n][k]<<nl;
        
    }
    return SH;
}