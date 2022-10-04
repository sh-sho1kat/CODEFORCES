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
        bool flag=true;
        ll r,c;
        cin>>r>>c;
        char a[r+5][c+5]={};
        for(ll i=0;i<=r+1;i++)
        {
            for(ll j=0;j<=c+1;j++)
            {
                a[i][j]='1';
            }
        }
        for(ll i=1;i<=r;i++)
        {
            for(ll j=1;j<=c;j++)
            {
                cin>>a[i][j];
                if(a[i][j]=='0')
                {
                    cnt++;
                }
                if(a[i][j]=='1')
                {
                    count++;
                }
            }
        }
        for(ll i=1;i<=r;i++)
        {
            for(ll j=1;j<=c;j++)
            {
                if(a[i][j]=='0')
                {
                    if(a[i+1][j]=='0'||a[i-1][j]=='0'||a[i][j+1]=='0'||a[i][j-1]=='0'||a[i-1][j-1]=='0'||a[i-1][j+1]=='0'||a[i+1][j-1]=='0'||a[i+1][j+1]=='0')
                    {
                        flag=false;
                        break;
                    }
                }
            }
        }
        // for(ll i=0;i<=r+1;i++)
        // {
        //     for(ll j=0;j<=c+1;j++)
        //     {
        //         cout<<a[i][j];
        //     }
        //     cout<<nl;
        // }
        // cout<<nl;
        //cout<<cnt<<" "<<count<<nl;
        if(cnt==0)
        {
            cout<<count-2<<nl;
        }
        else if(cnt>0)
        {
            if(flag)
            {
                cout<<count-1<<nl;
            }
            else
            {
                cout<<count<<nl;
            }
        }
    }
    return SH;
}