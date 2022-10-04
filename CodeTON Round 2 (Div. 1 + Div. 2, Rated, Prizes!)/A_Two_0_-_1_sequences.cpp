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
        ll m,n;
        cin>>m>>n;
        string a,b;
        cin>>a;
        cin>>b;
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        //ap(a,m);
        ll flag=0;
        for(ll i=0;i<n-1;i++)
        {
            if(a[i]!=b[i])
            {
                flag=1;
            }
        }
        if(flag==0)
        {
            flag=1;
            if(b[n-1]=='0')
            {
                for(ll i=n-1;i<m;i++)
                {
                    if(a[i]=='0')
                    {
                        flag=0;
                        break;
                    }
                }
            }
            else
            {
                for(ll i=n-1;i<m;i++)
                {
                    if(a[i]=='1')
                    {
                        flag=0;
                        break;
                    }
                }
            }
        }
        if(flag==1)
        {
            no;
        }
        else
        {
            yes;
        }
    }
    return SH;
}





