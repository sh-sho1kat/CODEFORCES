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
        ll n,flag,check,p,k,count=0;
        cin>>n;
        ll a[n+5],c[4]={};
        fr(n)cin>>a[i];
        fr(n){
            if(a[i]%3==0)c[0]++;
            else if(a[i]%3==1)c[1]++;
            else c[2]++;
        }
        ll d=n/3;
        //cout<<d<<endl;
        //ap(c,3);
        //while(a[0]!=a[1]||a[1]!=a[2]||a[2]!=a[0])
        {
            if(d>c[0])
            {
                p=d-c[0];
                c[0]+=p;
                c[2]-=p;
                count+=p;

            }
            else if(d<c[0])
            {
                p=c[0]-d;
                c[0]-=p;
                c[1]+=p;
                count+=p;

            }
            if(d>c[1])
            {
                p=d-c[1];
                c[1]+=p;
                c[0]-=p;
                count+=p;
            }
            else if(d<c[1])
            {
                p=c[1]-d;
                c[1]-=p;
                c[2]+=p;
                count+=p;

            }
            if(d>c[2])
            {
                p=d-c[2];
                c[2]+=p;
                c[1]-=p;
                count+=p;
            }
            else if(d<c[2])
            {
                p=c[2]-d;
                c[2]-=p;
                c[0]+=p;
                count+=p;

            }
            
        }
        //ap(c,3);
        cout<<count<<"\n";
    }
    return SH;
}





