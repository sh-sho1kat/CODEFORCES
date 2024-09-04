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
        string s1,s2;
        cin >> s1;
        cin >> s2;
        ll a=s1.size();
        ll b=s2.size();
        //cout<<a<<" "<<b<<" "<<n;
        for(ll i=a;i>=1;i--)
        {
            for(ll j=0;j<=a-i;j++)
            {
                //cout<<s1.substr(j,i)<<nl;
                for(ll k=0;k+i<=b;k++)
                {
                    if(s1.substr(j,i)==s2.substr(k,i))
                    {
                        //cout<<s2.substr(k,i)<<"*"<<nl;
                        res=i;
                        ans=max(ans,res);
                        break;
                    }
                }
            }
        }
        ans=a+b-2*ans;
        cout<<ans<<nl;
    }
    return SH;
}
