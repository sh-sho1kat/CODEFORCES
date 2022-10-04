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
        ll w,h;
        cin>>w>>h;
        ll a,b,c,d;
        cin>>a;
        ll aa[a+5];
        fr(0,a) cin>>aa[i];
        cin>>b;
        ll bb[b+5];
        fr(0,b) cin>>bb[i];
        cin>>c;
        ll cc[c+5];
        fr(0,c) cin>>cc[i];
        cin>>d;
        ll dd[d+5];
        fr(0,d) cin>>dd[i];
        sort(aa,aa+a);
        sort(bb,bb+b);
        sort(cc,cc+c);
        sort(dd,dd+d);
        res=max((h*max((aa[a-1]-aa[0]),bb[b-1]-bb[0])),(w*max((cc[c-1]-cc[0]),dd[d-1]-dd[0])));
        cout<<res<<nl;
    }
    return SH;
}