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

    ll sum=0;
    ll n;
    cin>>n;
    string s1;
    string s2;
    cin>>s1>>s2;
    ll a[n+5]={};
    fr(0,n)
    {
        if(s2[i]>s1[i])
        {
            a[i]=2;
        }
        else if(s2[i]==s1[i])
        {
            a[i]=1;
        }
    }
    ll po=INT_MAX,ne=n;
    for(ll i=n-1;i>=0;i--)
    {
        if(a[i]==2)
        {
            sum+=n-i;
            po=i;
        }
        else if(a[i]==0)
        {
            ne=i;
        }
        else if(a[i]==1)
        {
            if(po<ne)
            {
                sum+=n-po;
            }
        }
    }
    cout<<sum<<nl;

    return SH;
}