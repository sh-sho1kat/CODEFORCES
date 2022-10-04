#include <bits/stdc++.h>
using namespace std;


#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define ll long long
#define mod 1000000007
#define all(x) x.begin(), x.end()
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
        ll n,k,r,c;
        cin >> n >> k >> r >> c;
        char s[n+5][n+5];
        for(ll i=0;i<=n+1;i++)
        {
            for(ll j=0;j<=n+1;j++)
            {
                s[i][j]='.';
            }
        }
        s[r][c]='X';
        ll p=r,q=c;
        // while(p!=0)
        // {
        //     s[p][q]='X';
        //     p--;
        //     q++;
        // } 
        // p=r,q=c;
        // while(q!=0)
        // {
        //     s[p][q]='X';
        //     p++;
        //     q--;
        // }
        // p=r,q=c;
        // while(p>0)
        // {
        //     s[p][q]='X';
        //     p-=k;
        // }
        // p=r,q=c;
        // while(p<n)
        // {
        //     s[p][q]='X';
        //     p+=k;
        // }
        // p=r,q=c;
        // while(q>0)
        // {
        //     s[p][q]='X';
        //     q-=k;
        // }
        // p=r,q=c;
        // while(q<n)
        // {
        //     s[p][q]='X';
        //     q+=k;
        // }
        // for(ll i=1;i<=n;i++)
        // {
        //     for(ll j=1;j<=n;j++)
        //     {
        //         if(s[i][j]=='X')
        //         {
        //             ll p=i,q=j;
        //             while(p!=0)
        //             {
        //                 s[p][q]='X';
        //                 p--;
        //                 q++;
        //             } 
        //             p=i,q=j;
        //             while(q!=0)
        //             {
        //                 s[p][q]='X';
        //                 p++;
        //                 q--;
        //             }           
        //             p=i,q=j;
        //             while(p>0)
        //             {
        //                 s[p][q]='X';
        //                 p-=k;
        //             }
        //             p=i,q=j;
        //             while(p<n)
        //             {
        //                 s[p][q]='X';
        //                 p+=k;
        //             }
        //             p=i,q=j;
        //             while(q>0)
        //             {
        //                 s[p][q]='X';
        //                 q-=k;
        //             }
        //             p=i,q=j;
        //             while(q<n)
        //             {
        //                 s[p][q]='X';
        //                 q+=k;
        //             }
        //         }
        //     }
        // }
        ll tt=(r+c)%k;
        for(ll i=1;i<=n;i++)
        {
            for(ll j=1;j<=n;j++)
            {
                if((i+j)%k==tt)
                {
                    s[i][j]='X';
                }
            }
            //cout<<nl;
        }
       //cout<<nl;
        for(ll i=1;i<=n;i++)
        {
            for(ll j=1;j<=n;j++)
            {
                cout<<s[i][j];
            }
            cout<<nl;
        }
    }
    return SH;
}