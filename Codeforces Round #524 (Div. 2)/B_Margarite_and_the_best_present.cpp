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
        ll l,r;
        cin>>l>>r;

        ll lsum,rsum;
        ll res;

        if(r&1) rsum=-1*(r+1)>>1;
        else rsum=r>>1;

        if(l&1) lsum=(l-1)>>1;
        else lsum=-1*l>>1;

        cout<<rsum-lsum<<endl; 
    }
    return SH;
}





