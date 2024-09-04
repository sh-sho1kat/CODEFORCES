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
        ll c,m,n;
        cin>>c>>m>>n;
        if(c==0||m==0)
        {
            cout<<"0"<<nl;
        }
        else
        {
            sum=m+c+n;
            ll kom=min(c,m);
            if(sum>=kom*3)
            {
                cout<<kom<<nl;
            }
            else
            {
                cout<<sum/3<<nl;
            }
        }
    }
    return SH;
}
