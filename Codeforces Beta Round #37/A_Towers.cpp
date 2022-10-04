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
    // ll t;
    // cin>>t;
    // while(t--)
    // {
        
    // }
    ll n;
    cin>>n;
    ll a[n+5],cnt[1005]={};
    fr(n)cin>>a[i];
    fr(n)cnt[a[i]]++;
    ll count=0,max=0;
    fr(1001)
    {
        if(cnt[i]) count++;
        if(cnt[i]>max) max=cnt[i];
    }
    cout<<max<<" "<<count<<"\n";
    return SH;
}





