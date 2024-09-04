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
    //ll t;
    //cin>>t;
    //while(t--)
    {
        ll sum=0,tmp=0,res=0,cnt=0,count=0,ans=0,ssum=0;
        bool flag=true;
        ll n,k;
        cin>>n>>k;
        ll a[n+5];
        bool b[n+5];
        fr(0,n) cin >> a[i];
        fr(0,n) cin >> b[i];
        fr(0,n) if(b[i]) res+=a[i];

        fr(0,k) sum+=a[i];
        fr(0,k) if(b[i]) ssum+=a[i];
        ll mx=0,l=0,r=k;
        for(ll i=k;i<=n;i++)
        {
            mx=max(mx,(sum-ssum));
            sum-=a[l];
            sum+=a[r];
            if(b[l]) ssum-=a[l];
            if(b[r]) ssum+=a[r];
            l++;
            r++;
        }
        cout<<res+mx<<nl;
    }
    return SH;
}