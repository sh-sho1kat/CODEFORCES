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
        ll n;
        cin>>n;
        ll a[n+5];
        fr(n)cin>>a[i];
        ll max=0;
        ll temp=0;
        fr(n)
        {
            if(a[i]>max)
            {
                max=a[i];
                temp=i;
            }
        }
        ll flag=1;
        for(ll i=1;i<temp;i++)
        {
            if(a[i-1]>a[i])
            {
                flag=0;
                break;
            }
        }
        for(ll i=temp+1;i<n;i++)
        {
            if(a[i]>a[i-1])
            {
                flag=0;
                break;
            }
        }
        if(flag)
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





