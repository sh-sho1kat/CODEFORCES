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
        ll n;
        cin>>n;
        if(n==3)
        {
            cout<<"3"<<endl;
            cout<<"2 1 3"<<endl;
        }
        else
        {
            cout<<"2"<<endl;
            ll a[n];
            ll temp=1;
            ll p=1;
            ll q=2;
            fr(n)
            {
                //temp=p;
                a[i]=p;
                p=p*2;
                if(p>n)
                {
                    p=temp+2;
                    temp+=2;
                }
            }
            ap(a,n);
        }
    }
    return SH;
}

