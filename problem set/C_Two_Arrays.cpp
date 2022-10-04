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
#define ap(arr,n) for(ll i=0;i<n;i++) cout<<arr[i]<<" "; cout<<"\n"


//__________functions___________//



//__________starts from here__________//
int main()
{
    fastio;
    ll t;
    cin>>t;
    while(t--)
    {
        ll flag=1;
        ll n;
        cin>>n;
        ll a[105];
        ll b[105];
        fr(n)cin>>a[i];
        fr(n)cin>>b[i];

        sort(a,a+n);
        sort(b,b+n);

        //ap(a,n);
        fr(n)
        {
            ll temp=b[i]-a[i];
            if(temp>1||temp<0)
            {
                no;
                flag=0;
                break;
            }
        }
        if(flag==1)
        yes;
    }
    return SH;
}

