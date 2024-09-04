#include <bits/stdc++.h>
using namespace std;


#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define ll long long
#define mod 1000000007
#define fr(n) for(ll i=0;i<n;i++)
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define SH 0

//__________debug__________//
#define ap(arr,n) for(ll i=0;i<n;i++) cout<<arr[i]<<" ";cout<<endl;


int main()
{
    fastio;
    ll n,k;
    cin>>n>>k;
    ll a[n+5];
    for(ll i=1;i<n;i++)
    {
        cin>>a[i];
    }
    ll sum=0,temp=1;
    bool flag=false;
    while(1)
    {
        //cout<<temp<<" ";
        if(temp==k)
        {
            flag=true;
            break;
        }
        if(sum==n)
        break;
        sum=temp+a[temp];
        temp=sum;
        
    }
    flag? yes : no ;
    return SH;
}





