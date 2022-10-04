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
        cout<<"2"<<"\n";
        if(n==2)
        {
            cout<<"1"<<" "<<2<<"\n";
        }
        else if(n%2)
        {
            cout<<n-1<<" "<<n<<"\n";
           for(ll i=n-2;i>0;i--)
           {
                cout<<i<<" "<<i+2<<"\n";
           }
        }
        else
        {
            cout<<n-2<<" "<<n<<"\n";
            cout<<n-1<<" "<<n-1<<"\n";
            for(ll i=n-3;i>0;i--)
            {
                cout<<i<<" "<<i+2<<"\n";
            }
        }
    }
    return SH;
}






