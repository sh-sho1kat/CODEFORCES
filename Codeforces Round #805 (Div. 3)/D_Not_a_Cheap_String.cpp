#include <bits/stdc++.h>
using namespace std;


#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define ll long long
#define mod 1000000007
#define fr(n) for(ll i=0;i<n;i++)
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define SH 0

//__________debug__________//
#define ap(arr,n) for(ll i=0;i<n;i++) cout<<arr[i]<<" ";cout<<endl;


//__________functions___________//



//__________starts from here__________//
int main()
{
    fastio;
    ll t;
    cin>>t;
    while(t--)
    {
        ll sum=0;
        string s;
        cin>>s;

        string p;
        p=s;

        ll n;
        cin>>n;

        // //cout<<s[0]-96<<endl;

        sort(p.begin(),p.end());
        // //ap(s,s.length());
        // //cout<<endl;
        ll i;
        ll count=0;
        char temp;
        for(i=0;i<s.length();i++)
        {
            temp=p[i];
            ll f=temp-96;
            //cout<<a;
            sum+=f;
            if(sum>n)break;
            count++;
        }
        // sum-=s[i]-96;
        // //cout<<count<<endl;
        // string b;
        // ll k=0;

        // // fr(count)
        // // {
        // //     cout<<s[i];
        // // }
        // // cout<<endl;

        // for(ll i=0;i<s.length();i++)
        // {
        //     for(ll j=0;j<count;j++)
        //     {
        //         if(a[i]==s[j])
        //         {
        //             b+=a[i];
        //             s[j]=0;
        //             break;
        //         }
        //     }
        // }
        // cout<<b<<endl;

        //string s;
        //cin>>s;
        //ll n;
        //cin>>n;
        ll a[30]={};
        for(ll i=0;i<s.length();i++)
        {
            a[s[i]-96]++;
        }
        //ap(a,27);
        // ll sum=0;
        // ll i,check;
        // for(i=0;i<27;i++)
        // {
        //     sum+=a[i]*(i);
        //     if(sum>n)
        //     {
        //         while(sum>n)
        //         {
        //             ll j=1;
        //             sum-=i;
        //         }
        //         break;
        //     }
        // }
        // if(i==27)check=26;
        // cout<<check<<" ";

        ll sm=0;
        ll check,u;
        for(u=0;u<27;u++)
        {
            if(sm>=count)
            {
                a[u]=sm-count;
                check=u;
                break;
            }
            else
            {
                sm+=a[u];
            }
        }
        if(sm>count)
        {
            a[u-1]=sm-count;
        }
        //cout<<a[26];

        for(ll i=check+1;i<30;i++)
        {
            a[i]=0;
        }


        string b;
        ll tempo;
        for(ll i=0;i<s.length();i++)
        {
            tempo=s[i]-96;
            cout<<tempo<<" ";
            //tempo=temp-'0';
            //cout<<tempo<<endl;
            if(a[tempo]>0)
            {
                b+=s[i];
                a[tempo]=a[tempo]-1;
            }
        }
        cout<<b<<endl;

    }
    return SH;
}





