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
        ll n,k,b,s;
        cin>>n>>k>>b>>s;
        ll a[n+5]={};
        ll d,p=0,q;
        ll max,mini;
        max=s/k;
        q=s%k;
        mini=(s-((n-1)*(k-1)))/k;
        //cout << mini << " " << max <<nl;
        if(b>max||b<mini) cout << "-1" << nl;
        else
        {
            sum=s-k*b;
            a[n-1]=k*b;
            ll tt=k-1;
            for(ll i=n-1;i>=0;i--)
            {
                if(sum>0)
                {
                    tmp=min(sum,tt);
                    a[i]+=tmp;
                    sum-=tmp;
                }
            }
            ap(a,n);
        }        
    }
    return SH;
}