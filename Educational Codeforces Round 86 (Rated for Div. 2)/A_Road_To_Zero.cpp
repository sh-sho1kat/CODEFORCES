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
        ll x,y;
        ll a,b;
        cin>>x>>y;
        cin>>a>>b;
        ll min=abs(x-y)*a;
        ll p=x;
        if(x>y)p=y;
        ll res1,res2;
        res1=p*2*a;
        res2=p*b;
        ll result;
        if(res1<res2)result=res1+min;
        else result=res2+min;

        cout<<result<<"\n";

    }
    return SH;
}





