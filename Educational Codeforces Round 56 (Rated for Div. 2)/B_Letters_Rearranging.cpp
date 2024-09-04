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
        char str[1005];
        cin>>str;
        
        ll len=strlen(str);

        sort(str,str+len);

        string s;
        s=str;

        sort(str,str+len,greater<char>());

        //cout<<str<<s<<endl;
        if(s==str)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            cout<<s<<endl;
        }

    }
    return SH;
}





