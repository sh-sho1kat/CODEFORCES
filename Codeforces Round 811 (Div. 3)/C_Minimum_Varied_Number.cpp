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
        // ll n;
        // cin>>n;
        // string s;     
        // ll i=9;
        // ll sum=i;
        // while(sum<=n)
        // {
        //     sum+=i;
        //     s+='i';
        //     i--;
        // }
        // s+='sum-n';
        // reverse(s.begin(),s.end());
        // cout<<s<<"\n";
        ll n;
        cin>>n;
        ll sum=9;
        ll i;
        ll count=0;
       for(i=8;i>=0;i--)
       {
            if(sum>n)
            {
                sum-=i+1;
                break;
            }
            sum+=i;
            count++;
            
       }
       ll ans=n-sum;
       
       if(ans)
       {
            cout<<ans;
       }
    //    if(n==45)
    //    {
    //         cout<<"1";
    //    }
       ll p=10-count;
       //cout<<count<<" "<<p<<"\n";
       for(ll j=0;j<count;j++)
       {
            cout<<p;
            p++;
       }
       cout<<endl;

    }
    return SH;
}





