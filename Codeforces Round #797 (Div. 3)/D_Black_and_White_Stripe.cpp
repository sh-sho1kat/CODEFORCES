#include <bits/stdc++.h>
#include <iostream>
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
        ll a,b;
        cin>>a>>b;
        string s;
        cin>>s;
        ll j;
        ll count=0,min=INT_MAX;
        for(ll k=0;k<b;k++)
        {
            if(s[k]=='W')
            {
                count++;
            }
        }
        min=count;
        //cout<<count<<"\n";
        ll l=0,r=b;
        while(r<a)
        {
            if(s[l]=='W')
            {
                count--;
                //cout<<count<<" ";
            }
            if(s[r]=='W')
            {
                count++;
                //cout<<count<<" ";
            }
            if(min>count)
            {
                min=count;
            }
            l++;
            r++;
        }
        cout<<min<<"\n";
    }
    return SH;
}





