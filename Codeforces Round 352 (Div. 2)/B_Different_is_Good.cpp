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
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll len=s.length();
    ll cnt[100]={};
    for(ll i=0;i<len;i++)
    {
        ll temp=s[i];
        cnt[temp-96]++;
    }
    //ap(cnt,27);
    ll sum=0;
    if(len>26)
    {
        cout<<"-1"<<"\n";
    }
    else if(len<=26)
    {
        for(ll i=0;i<27;i++)
        {
            if(cnt[i]>1)
            {
                sum+=cnt[i]-1;
            }
        }
        cout<<sum<<"\n";
    }
    
    return SH;
}

