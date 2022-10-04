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
        char str[5]={};
        cin>>str;
        ll flag1=0;
        ll flag2=0;
        ll flag3=0;
        if(str[0]=='Y'||str[0]=='y')
        {
            flag1=1;
        }
        if(str[1]=='E'||str[1]=='e')
        {
            flag2=1;
        }
        if(str[2]=='S'||str[2]=='s')
        {
            flag3=1;
        }
        if(flag1==1&&flag2==1&&flag3==1)
        {
            yes;
        }
        else
        no;
    }
    return SH;
}