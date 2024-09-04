#include <bits/stdc++.h>
using namespace std;


#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define ll long long
#define mod 1000000007
#define fr(s,n) for(ll i=s;i<n;i++)
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define nl '\n'
#define SH 0

#define ap(arr,s,n) for(ll i=s;i<n;i++) cout<<arr[i]<<" ";cout<<endl;
#define ok cout<<"all right"<<endl




int main()
{
    fastio;
    ll t;
    cin>>t;
    while(t--)
    {
        ll sum=0,tmp=0,res=0,cnt=0,count=0,ans=0;
        bool flag=true;
        // ll n;
        // cin>>n;
        // ll freq[n+5]={};
        // ll a[n+5];
        // fr(0,n)cin>>a[i];
        // fr(0,n)
        // {
        //     freq[a[i]]++;
        // }
        // for(ll i=n-1;i>0;i--)
        // {
        //     if(a[i-1]>a[i])
        //     {
        //         if(freq[a[i-1]]==1)
        //         {
        //             a[i-1]=0;
        //             cnt++;
        //         }
        //         else if(freq[a[i-1]]>1)
        //         {
        //             if(count==0)
        //             {
        //                 count++;
        //             }
        //             a[i-1]=0;
        //         }
                
        //     }
        //     ll freq2[n+5]={};
        //         for(ll i=0;i<n;i++)
        //         {
        //             freq2[a[i]]++;
        //         }

        //         for(ll i=n-1;i>0;i--)
        //         {
        //             if(freq[a[i-1]]>freq2[a[i-1]])
        //             {
        //                 a[i-1]=0;
        //             }
        //         }
        //         for(ll i=n-1;i>0;i--)
        //         {
        //             if(a[i-1]>a[i])
        //             {
        //                 cnt++;
        //             }
        //         }

        // }
        // //ap(freq,1,n+1);
        // ap(a,0,n);
        // cout<<cnt<<nl;
        ll n;
        cin>>n;
        vector<ll>a(n+5);
        fr(0,n)cin>>a[i];
        ll index=-1;
        bool b[n+5];
        memset(b,false,sizeof(b));
        for(ll i=n-2;i>=0;i--)
        {
            if(a[i]>a[i+1])
            {
                index=i;
                break;
            }
        }
        if(index==-1)cout<<"0"<<nl;
        else
        {
            for(ll i=index;i>=0;i--)
            {
                b[a[i]]=true;
            }
            for(ll i=n-1;i>=index;i--)
            {
                if(b[a[i]])
                {
                    index=i;
                    break;
                }
            }
            for(ll i=index;i>=0;i--)
            {
                b[a[i]]=true;
            }
            //ap(b,0,n+1);
            //cout<<index;
            // ll freq[n+5]={};
            // for(ll i=index;i>=0;i--)
            // {
            //     freq[a[i]]++;
            // }
            for(ll i=0;i<=n;i++)
            {
                if(b[i])cnt++;
            }
            cout<<cnt<<nl;

        }
    }
    return SH;
}