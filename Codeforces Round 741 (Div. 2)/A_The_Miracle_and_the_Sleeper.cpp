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
        ll  a,b;
        cin>>a>>b;
        if(a==1&&b==1)
        {
            cout<<"0"<<endl;
            continue;
        }
        if(a==1&&b==3)
        {
            cout<<"1"<<endl;
            continue;
        }
        ll d;
        ll p=b/2;
        if(b%p==0)
        {
            p=p+1;
        }
        if(p<a)
        {
            p=a;
        }
        //cout<<p<<endl;
        d=b%p;
        if(b%2==0)
        {
            cout<<d<<endl;
        }
        else if(a>(b/2))
        {
            cout<<b%a<<endl;
        }
        else
        {
            cout<<b%(p+1)<<endl;
        }
        

    }
    return SH;
}