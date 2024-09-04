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
    cin>>t;
    while(t--)
    {
        ll sum=0,tmp=0,res=0,cnt=0,count=0,ans=0;
        ll flag=0;
        string a;
        string b;
        cin>>a>>b;
        ll c[500]={};
        for(ll i=0;i<2;i++)
        {
            c[a[i]-97]++;
            c[b[i]-97]++;
        }
        //ap(c,30);
        // if(a==b)
        // {
        //     cout<<0<<nl;
        // }
        // else if()
        // else if(a[0]==a[1]||b[0]==b[1]||a[0]==b[1]||b[0]==a[1])
        // {
        //     cout<<1<<nl;
        // }
        fr(0,30)
        {
            if(c[i]==4)
            {
                flag=4;
                break;
            }
            if(c[i]==3)
            flag=3;
            if(c[i]==2)
            {
                count++;
            }
        }
        //cout<<flag<<nl;
        if(flag==4)
        {
            cout<<"0"<<nl;
        }
        else if(flag==3)
        {
            cout<<"1"<<nl;
        }
        else if(count==2)
        {
            cout<<"1"<<nl;
        }
        else if(count==1)
        {
            cout<<"2"<<nl;
        }
        else
        {
            cout<<"3"<<nl;
        }

    }
    return SH;
}