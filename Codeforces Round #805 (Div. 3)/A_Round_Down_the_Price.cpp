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
        char str[20]={};
        cin>>str;
        // if(str[0]=='1')
        // {

        // }
        ll l=strlen(str);
        str[0]=str[0]-1;
        str[l]='\0';
        if(l==1)
        {
            if(str[0]=='0')
            {
                cout<<0<<endl;
            }
            else
            {
                cout<<str[0]<<endl;
            }
        }
        else if(str[0]=='0')
        {
            ll count=0;
            for(ll i=1;str[i]=='0';i++)
            {
                count++;
            }
            //cout<<count<<endl;
            if(count==l-1)
            {
                cout<<"0"<<endl;
            }
            else
            {
                 for(ll j=count+1;j<l;j++)
                {
                    cout<<str[j];
                }
                cout<<endl;
            }
           
        }
        else
        cout<<str<<endl;
    }
    return SH;
}