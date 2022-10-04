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
        ll n;
        cin>>n;
        string a,b;
        ll s[n+5];
        cin>>a>>b;
        fr(n)s[i]=((a[i]-'0')+(b[i]-'0'));
        //ap(s,n);
        ll sum=0;
        fr(n)
        {
            if(s[i]==0)
            {
                sum+=1;
            }
            if(s[i]==1)
            {
                sum+=2;
            }
        }
        ll index=-10;
        for(ll i=1;i<n;i++)
        {
            if((s[i-1]==2&&s[i]==0)||(s[i-1]==0&&s[i]==2))
            {
                index=i;
                sum++;
                i++;
            }
            // if((s[i-1]==0&&s[i]==2))
            // {
            //     if(index!=i-1)
            //     {
            //         sum++;
            //     }
            // }
        }
        cout<<sum<<"\n";
    }

    return SH;
}





