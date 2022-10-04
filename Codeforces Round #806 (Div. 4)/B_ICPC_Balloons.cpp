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
        ll n;
        cin>>n;
        char a[55];
        // int b[100]={};
        // for(ll i=0;i<n;i++)
        // {
        //     scanf("%c",&a[i]);
        //     //a[i]=int(a[i]);
        // }
        // int c[55]={};
        //  for(ll i=0;i<n;i++)
        // {
        //     c[i]=a[i];
        // }
        // //ap(c,n);
        // for(ll i=0;i<n;i++)
        // {
        //     b[c[i]]++;
        // }
        // ll count=0;
        // for(ll i=1;i<100;i++)
        // {
        //     if(b[i]>0)
        //     {
        //         count=count+b[i]+1;
        //     }
        // }
        // cout<<count<<endl;
        // b[100]={};
        // //printf("%d",'A');
        cin>>a;
        for(ll i=0;i<n;i++)
        {
            for(ll j=i+1;j<n;j++)
            {
                if(a[i]>a[j])
                {
                    ll temp=a[j];
                    a[j]=a[i];
                    a[i]=temp;
                }
            }
        }
        //ap(a,n);
        ll count=2;
        for(ll i=1;i<n;i++)
        {
            if(a[i-1]!=a[i])
            {
                count+=2;
            }
            else
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
    return SH;
}