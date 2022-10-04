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
        ll mn=INT_MAX,mx=INT_MIN;
        bool flag=true;
        ll n;
        cin >> n;
        ll a[n+5],b[n+5];
        fr(0,n) cin >> a[i];
        fr(0,n) cin >> b[i];
        fr(0,n) if(a[i]>b[i]) flag=false;
        if(flag)
        {
            mn=b[0]-a[0];
            if((b[n-1]>a[0]+1+mn)&&a[n-1]!=b[n-1])
                {
                    flag=false;
                }
                else
                {
                    a[n-1]=b[n-1];
                }

            for(ll i=n-1;i>0;i--)
            {
                mn=min(mn,(b[i]-a[i]));
                if((b[i-1]>a[i]+1+mn)&&a[i-1]!=b[i-1])
                {
                    flag=false;
                }
                else
                {
                    a[i-1]=b[i-1];
                }
            }
        }
        
        flag ? yes : no;
    }
    return SH;
}