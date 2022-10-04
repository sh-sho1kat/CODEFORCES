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
        ll n,m;
        cin>>n>>m;
        if(n>m) no;
        else if(n&1)
        {
            yes;
            for(ll i=1;i<n;i++)
            {
                cout<<"1 ";
            }
            cout<<m-n+1<<nl;
        }
        else if(!(m&1))
        {
            yes;
            for(ll i=1;i<n-1;i++)
            {
                cout<<"1 ";
            }
            ll p=(m-n+2)/2;
            cout<<p<<" "<<p<<nl;
        }
        else no;

    }
    return SH;
}