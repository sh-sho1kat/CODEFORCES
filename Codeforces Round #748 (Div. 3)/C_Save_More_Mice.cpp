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
        ll n,k;
        cin >>n>>k;
        ll a[k+5];
        fr(k)
        {
            cin>>a[i];
        }
        sort(a,a+k);
        ll temp=0;
        ll sum=0;
        ll flag=0;
        if(k==1)
        {
            cout<<"1"<<endl;
            continue;
        }
        // if(k==2)
        // {
        //     if(a[0]>(n-a[1]))
        //     {
        //         cout<<"2"<<endl;
        //     }
        //     else
        //     {
        //         cout<<"1"<<endl;
        //     }
        //     continue;
        // }
        ll i;
        ll count=0;
        for(i=k-1;i>=0;i--)
        {
            if(sum>=a[i])
            {
                break;
            }
            else
            {
                temp=n-a[i];
                sum+=temp;
                count++;
                
            }
        }
        // if(i==0)
        // {
        //     flag=1;
        // }
        // cout<<k-flag<<endl;
        cout<<count<<endl;
    }
    return SH;
}






