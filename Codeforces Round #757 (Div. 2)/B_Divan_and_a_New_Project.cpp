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

bool cmp(const pair<int,int> &a,const pair<int,int> &b)
    {
        return (a.second < b.second);
    }


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
        // vector <ll> a,b;
        // a.emplace_back(0);
        // b.emplace_back(0);
        // for(ll i=0;i<n;i++)
        // {
        //     if(i&1)
        //     {
        //         ll p;
        //         cin>>p;
        //         a.emplace_back(p);
        //     }
        //     else
        //     {
        //         ll p;
        //         cin>>p;
        //         b.emplace_back(p);
        //     }
        // }
        // sort(a.rbegin(),a.rend()-1);
        // sort(b.rbegin(),b.rend()-1);
        // fr(0,a.size()) sum+=a[i]*i;
        // fr(0,b.size()) sum+=b[i]*i;
        // cout<<sum*2<<nl;
        // for(ll i=-n/2;i<=n/2;i++)
        // {
        //     cout<<i<<" ";
        // }
        // if(n&1) cout<<n/2+1;
        // cout<<nl;
        vector <pair <ll,ll>> v;
        v.push_back({0,0});
        fr(1,n+1)
        {
            ll k;
            cin >> k;
            v.push_back({k,i});
        }
        sort( v.rbegin(),v.rend()-1 );
        for(ll i=0;i<=n;i++)
        {
            sum+=v[i].first*( ( i+1 )/2 );
        }
        cout << sum*2 << nl;
        ll tt;
        tt=1;
        for( ll i=1;i<=n;i+=2 )
        {
            v[i].first=tt;
            v[i+1].first=-tt;
            tt++;
            

        }
        sort(v.begin(),v.end(),cmp);
        for( auto u : v ) cout << u.first <<" ";
        cout<<nl;

    }
    return SH;
}