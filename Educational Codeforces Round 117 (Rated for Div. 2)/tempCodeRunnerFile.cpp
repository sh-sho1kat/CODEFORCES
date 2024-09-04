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
        ll n,a,b;
        cin>>n>>a>>b;
        ll arr[n]={};
        arr[0]=a;
        arr[n/2]=b;
        ll j=n;
        ll flag=0;
        for(ll i=1;i<n/2;i++)
        {
            if((j)==a&&(j+1)==b||(j+1)==a&&(j)==b)
            {
                arr[i]=j-2;
                if(arr[i]<a)
                {
                   // cout<<-1<<endl;
                    flag=1;
                    break;
                }
                j-=3;
            }
            if((j)==a||(j)==b)
            {
                arr[i]=j-1;
                if(j-1<a)
                {
                    //cout<<-1<<endl;
                    flag=1;
                    break;
                }
                j-=2;
            }
            else
            {
                arr[i]=j;
                if(j<a)
                {
                    //cout<<-1<<endl;
                    flag=1;
                    break;
                }
                j--;                                          
            }
        }
        if(flag==0)
        {
        ll k=1;
        for(ll i=n/2+1;i<n;i++)
        {
            if((k)==a&&(k+1)==b||(k+1)==a&&(k)==b)
            {
                arr[i]=k+2;
                if(arr[i]>b)
                {
                   // cout<<-1<<endl;
                    flag=1;
                    break;
                }
                k+=3;
            }
            else if((k)==a||(k)==b)
            {
                arr[i]=k+1;
                if(arr[i]>b)
                {
                   // cout<<-1<<endl;
                    flag=1;
                    break;
                }
                k+=2;
            }
            else
            {
                arr[i]=k;
                if(arr[i]>b)
                {
                    //cout<<-1<<endl;
                    flag=1;

                }
                k++;                                          
            }
        }

        }
        //cout<<flag<<endl;;
        if(flag==1)
        {
            cout<<-1<<endl;
        }
        else
        {
            debug(arr,n);

        }
        
        
    }
    return 0;
}