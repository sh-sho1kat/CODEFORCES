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
#define ap(arr,n) for(ll i=0;i<n;i++) cout<<arr[i]<<" "; cout<<"\n"


//__________functions___________//



//__________starts from here__________//
int main()
{
    fastio;
    ll a[4];
    ll sum=0;
    fr(4)
    {
        cin>>a[i];
        sum+=a[i];
    }
    ll pm;
    ll flag=0;
    ll greatercount=0;
    ll lescount=0;
    ll equalcount=0;
    fr(4)
    {
        pm=sum-a[i];
        {
            for(ll j=0;j<4;j++)
            {
                if(j==i)
                {
                    continue;
                }
                if(pm<2*a[j])
                {
                    lescount++;
                }
                else if(pm==2*a[j])
                {
                    equalcount++;
                }
                else
                {
                    greatercount++;
                }
            }
        }
    }

    if(greatercount>8)
    {
        cout<<"TRIANGLE"<<endl;
    }
    else if(lescount==4)
    {
        cout<<"IMPOSSIBLE"<<endl;
    }
    else
    {
        cout<<"SEGMENT"<<endl;
    }
    return SH;
}

