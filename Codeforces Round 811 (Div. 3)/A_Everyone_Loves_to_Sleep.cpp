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
        ll n,H,M;
        cin>>n>>H>>M;
        ll ti=H*60+M;
        ll al;
        ll ans=1e9;
        ll h,m;
        ll sh;
        for(ll i=1;i<=n;i++)
        {
            cin>>h>>m;
            al=h*60+m;
            if(al<ti)
            {
                al+=60*24;
            }
            ans=min(ans,(al-ti));
        }
        ll resh=ans/60;
        ll resm=ans%60;
        cout<<resh<<" "<<resm<<"\n";
    }
    return SH;
}





