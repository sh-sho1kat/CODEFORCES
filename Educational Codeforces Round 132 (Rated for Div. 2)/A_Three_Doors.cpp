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
    //fastio;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[5];
        for(ll i=1;i<4;i++)
        {
            cin>>a[i];
        }
        a[0]=9;
        if(a[a[a[n]]]==0)
        {
            yes;
        }
        else
        {
            no;
        }
    }
    return SH;
}





