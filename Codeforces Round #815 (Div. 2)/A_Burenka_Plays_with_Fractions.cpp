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
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        //cout<<a<<b<<c<<d;
        ll p=a*d;
        ll q=b*c;
        if(p>=q&&a!=0&&c!=0)
        {
            tmp=p%q;
        }
        else if(p<q&&a!=0&&c!=0)
        {
            tmp=q%p;
        }
        if(p==q)
        {
            cout<<"0"<<nl;
        }
        else if(a==0||c==0)
        {
            cout<<"1"<<nl;
        }
        else if(tmp==0)
        {
            cout<<"1"<<nl;
        }
        else
        {
            cout<<"2"<<nl;
        }
    }
    return SH;
}