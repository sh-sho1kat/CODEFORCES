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




int main()
{
    fastio;
    ll t;
    //cin>>t;
    //while(t--)
    {
        ll sum=0,tmp=0,res=0,cnt=0,count=0,ans=0;
        bool flag=true;
        double s,area;
        ll n;
        cin>>n;
        ll a[n+5];
        fr(0,n) cin >> a[i];
        sort(a,a+n);
        ll left=0,right=2;
        sum=a[0]+a[1]+a[2];
        for(ll i=0;i<n-2;i++)
        {
            sum=a[left]+a[left+1]+a[left+2];
            s=sum*1.0/2.0;
            area=sqrt(s*(s-a[left]*1.0)*(s-a[left+1]*1.0)*(s-a[left+2]*1.0));
            if(area>0){
                flag=false;
                break;
            }
            else
            {
                left+=1;
            }
        }
        if(flag) no;
        else yes;
    }
    return SH;
}