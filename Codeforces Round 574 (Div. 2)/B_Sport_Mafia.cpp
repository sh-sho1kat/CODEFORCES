#include <bits/stdc++.h>
using namespace std;


#define letsgocin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define ll long long
#define mod 1000000007
#define fr(s,n) for(ll i=s;i<n;i++)
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define nl '\n'
#define SH 0

#define ap(arr,n) for(ll i=0;i<n;i++) cout<<arr[i]<<" ";cout<<endl;
#define ok cout<<"all right"<<endl




int main()
{
    letsgocin();
    // ll t;
    // cin>>t;
    // while(t--)
    {
        ll sum=0,tmp=0,res=0,cnt=0,count=0,ans=0;
        bool flag=true;
        ll n,k;
        cin>>n>>k;
        ll a[n+5];
        // for(ll i=1;i<=n;i++)
        // {
        //     a[i]=i;
        // }
        ll r,l,mid;
        l=1,r=n;
        while(r!=l)
        {
            mid=l+(r-l)/2;
            //cout<<mid<<"* ";
            sum=(mid*(mid+1))/2;
            sum=sum-n+mid;
            //cout<<sum<<" ";
            if(sum==k)
            {
                res=n-mid;
                break;
            }
            else if(sum>k)
            {
                r=mid;
            }
            else if(sum<k)
            {
                l=mid+1;
            }
        }
        cout<<res<<nl;


    }
    return SH;
}