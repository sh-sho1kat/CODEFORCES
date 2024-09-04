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
    //cin>>t;
    //while(t--)
    {
        ll sum=0,tmp=0,res=0,cnt=0,count=0,ans=-1;
        bool flag=true;
        ll n;
        cin>>n>>t;
        ll a[n+5];
        fr(0,n)
        {
            cin>>a[i];
        }
        ll b[n+5];
        b[0]=0;
        for(ll i=1;i<=n;i++)
        {
            b[i]=a[i-1]+b[i-1];
        }
        //ap(b,n+1);
         while(t--)
        {
            ll m;
            cin>>m;
            ll l=0,r=n;
            ll mid;
            while(r>=l)
            {
                mid=l+(r-l)/2;
                if(b[mid]<m)
                {
                    ans=b[mid];
                    l=mid+1;
                }
                if(b[mid]>=m)
                {
                    r=mid-1;
                }
            } 
            cout<<l<<" "<<m-ans<<nl; 
        }
          
    }
    return SH;
}