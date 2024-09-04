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
#define debug(arr,n) for(int i=0; i<n; i++) cout<<arr[i]<<" ", cout<<"\n"
#define debugr(arr,s,e) for(int i=s; i<=e; i++) cout<<arr[i]<<" ", cout<<"\n"
#define inp freopen("input.txt", "r", stdin)
#define outp freopen("output.txt", "w", stdout)
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
 
 
int main(){
    fastio;
    ll t;
    cin>>t;
    while(t--)
    {
        double r,c;
        cin>>r>>c;
        //double n=r*c;
        double res1,res2;
        res1=c*(c-1)/2;
        res2=(r/2)*(2*c+(r-1)*c);
        ll res=res1+res2;
        cout<<res<<endl;

    }
    return 0;
}