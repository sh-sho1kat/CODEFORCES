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
        ll n;
        cin>>n;
        ll p=n/2020;
        p=p+1;
        ll fact=2020;
        ll temo;
        ll flag=0;
        for(ll i=1;i<=p;i++)
        {
            temo=n-fact*i;
            if(temo%2021==0)
            {
                flag=1;
                break;
            }
        }
        if(n<2020)
        {
            no;
        }
        else if(flag==1)
        {
            yes;
        }
        else if(n%2021==0)
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

