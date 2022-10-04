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
        string a;
        string b;
        cin>>a>>b;
        fr(0,n)
        {
            if(a[i]!=b[i])
            {
                if(a[i]=='R'||b[i]=='R')
                {
                    flag=false;
                    break;
                }
            }
        }
        if(flag)yes;
        else no;
    }
    return SH;
}