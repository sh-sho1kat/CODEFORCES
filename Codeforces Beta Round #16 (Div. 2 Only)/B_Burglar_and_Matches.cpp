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
    ll n,m;
    cin>>n>>m;

    ll a[25][2];
    for(ll i=0;i<m;i++)
    {
        for(ll j=0;j<2;j++)
        {
            cin>>a[i][j];
        }
    }
    
    for(ll i=0;i<m;i++)
    {
       for(ll j=i+1;j<m;j++)
       {
            if(a[j][1]>a[i][1])
            {
                ll temp1=a[j][0];
                ll temp2=a[j][1];

                a[j][0]=a[i][0];
                a[j][1]=a[i][1];

                a[i][0]=temp1;
                a[i][1]=temp2;
            }
       }
    }

    ll count=0;

    ll sum=0;
    for(ll i=0;i<m;i++)
    {
        count+=a[i][0];
        if(count>=n)
        {
            ll temp=n-(count-a[i][0]);
            ll fact=temp*a[i][1];
            sum+=fact;
            break;
        }
        else
        {
            ll fact=a[i][0]*a[i][1];
            sum+=fact;
        }
        
    }
    // for(ll i=0;i<m;i++)
    // {
    //     for(ll j=0;j<2;j++)
    //     {
    //         cout<<a[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    cout<<sum<<endl;
    return SH;
}





