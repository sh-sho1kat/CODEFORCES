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
        if(n%2)
        {
            cout<<"1"<<" ";
            for(ll i=2;i<=n;i++)
            {
                ll p=i;
                if(p%2)cout<<p-1<<" ";
                else
                cout<<p+1<<" ";
            }
        }
        else
        {
             for(ll i=1;i<=n;i++)
            {
                ll p=i;
                if(p%2)cout<<p+1<<" ";
                else
                cout<<p-1<<" ";
            }
        }
        cout<<nl;

    }
    return SH;
}
// 1 2 3
// 3 2 1
// 1 3 2

// 1 2 3 4
// 2 1 4 3
// 1 3 4 2
// 4 3 2 1
// 2 3 4 1

// 1 2 3 4 5
// 1 3 2 5 4
//1 2 3 4 5 6
//2 1 4 3 6 5
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
        ll a,b,c;
        cin>>a>>b>>c;
        (b>a&&c>b) ? yes : no;
    }
    return SH;
}
