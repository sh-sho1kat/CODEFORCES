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
#define ap(arr,n) for(ll i=0;i<n;i++) cout<<arr[i]<<" "; cout<<"\n"


//__________functions___________//



//__________starts from here__________//
int main()
{
    fastio;
    ll t;
    cin>>t;
    while(t--)
    {
        ll flag=1;
        ll n;
        cin>>n;
        for(ll i=2;i<=n;i=i*2)
        {
            if(n%i!=0)
            {
                yes;
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            no;
        }
    }
    return SH;
}

