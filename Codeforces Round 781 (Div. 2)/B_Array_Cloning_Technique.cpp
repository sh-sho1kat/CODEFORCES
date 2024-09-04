#include<bits/stdc++.h>
 
using namespace std;
 
#define ll long long
#define mod 1000000007
#define fr(n) for(ll i=0;i<n;i++)
#define frj(m) for(ll j=0;j<m;j++)
#define fro(m) for(ll i=1; i<=m; i++)
#define nl cout<<"\n"
#define nll '\n'
#define pr(n) cout<<n<<'\n';
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define ff first
#define ss second
#define pb push_back
#define pf push_front
#define inf 1ll<<62
#define inff 1<<30
#define debug(arr,n) for(int i=0; i<n; i++) cout<<arr[i]<<" "; cout<<"\n"
#define debugr(arr,s,e) for(int i=s; i<=e; i++) cout<<arr[i]<<" "; cout<<"\n"
#define inp freopen("input.txt", "r", stdin)
#define outp freopen("output.txt", "w", stdout)
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
 
 
int main(){
    fastio;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n+5];
        fr(n)cin>>a[i];
        ll cnt[100000];
        // fr(n)
        // {
        //     cnt[a[i]]++;
        // }
        // ll max=1;
        // for(ll j=0;j<10000;j++)
        // {
        //     if(max<cnt[j])
        //     {
        //         max=cnt[j];
        //     }
        // }
        sort(a,a+n);
        //debug(a,n);

        ll max=1;
        ll temp1=1;
        fr(n-1)
        {
            if(a[i]==a[i+1])
            {
                temp1++;
                if(temp1>max)
                {
                    max=temp1;
                }
            }
            else
            {
                temp1=1;
            }
            //printf("%lld ",max);
        }
        
        ll temp=n-max;
        ll store=temp;

        ll count=0;

        if(max==n)
        {
            cout<<0<<endl;
            continue;
        }
        // else
        // {
            while(1)
            {
                count++;
                max*=2;
                {
                    if(max>=n)
                    {
                        break;
                    }
                }

            }
            store=temp+count;
            cout<<store<<endl;
        //}

            
    }
    return 0;
}
// 6
// 1
// 1789
// 6
// 0 1 3 3 7 0
// 2
// 1000 100
// 4
// 4 3 2 1
// 5
// 2 5 7 6 3
// 7
// 1 1 1 1 1 1 1
// 0
// 6
// 2
// 5
// 7
// 0