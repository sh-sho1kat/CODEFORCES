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
        ll c[n]={};
        for(ll i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(ll i=0;i<n;i++)
        {
            ll p;
            
            ll count=0;
            cin>>p;
            char b[p];
            for(ll j=0;j<p;j++)
            {
                cin>>b[j];
                if(b[j]=='D')
                {
                    count++;
                }
                else
                {
                    count--;
                }
            }
            ll div=count%10;

            ll res=a[i]+count;
            if(res>9)
            {
                res=res%10;
            }
            else if(res<0)
            {
                res=res+10;
            }
            c[i]=res;

        }
       ap(c,n);
    }
    return SH;
}