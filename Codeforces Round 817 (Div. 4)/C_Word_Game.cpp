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
        ll cnt1=0,cnt2=0,cnt3=0;
        bool flag=true;
        ll n;
        cin>>n;
        map<string,ll>freq;
        vector<string> u(n+5);
        fr(0,n)
        {
            cin>>u[i];
            freq[u[i]]++;
        }
        vector<string> v(n+5);
        fr(0,n)
        {
            cin>>v[i];
            freq[v[i]]++;
        }
        vector<string> w(n+5);
        fr(0,n)
        {
            cin>>w[i];
            freq[w[i]]++;
        }
        /*for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<n;j++)
            {
                if(u[i]==v[j])
                cnt++;
                if(u[i]==w[j])
                cnt++;
            }
            //cout<<cnt<<"*"<<" ";
            if(cnt==0)
            {
                count+=3;
            }
            else if(cnt==1)
            {
                count+=1;
            }
            cnt=0;
        }
        cout<<count<<" ";
        count=0;
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<n;j++)
            {
                if(v[i]==u[j])
                cnt++;
                if(v[i]==w[j])
                cnt++;
            }
            if(cnt==0)
            {
                count+=3;
            }
            else if(cnt==1)
            {
                count+=1;
            }
            cnt=0;
        }
        cout<<count<<" ";
        count=0;
        for(ll i=0;i<n;i++)
        {
            for(ll j=0;j<n;j++)
            {
                if(w[i]==v[j])
                cnt++;
                if(w[i]==u[j])
                cnt++;
            }
            //cout<<cnt<<"*"<<" ";
            if(cnt==0)
            {
                count+=3;
            }
            else if(cnt==1)
            {
                count+=1;
            }
            cnt=0;
        }
        cout<<count<<nl;*/
        for(ll i=0;i<n;i++)
        {
            if(freq[u[i]]==1) cnt1+=3;
            else if(freq[u[i]]==2) cnt1++;

            if(freq[v[i]]==1) cnt2+=3;
            else if(freq[v[i]]==2) cnt2++;

            if(freq[w[i]]==1) cnt3+=3;
            else if(freq[w[i]]==2) cnt3++;
        }
        cout<<cnt1<<" "<<cnt2<<" "<<cnt3<<nl;


    }
    return SH;
}