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
    ll a[n];
    fr(n)cin>>a[i];

    ll pc=0,nc=0,zc=0;
    ll ps=0,ns=0;

    fr(n)
    {
        if(a[i]==0)
        {
            zc++;
        }
        else if(a[i]>0)
        {
            pc++;
            ps+=a[i];
        }
        else if(a[i]<0)
        {
            nc++;
            ns+=a[i];
        }
    }
    ns=-1*ns;
    ps=ps-pc;
    ns=ns-nc;

    //cout<<os<<endl;

    ll pay;

    if(nc%2==0)
    {
        pay=ps+ns+zc;
    }
    else
    {
        if(zc==0)
        {
            pay=ps+ns+2;
        }
        else
        pay=ps+ns+zc;
    }

    cout<<pay<<endl;

    return SH;
}





