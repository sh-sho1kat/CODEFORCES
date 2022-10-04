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
    // ll t;
    // cin>>t;
    // while(t--)
    // {
        
    // }
    ll n,k;
    cin>>n>>k;
    vector<bool> prime(n+1,true);
    vector<ll> store;
    prime[0]=false;
    prime[1]=false;
    for(ll i=4;i<=n;i+=2)
    {
        prime[i]=false;
    }
    for(ll i=3;i<=n;i++)
    {
        if(prime[i]&& (ll) i*i<=n)
        {
            for(ll j=i*i;j<=n;j+=i)
            {
                prime[j]=false;
            }
        }
    }
    ll count=0;
    for(ll i=0;i<=n;i++)
    {
        if(prime[i])
        {
            store.push_back(i);
        }
    }
    //ap(store,store.size());
    for(ll i=1;i<store.size();i++)
    {
        ll temp=store[i]-1;
        for(ll j=i-1;j>=0;j--)
        {
            if((store[j]+store[j-1])==temp)
            {
                count++;
                //cout<<count<<" "<<temp<<" ";
                break;
            }
        }
    }
    //cout<<count<<endl;
    if(count>=k)
    {
        yes;
    }
    else
    {
        no;
    }
    return SH;
}






// int n;
// vector<bool> is_prime(n+1, true);
// is_prime[0] = is_prime[1] = false;
// for (int i = 2; i <= n; i++) {
//     if (is_prime[i] && (long long)i * i <= n) {
//         for (int j = i * i; j <= n; j += i)
//             is_prime[j] = false;
//     }
// }