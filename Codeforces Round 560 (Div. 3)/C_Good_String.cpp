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
    {
        ll sum=0,tmp=0,res=0,cnt=0,count=0,ans=0;
        bool flag=true;
        ll n;
        cin>>n;
        vector <char> v(n+5);
        fr(1,n+1) cin>>v[i];
        string s;
        ll i=1;
        for(i=1;i<v.size();i++)
        {
            if(i%2)
            {
                if(v[i]==v[i+1])
                {
                    v.erase(v.begin()+i,v.begin()+i+1);
                    i=i-2;
                }
            }
        }
        for(ll j=1;v[j]!=0;j++)
        {
            count++;
            s+=v[j];
        }
        count=n-count;
        ll len=s.length();
        if(len%2==0)
        {
            cout<<count<<nl;
            cout<<s<<nl;
        }
        else
        {
            s[len-1]='\0';
            count++;
            cout<<count<<nl;
            for(ll j=0;s[j]!='\0';j++)cout<<s[j];
            cout<<nl;
        }
        

    }
    return SH;
}