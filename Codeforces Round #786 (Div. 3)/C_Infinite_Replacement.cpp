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
    for(ll j=1;j<=t;j++)
    {
        ll i,k,l,sum=0,tmp=0,res=0;
        ll fact=1;
        bool flag=true;
        ll n;
        //cin>>n;
        string s,h;
        cin>>s>>h;
        ll len=s.length();
        
        fr(0,h.length())
        {
            if(h[i]=='a')
            {
                flag=false;
                break;
            }
        }
        for(ll j=1;j<=s.length();j++)
        {
            fact*=2;
        }
        if(flag)cout<<fact<<nl;
        else
        {
            if(h.length()==1)
            {
                cout<<"1"<<nl;
            }
            else
            {
                cout<<"-1"<<nl;
            }
        }
        
    }
    return SH;
}