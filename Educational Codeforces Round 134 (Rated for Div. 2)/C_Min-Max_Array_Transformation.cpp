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

#define ap(arr,n) for(ll i=0;i<n;i++) cout<<arr[i]<<" ";cout<<endl;
#define ok cout<<"all right"<<endl


ll binary_search(ll a[],ll n,ll target){
    ll left=0,right=n-1,mid,ans;
    while(right>=left){
        mid=left+(right-left)/2;
        if(a[mid]==target) return a[mid];
        else if(a[mid]>target)
        {
            ans=a[mid];
            right=mid-1;
        }
        else left=mid+1;
    }
    return ans;
}

ll search(ll a[],ll b[],ll n,ll tt){
    ll ans=b[n-1];
    fr(tt+1,n)
    {
        if(a[i]>b[i-1])
        {
            ans=b[i-1];
            return ans;
        }
    }
    return ans;
}

int main()
{
    fastio;
    ll t;
    cin>>t;
    while(t--)
    {
        ll sum=0,tmp=0,res=0,cnt=0,count=0,ans=0;
        bool flag=true;
        ll n;
        cin>>n;
        ll a[n+5],b[n+5],c[n+5]={};
        vector <ll> v;
        fr(0,n) cin >> a[i];
        fr(0,n) cin >> b[i];
        fr(0,n)
        {
            ll tt=a[i];
            res=binary_search(b,n,tt)-tt;
            v.emplace_back(res);

            // res=search(a,b,n,i)-tt;
            // vv.emplace_back(res);
        }
        tmp=b[n-1];
        for(ll i=n-2;i>=0;i--)
        {
            c[i+1]=tmp-a[i+1];
            if(a[i+1]>b[i])
            {
                tmp=b[i];
            }
        }
        c[0]=tmp-a[0];
        ap(v,n);
        ap(c,n);
    }
    return SH;
}