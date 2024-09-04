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
        ll minx=500,miny=500,maxx=-500,maxy=-500;
        while(n--)
        {
            ll a,b;
            cin>>a>>b;
            if(a<minx)
            {
                minx=a;
            }
            if(a>maxx)
            {
                maxx=a;
            }
            if(miny>b)
            {
                miny=b;
            }
            if(maxy<b)
            {
                maxy=b;
            }

        }
        // minx=abs(minx);
        // maxx=abs(maxx);
        // miny=abs(miny);
        // maxy=abs(maxy);
        // ll res=2*(minx+maxx+miny+maxy);
        // if(minx==0&&maxx==0)
        // {
            
        //     res-=2*miny;
        // }
        // if(miny==0&&maxy==0)
        // {
        //     res-=2*minx;
        // }
        ll sum=0;
        if(maxx>=0&&minx<=0)
        {
            sum+=2*maxx+(-1)*2*minx;
        }
        if(maxx>=0&&minx>=0)
        {
            sum+=2*maxx;
        }
        if(maxx<0)
        {
            sum+=2*(-1)*minx;
        }
        if(maxy>=0&&miny<=0)
        {
            sum+=2*maxy+2*(-1)*miny;
        }
        if(maxy>=0&&miny>=0)
        {
            sum+=maxy;
        }
        if(maxy<0)
        {
            sum+=2*(-1)*miny;
        }
        cout<<sum<<"\n";

    }
    return SH;
}





