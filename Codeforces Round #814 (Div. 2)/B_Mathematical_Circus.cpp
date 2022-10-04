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
        if(k%4==0)
        {
            no;
        }
        else
        {
            yes;
            if(k&1)
            {
                for(ll i=1;i<=n;i+=2)
                {
                    cout<<i<<" "<<i+1<<nl;
                }
            }
            else
            {
                for(ll i=4;i<=n;i+=4)
                {
                    cout<<i-1<<" "<<i<<nl;
                }
                for(ll i=2;i<=n;i+=4)
                {
                    cout<<i<<" "<<i-1<<nl;
                }
            }
        }
    }
    return SH;
}