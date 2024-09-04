#include <bits/stdc++.h>
using namespace std;


#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define ll long long
#define mod 1000000007
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
        bool flag=false;
        ll n;
        cin>>n;
        ll a[n+5];
        fr(0,n) cin >> a[i];
        ll mx=a[1],mn=a[0];
        ll maax=0,miin=a[0];
        for(ll i=0;i<n-1;i++)
        {
            maax=max(maax,a[i]-a[i+1]);
         }
        for(ll i=1;i<n;i++)
        {
            if(a[i]>mx) mx=a[i];
        }
        fr(0,n-1) if(a[i]<mn) mn=a[i];
        ans=max((mx-a[0]),a[n-1]-mn);
        if(n==1) cout<<"0"<<nl;
        else if(maax>ans)
        {
            cout<<maax<<nl;
        }
        else
        cout<<ans<<nl;
    }
    return SH;
}