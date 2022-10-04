#include <bits/stdc++.h>
using namespace std;


#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define ll long long
#define mod 1000000007
#define all(x) x.begin(), x.end()
#define fr(s,n) for(ll i=s;i<n;i++)
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define nl '\n'
#define SH 0

#define ap(arr,n) for(ll i=0;i<n;i++) cout<<arr[i]<<" ";cout<<endl;
#define ok cout<<"all right"<<endl




int main()
{
    fastio;
    ll t;
    cin>>t;
    while(t--)
    {
        ll sum=0,tmp=0,res=0,cnt=0,count=0,ans=0;
        bool flag=true;
        ll n;
        cin >> n;
        ll a[n+5];
        fr(0,n) cin >> a[i];
        // ll m[200005]={};
        map < ll ,ll > m;
        fr(0,n) m[a[i]]++;
        // fr(0,200005)
        // {
        //     res=max(res,m[i]);
        //     if(m[i]>0) count++;
        // }
        for(auto u : m)
        {
            res=max(res,u.second);
            if(u.second>0) count++;
        }
        ans=min(res,count);
        if(res==count) ans--;
        cout<<ans<<nl;

    }
    
    return SH;
}