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


string p;
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
        cin >>n;
        string s;
        cin>>s;
        vector <char> v;
        if(n==1)
        {
            char z=(s[0]-'0')+96;
            cout<<z<<nl;
            continue;
        }
        for(ll i=n-1;i>=0;i--)
        {
            if(s[i]=='0')
            {
                p+=s[i-2];
                p+=s[i-1];
                i-=2;
                //cout<<p<<" ";
                ll m=stoi(p);
                //cout<<m<<" ";
                char c=m+96;
                v.push_back(c);
                p.erase(p.begin(),p.end());
            }
            else 
            {
                char q=(s[i]-'0')+96;
                v.push_back(q);
            }
        }
        // if(s[3]=='0')
        // {
        //     char z=(s[0]-'0')+96;
        //     v.push_back(z);
        // }
        // else if(s[2]!='0')
        // {
        //     //if(s[3]!='0')
        //     {
        //         char z=(s[1]-'0')+96;
        //         v.push_back(z);
        //     }
        //     char z=(s[0]-'0')+96;
        //     v.push_back(z);
        // }
       for(ll i=v.size()-1;i>=0;i--)
       {
            cout<< v[i];
       }
       cout<<nl;
    }
    return SH;
}