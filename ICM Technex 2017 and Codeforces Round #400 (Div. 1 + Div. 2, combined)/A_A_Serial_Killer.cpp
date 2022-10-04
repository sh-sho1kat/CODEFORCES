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
    // ll t;
    // cin>>t;
    // while(t--)
    {
        ll i,j,k,l,sum=0,tmp=0,res=0;
        bool flag=true;
        string s1,s2,s3,s4;
        cin>>s1>>s2;
        cout<<s1<<" "<<s2<<nl;
        ll n;
        cin>>n;
        for(i=1;i<=n;i++)
        {
            cin>>s3>>s4;
            if(s1==s3)
            {
                //ok;
                s1=s4;
                //cout<<s1<<nl;
            }
            else if(s3==s2)
            {
                s2=s4;
            }
            else if(s4==s1)
            {
                s1=s3;
            }
            else if(s4==s2)
            {
                s2=s3;
            }
            cout<<s1<<" "<<s2<<nl;
        }
    }
    return SH;
}