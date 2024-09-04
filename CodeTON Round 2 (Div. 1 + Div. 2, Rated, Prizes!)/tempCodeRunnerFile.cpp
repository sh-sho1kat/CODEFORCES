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
        ll n,m;
        cin>>n>>m;
        ll a[n+5]={};
        fr(n)
        {
            cin>>a[i];
        }
        ll count=0;
        ll temp=0,ab,ac;
        ll p=2*m;
        //ap(a,n);

        for(ll i=1;i<n;i++)
        {
            ab=abs(a[i]-a[temp]);
            ac=abs(a[i]-a[i-1]);
            //cout<<ab<<" ";
            if(ab>p||ac>p)
            {
                count++;
                temp=i;
            }
        }
        cout<<count<<"\n";
        count=0;
    }
    return SH;
}





