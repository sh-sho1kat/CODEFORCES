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

#define ap(arr,n) for(ll i=0;i<n;i++) cout<<arr[i]<<"";cout<<endl;
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
        ll m,n;
        cin >> m >>n;
        ll nn=m+n;
        char a[nn+5];
        char b[nn+5];
        memset(a,'0',sizeof(a));
        for(ll i=0;i<nn;i++) b[i]='1';
        if(m>n)
        {
            ll i=1;
            while(n--)
            {
                a[i]='1';
                i+=2;
            }
            ap(a,nn);
        }
        else
        {
            ll i=1;
            while(m--)
            {
                b[i]='0';
                i+=2;
            }
            ap(b,nn);
        }
        
        
    }
    return SH;
}