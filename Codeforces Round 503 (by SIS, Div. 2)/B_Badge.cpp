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
    // ll t;
    // cin>>t;
    // while(t--)
    // {
        
    // }
    ll n;
    cin>>n;
    ll a[n+5];
    for(ll i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    
    for(ll i=1;i<=n;i++)
    {
        ll freq[n+5]={};
        freq[i]++;
        ll tmp=i;
        while(1)
        {
            tmp=a[tmp];
            freq[tmp]++;
            if(freq[tmp]==2)
            {
                cout<<tmp<<" ";
                break;
            }
            
        }
    }

    return SH;
}