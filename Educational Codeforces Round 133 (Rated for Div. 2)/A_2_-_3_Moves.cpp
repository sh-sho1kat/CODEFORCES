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
        if(n==1)
        {
            cout<<"2"<<"\n";
        }
        else if(n%3==0)
        {
            cout<<n/3<<"\n";
        }
        else if(n%3==1)
        {
            cout<<((n-4)/3)+2<<"\n";
        }
        else
        {
            cout<<((n-2)/3)+1<<"\n";
        }
    }
    return SH;
}





