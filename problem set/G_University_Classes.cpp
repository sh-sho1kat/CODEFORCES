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
    char a[n+5][7+5];
    for(ll i=0;i<n;i++)
    {
        for(ll j=0;j<7;j++)
        {
            cin>>a[i][j];
        }
    }
    // for(ll i=0;i<n;i++)
    // {
    //     for(ll j=0;j<7;j++)
    //     {
    //         cout<<a[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    ll count=0;
    ll res=0;
    for(ll i=0;i<7;i++)
    {
        for(ll j=0;j<n;j++)
        {
            if(a[j][i]=='1')
            {
                count++;
            }
        }
        if(count>res)
        {
            res=count;
        }
        count=0;
    }

    cout<<res<<endl;


    return SH;
}





