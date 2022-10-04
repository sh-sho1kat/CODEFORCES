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
        ll a[n+5];
        
        for(ll i=1;i<=n;i++)
        {
            cin>>a[i];
        }
        
        ll p,q,r;
        ll count=0;
        for(ll i=1;i<=n;i++)
        {
            p=i;
            r=a[i];
            q=a[p];
            p=q;
            while(1)
            {
                q=a[p];
                p=q;
                count++;
                if(p==r)
                {
                    break;
                }
            }
            cout<<count<<" ";
            count=0;
        }
        cout<<"\n";
        

    }
    return SH;
}

// 5 1 2 4 3
// 1 2 3 4 5

// i=1
// p=i=1
// q=a[p]=5
// r=a[q]=3
// s=a[r]=2
// t=a[s]=1=p
// p=i
// q=a[p]=5
// p=q=5
// count++
// q=a[p]=3
// p=q=3
// count++
// q=a[p]=2
// p=q=2
// count++
// q=a[p]=1
// p=q=1
// count++
// q=a[p]=5








