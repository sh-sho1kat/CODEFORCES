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
        string s;
        cin>>s;
        ll flag,check,m,count=0;
        fr(n)
        {
            if(s[i]=='(')
            {
                flag=i;
                for(ll j=i+1;j<n;j++)
                {
                    if(s[j]==')')
                    {
                        s[flag]='0';
                        s[j]='0';
                        break;
                    }
                }
            }
        }
        fr(n)
        {
            if(s[i]=='(')
            {
                count++;
            }
        }
        cout<<count<<"\n";
    }
    return SH;
}





