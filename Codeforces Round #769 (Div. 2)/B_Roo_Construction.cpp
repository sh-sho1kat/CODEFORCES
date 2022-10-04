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
        ll fact=1;
        ll a[200000];
        for(ll i=0;i<25;i++)
        {
            a[i]=fact;
            fact*=2;

        }
        //ap(a,25);
        ll des=1;
        for(ll i=20;i>=0;i--)
        {
            if(a[i]<n)
            {
                des=a[i];
                break;
            }
        }
        //cout<<des<<"\n";
        if(n==2)
        {
            cout<<"0"<<" "<<"1"<<"\n";
            continue;
        }
        for(ll i=1;i<=des;i++)
        {
            cout<<des-i<<" ";
        }
        for(ll i=des;i<n;i++)
        {
            cout<<i<<" ";
        }
        cout<<"\n";
    }
    return SH;
}