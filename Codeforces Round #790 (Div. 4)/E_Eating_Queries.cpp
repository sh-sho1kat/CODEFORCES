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
        ll n,q;
        cin>>n>>q;
        ll a[n+5];
        fr(0,n)cin>>a[i];
        sort(a,a+n,greater<ll>());
        vector <ll> v;
        for(ll i=0;i<n;i++)
        {
            sum+=a[i];
            v.push_back(sum);
        }
        //ap(v,n);
        while(q--)
        {
            ll x;
            cin>>x;
            ll l=0,r=n-1,mid;
            ans=-1;
            while(l<=r)
            {
                mid=l+(r-l)/2;
                if(v[mid]>=x)
                {
                    ans=mid;
                    r=mid-1;
                }
                // else if(v[mid]>x)
                // {
                //     r=mid-1;
                // }
                else if(v[mid]<x)
                {
                    l=mid+1;
                }

            }
            cout<< ((ans==-1)? ans : ans+1 )<<nl;
        }
    }
    return SH;
}