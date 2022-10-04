#include <bits/stdc++.h>
using namespace std;


#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL)
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
        fr(n)
        {
            cin>>a[i];
        }
        ll flag=0;
        ll count=0;
        // for(ll i=1;i<n;i++)
        // {
        //     if(a[i-1]==a[i])
        //     {
        //         count++;
        //         continue;
        //     }
        //     // else if(a[i-1]<a[i])
        //     // {
        //     //     if(a[i-1]==1)
        //     //     {
        //     //         yes;
        //     //         break;
        //     //     }
        //     //     else if(a[i]%a[i-1]==0)
        //     //     {
        //     //         yes;
        //     //         break;
        //     //     }
        //     //     else
        //     //     {
        //     //         no;
        //     //         break;
        //     //     }
        //     //     //break;
        //     // }
        //     else if(a[i-1]>a[i])
        //     {
        //         flag=1;
        //         no;
        //         break;
        //     }
        // }
        // ll tele=0;
        // // if(count==n-1)
        // // {
        // //     yes;
        // // }
        // if(count>0&&flag==0)
        // {
        //     for(ll i=count;i<n;i++)
        //     {
        //         if(a[i]%a[count]!=0)
        //         {
        //             no;
        //             tele=1;
        //             break;
        //         }
        //     }
        // }
        // else if(tele==0)
        // {
        //     yes;
        // }
        fr(n)
        {
            if(a[i]%a[0]!=0)
            {
                flag=1;
                break;
            }
        }
        if(flag)
        {
            no;
        }
        else
        yes;
    }
    return SH;
}





