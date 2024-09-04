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
        ll n,m;
        cin>>n>>m;

        char s[m+5]={};
        fr(m)
        {
            s[i]='B';
        }
        //ap(s,m);
        ll a[n];
        fr(n)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        //ap(a,n);
        ll temp;
        ll ln;
        fr(n)
        {
            ln=m+1-a[i];
            temp=a[i];
            //cout<<temp<<" ";
            if(temp<ln)
            {
                if(s[temp-1]=='B')
                {
                    s[temp-1]='A';
                }
                else
                {
                    s[ln-1]='A';
                }
            }
            else
            {
                if(s[ln-1]=='B')
                {
                    s[ln-1]='A';
                }
                else
                {
                    s[temp-1]='A';
                }

            }
            
        }
        //ap(s,m);
        cout<<s<<endl;

    }
    return SH;
}





