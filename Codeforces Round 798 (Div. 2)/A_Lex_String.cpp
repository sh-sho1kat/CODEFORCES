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
        ll m,n,k;
        cin>>m>>n>>k;
        string s,ss,sss;
        cin>>s>>ss;
        sort(s.begin(),s.end());
        sort(ss.begin(),ss.end());
        ll i=0,j=0,l=0;
        ll cnt1=0,cnt2=0;
        while(m>0&&n>0)
        {
            //cout<<s[i]<<" "<<ss[j]<<nl;
            if((cnt1==k))
            {
                //sss[l]=ss[j];
                sss.push_back(ss[j]);
                cnt1=0;
                cnt2=1;
                l++;
                j++;
                n--;
            }
            else if((cnt2==k))
            {
                //sss[l]=s[i];
                sss.push_back(s[i]);
                cnt2=0;
                cnt1=1;
                l++;
                i++;
                m--;
            }
            else if(s[i]>ss[j])
            {
                //sss[l]=ss[j];
                sss.push_back(ss[j]);
                cnt2++;
                cnt1=0;
                l++;
                j++;
                n--;
            }
            else if(s[i]<ss[j])
            {
                //sss[l]=s[i];
                sss.push_back(s[i]);
                cnt1++;
                cnt2=0;
                l++;
                i++;
                m--;
                //cout<<cnt1<<" "<<m<<"* ";
            }
            
        }
        for(i=0;i<l;i++)
        {
            cout<<sss[i];
        }
        cout<<nl;
    }
    return SH;
}