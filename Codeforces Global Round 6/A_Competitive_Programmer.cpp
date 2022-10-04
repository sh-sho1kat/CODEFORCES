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
        string s;
        cin>>s;
        bool flag=false;
        ll index;
        for(ll i=0;i<s.length();i++)
        {
            if(s[i]=='0')
            {
                flag=true;
                index=i;
                break;
            }
        }
        if(flag==true)
        {
            flag=false;
            for(ll i=0;i<s.length();i++)
            {
                if(i==index)
                {
                    continue;
                }
                if((s[i]-'0')%2==0)
                {
                    flag=true;
                    break;
                }
            }
        }
        ll sum=1;
        if(flag==true)
        {
            flag=false;
            sum=0;
            for(ll i=0;i<s.length();i++)
            {
                sum+=(s[i]-'0');
            }
        }
        if(sum%3==0)
        {
            flag=true;
        }
        cout<<(flag?"red":"cyan")<<"\n";   
    }
    return SH;
}





