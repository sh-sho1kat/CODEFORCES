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
    
    ll n;
    cin>>n;

    ll a[2*n];
    fr(n)
    {
        cin>>a[i];
        a[i+n]=a[i];
    }

    ll max=0;
    ll count=0;

    // if(a[0]&a[n-1])
    // {
    //     max=2;
    // }

    //ap(a,2*n);

    // for(ll i=0;i<2*n;i++)
    // {
    //     if(a[i]==1)
    //     {
    //         for(ll j=i;j<2*n;j++)
    //         {
    //             if(a[j]==1)
    //             {
    //                 count++;
    //             }
    //             else if(a[j]==0)
    //             {
    //                 i=j;
    //                 break;
    //             }
    //             if(j==n-1)
    //             {
    //                 if(count>max)
    //                 {
    //                     max=count;
    //                 }
    //             }

    //         }
    //         if(count>max)
    //         {
    //             max=count;
    //         }
    //         //cout<<count<<endl;
    //         count=0;
    //     }
    // }

    //ap(a,2*n);

    for(ll i=0;i<2*n;i++)
    {
        if(a[i])
        {
            count++;
        }
        else
        {
            //cout<<max;
            if(count>max)
            {
                max=count;
                
            }
            count=0;
        }
        
    }

    cout<<max<<endl;

    return SH;
}





