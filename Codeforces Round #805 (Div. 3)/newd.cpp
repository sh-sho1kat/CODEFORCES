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

        sort(p.begin(),p.end());
        ll i;
        ll count=0;
        for(i=0;i<s.length();i++)
        {
            char temp=p[i];
            ll f=temp-96;
            sum+=f;
            if(sum>n)break;
            count++;
        }
        
        ll a[30]={};
        for(ll i=0;i<s.length();i++)
        {
            a[s[i]-96]++;
        }

        string b;
        ll tempo;
        //ap(a,27);
        //cout<<count<<endl;
        ll fsum=a[26];
        ll flag=0;
         ll len=s.length()-count;
        for(ll i=26;i>=0;i--)
        {
            if(a[i]!=0)
            {
                fsum=a[i];
                if(fsum>len)
                {
                    a[i]=fsum-len;
                    flag=1;
                }
                else
                fsum=0;
                break;
            }
        }
       if(flag==0)
       {
            for(ll i=26;i>=0;i--)
        {
            ll k=fsum+a[i];
            if(k>len)
            {
                // if(a[i+1]!=0)
                // {
                //     a[i+1]=fsum-len;
                //     break;
                // }
                // else
                {
                    a[i]=k-len;
                    break;
                }
                
            }
            else if(k==len)
            {
                a[i]=k-len;
                break;
            }
            else
            {
                fsum+=a[i];
                a[i]=0;
            }
        }
        //ap(a,27);
       }
        
        //while(count--)
        {
            for(ll i=0;i<s.length();i++)
            {
                tempo=s[i]-96;
                //cout<<a[tempo]<<" ";
                if(a[tempo]>0)
                {
                    b+=s[i];
                    a[tempo]--;
                }
            }
        }
        
        cout<<b<<endl;

    }
    return SH;
}





