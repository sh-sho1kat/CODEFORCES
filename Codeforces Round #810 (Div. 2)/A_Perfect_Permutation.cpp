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
        // fr(n)
        // {
        //     cin>>a[i];
        // }
        if(n==1)
        {
            cout<<"1"<<endl;
        }
        else
        {
            cout<<n<<" ";
            fr(n-1)
            {
                cout<<i+1<<" ";
            }
            cout<<endl;
        }
    }
    return SH;
}





