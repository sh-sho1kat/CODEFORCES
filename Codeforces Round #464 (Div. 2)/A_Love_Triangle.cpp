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
    ll temp1,temp2,temp3;
    ll ix1,ix2,ix3;
    ll flag=0;
    ll i;

    for(i=1;i<=n;i++)
    {
        ix1=i;
        temp1=a[i];

        ix2=temp1;
        temp2=a[ix2];

        ix3=temp2;
        temp3=a[ix3];

        if(ix1==temp3)
        {
            yes;
            break;
        }
 
    }
    //cout<<i<<endl;
    if(i==n+1)
    {
        no;
    }


    return SH;
}





