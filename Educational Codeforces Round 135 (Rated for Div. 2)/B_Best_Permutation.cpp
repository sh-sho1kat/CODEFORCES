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
        ll n;
        cin>>n;
        if(n==4)
        {
            cout<<"2 1 3 4"<<nl;
        }
       else if((n+1)%3==0)
       {
            for(ll i=1;i<=n;i++)
            {
                cout<<i<<" ";
            }
            cout<<nl;
       }
       else if(n%3==0)
       {
            cout<<"1 "<<"2 "<<n-2<<" ";
            for(ll i=3;i<=n-3;i++)
            {
                cout<<i<<" ";
            }
            cout<<n-1<<" "<<n;
            cout<<nl;
       }
       else if((n+2)%3==0)
       {
            cout<<n-2<<" "<<n-3<<" ";
            for(ll i=1;i<=n-4;i++)
            {
                cout<<i<<" ";
            }
            cout<<n-1<<" "<<n;
            cout<<nl;
       }
    }
    return SH;
}