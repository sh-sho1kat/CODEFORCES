#include <bits/stdc++.h>
using namespace std;


#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define ll long long
#define mod 1000000007
#define fr(n) for(ll i=0;i<n;i++)
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define SH 0

//__________debug__________//
#define ap(arr,n) for(ll i=0;i<n;i++) cout<<arr[i]<<" ";cout<<endl;


//__________functions___________//



//__________starts from here__________//
int main()
{
    fastio;
    ll t;
    cin>>t;
    ll a[t];
    ll sum=0;
    for(ll i=0;i<t;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    sort(a,a+t,greater<int>());
    ll n;
    cin>>n;
    ll b[n];
    for(ll i=0;i<n;i++)
    {
        cin>>b[i];

        ll p=sum-a[b[i]-1];
        cout<<p<<endl;

    }
    return SH;
}