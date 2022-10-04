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
        ll arr[n+5];
        fr(n){
        cin>>arr[i];
        }   
        ll count =0;
        ll flag=1;
        for(ll j=n-1;j>0;j--)
        {
            if(arr[j]==0)
                {
                    //cout<<"-1"<<endl;
                    flag=0;
                    break;
                }
            while(arr[j]<=arr[j-1])
            {
                
                arr[j-1]/=2;
                count++;
                
            }
            if(flag==0)
            {
                break;
            }
        }
        //debug(arr,n); 
        if(flag==1)
        {
            cout<<count<<endl;
        }
        else
        cout<<"-1"<<endl;
    }
    return 0;
}