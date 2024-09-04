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
    ll n,s;
    cin>>n>>s;
    ll a[n];
    ll b[n];
    fr(n)cin>>a[i];
    fr(n)cin>>b[i];
    if(a[0]==0)
    {
        no;
    }
    else
    {
        if(a[s-1]==1)
        {
            yes;
        }
        else
        {
            if(b[s-1]==0)
            {
                no;
            }
            else
            {
                ll flag=0;
                for(ll i=s;i<n;i++)
                {
                    if(a[i]&b[i])
                    {
                        yes;
                        flag=1;
                        break;
                    }
                }
                if(flag==0)
                {
                    no;
                }
            }
        }
    }
    return SH;
}





