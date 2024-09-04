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
        ll a[n];
        ll sum=0;
        fr(n)
        {
            cin>>a[i];
            sum+=a[i];
        }
        sum=sum-a[n-1];
        ll flag=n-1;
        for(ll i=0;i<n;i++)
        {
            if(a[i]!=0)
            {
                flag=i;
                break;
            }
        }
        ll count=0;
        for(ll i=flag;i<n-1;i++)
        {
            if(a[i]==0)
            {
                count++;
            }
        }
        cout<<count+sum<<endl;
    }
    return SH;
}





