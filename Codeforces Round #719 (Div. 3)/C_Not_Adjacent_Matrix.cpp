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
        if(n==1) cout<<"1"<<nl;
        else if(n==2) cout<<"-1"<<nl;
        else
        {
            for(ll i=1;i<=n*n;i+=2)
            {
                cout<<i<<" ";
                count++;
                if(count%n==0)
                cout<<nl;
            }
            for(ll i=2;i<=n*n;i+=2)
            {
                cout<<i<<" ";
                count++;
                if(count%n==0)
                cout<<nl;
            }

        }
    }
    return SH;
}