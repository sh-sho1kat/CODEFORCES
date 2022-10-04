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
    while(t--)
    {
        ll n,x;
        cin>>n>>x;
        ll a[2*n];
        fr(2*n)
        {
            cin>>a[i];
        }
        sort(a,a+2*n);
        ll flag=0;
        for(ll i=0;i<n;i++)
        {
            if((a[i+n]-a[i])<x)
            flag=1;
        }
        if(flag==0)
        {
            yes;
        }
        else
        no;
    }
    return SH;
}





