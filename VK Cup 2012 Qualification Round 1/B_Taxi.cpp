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

#define ap(arr,n) for(ll i=1;i<=n;i++) cout<<arr[i]<<" ";cout<<endl;
#define ok cout<<"all right"<<endl




int main()
{
    fastio;
    ll t;
    //cin>>t;
    //while(t--)
    {
        ll sum=0,tmp=0,res=0,cnt=0,count=0,ans=0;
        bool flag=true;
        ll n;
        cin>>n;
        ll a[n+5];
        fr(0,n) cin >> a[i];
        map < ll , ll > mp;
        fr(0,n) mp[a[i]]++;
        //ap(mp,4);
        sum=mp[4];
        //cout<<sum<<nl;
        if(mp[3] >= mp[1])
        {
            sum += mp[3];
            mp[1]=0;
        }
        else
        {
            sum += mp[3];
            mp[1] -= mp[3];
        }
        //cout<<sum<<nl;
        sum += mp[2]/2;
        mp[1] += 2*(mp[2]%2);
        //cout<<sum<<nl;
        sum += mp[1]/4;
        //ap(mp,4);
        if(mp[1]%4)
            sum ++;
        cout << sum << nl;

        
    }
    return SH;
}