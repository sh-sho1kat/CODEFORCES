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
        bool flag=true;
        ll n,k;
        cin>>n>>k;
        if(n&1)
        {
            if(k==1)
            {
                yes;
                fr(1,n+1)cout<<i<<nl;
            }
            else no;
        }
        else
        {
            yes;
            ll p=1;
            ll a[n+5][k+5];
            for(ll i=1;i<=k;i++)
            {
                for(ll j=1;j<=n;j++)
                {
                    a[j][i]=p;
                    p++;
                }
            }
            for(ll i=1;i<=n;i++)
            {
                for(ll j=1;j<=k;j++)
                {
                    cout<<a[i][j]<<" ";
                }
                cout<<nl;
            }
        }
        
    }
    return SH;
}