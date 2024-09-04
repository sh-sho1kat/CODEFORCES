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
        string s;
        cin>>n>>s;
        ll a[n+5];
        ll freq[n+5]={};
        fr(0,n)
        {
           if(s[i]=='L') a[i]=i;
           else a[i]=n-i-1;
        }
        fr(0,n) sum+=a[i];
        fr(0,n) freq[a[i]]++;
        //cout<<sum<<nl;
        sort(a,a+n);
        //ap(a,n);
        //ap(freq,n);
        ll j=0;
        for(ll i=n-1;i>=n/2;i--)
        {
            while(freq[i]!=2)
            {
                sum+=i-a[j];
                freq[i]++;
                j++;
                cout<<sum<<" ";
                count++;
            }
        }
        for(ll i=1;i<=n-count;i++) cout<<sum<<" "; 
        cout<<nl;
        //cout<<count<<nl;

    }
    return SH;
}