#include <bits/stdc++.h>
using namespace std;


#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define ll long long
#define mod 1000000007
#define fr(n) for(ll i=0;i<n;i++)
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define SH 0

#define ap(arr,n) for(ll i=0;i<n;i++) cout<<arr[i]<<" ";cout<<endl;





int main()
{
    fastio;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n+5];
        fr(n)
        {
            cin>>a[i];
        }
        if(n%2)cout<<"Mike"<<"\n";
        else
        {
            ll m=INT_MAX,j=INT_MAX;
            for(ll i=0;i<n;i+=2)
            {
                m=min(a[i],m);
            }
            for(ll i=1;i<n;i+=2)
            {
                j=min(j,a[i]);
            }
            if(m>j)
            {
                cout<<"Mike"<<"\n";
            }
            else if(j>m)
            {
                cout<<"Joe"<<"\n";
            }
            else if(j==m)
            {
                ll index;
                for(ll i=0;i<n;i++)
                {
                    if(a[i]==j)
                    {
                        index=i;
                        break;
                    }
                }
                if(index%2)
                {
                    cout<<"Mike"<<"\n";
                }
                else
                {
                    cout<<"Joe"<<"\n";
                }
            }
        }
    }
    return SH;
}