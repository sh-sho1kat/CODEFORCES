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
#define debug(arr,n) for(ll i=0;i<n;i++) cout<<arr[i]<<" "; cout<<"\n"


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
        ll arr[n+4];
        ll count=0;
        ll flag=0;
        ll lzero=0;
        ll rzero=0;
        fr(n)
        {
            cin>>arr[i];
            if(arr[i]==0)
            {
                count++;
            }
        }
        for(ll i=0;i<n;i++)
        {
            
            if(arr[i]!=0)
            {
                break;
            }
            lzero++;
        }
        for(ll i=n-1;i>=0;i--)
        {
            if(arr[i]!=0)
            {
                break;
            }
            rzero++;

        }
        if(count==n)
        {
            cout<<"0"<<endl;
        }
        else if(count==0)
        {
            cout<<"1"<<endl;
        }
        
        else if(lzero==count)
        {
            cout<<"1"<<endl;
        }
        
        else if(rzero==count)
        {
            cout<<"1"<<endl;
        }
        else if(rzero+lzero==count)
        {
            cout<<"1"<<endl;
        }
        else
        {
            cout<<"2"<<endl;
        }
        
    }
    return SH;
}