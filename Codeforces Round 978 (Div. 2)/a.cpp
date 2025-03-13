#include<bits/stdc++.h>
const int mod = 1e9 + 7;
#define ll long long
#define int long long
#define vi vector<int>
#define vl vector<long long>
#define viread(n,v) for(int i=0;i<n;i++){int x; cin>>x;  v.push_back(x);}
#define vlread(n,v) for(ll i=0;i<n;i++){ll x; cin>>x;  v.push_back(x);}
#define sorta(v) sort(v.begin(),v.end())
#define all(_a) _a.begin(), _a.end()
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define mx(_a) *max_element(all(_a))
#define mn(_a) *min_element(all(_a))
using namespace std;
char zero='0';
map<pair<int,int>,int>dp;
int func(string a, string b, int i, int j)
{
        if(i >= a.size() && j >= b.size()) return 0; 
        int res=0;
        if(dp.count({i,j})) return dp[{i,j}];
        if(i==j)
        {
        res=max(res,(func(a,b,i+3,j+3)+((a[i]+a[i+1]+a[i+2]-3*zero)>1 ? 1:0)+((b[j]+a[j+1]+a[j+2]-3*zero)>1 ? 1:0)));
        res=max(res,(func(a,b,i+2,j+1)+((a[i]+a[i+1]+b[j]-3*zero)>1 ? 1:0)));
        res=max(res,(func(a,b,i+1,j+2)+((a[i]+b[j+1]+b[j]-3*zero)>1 ? 1:0)));
        }
        else if(i>j)
        {
            res=max(res,(func(a,b,i+3,j+3)+((a[i]+a[i+1]+a[i+2]-3*zero)>1 ? 1:0)+((b[j]+a[j+1]+a[j+2]-3*zero)>1 ? 1:0)));
            res=max(res,(func(a,b,i+1,j+2)+((a[i]+b[j+1]+b[j]-3*zero)>1 ? 1:0)));
        }
        else
        {
        res=max(res,(func(a,b,i+3,j+3)+((a[i]+a[i+1]+a[i+2]-3*zero)>1 ? 1:0)+((b[j]+a[j+1]+a[j+2]-3*zero)>1 ? 1:0)));
        res=max(res,(func(a,b,i+2,j+1)+((a[i]+a[i+1]+b[j]-3*zero)>1 ? 1:0)));
        }

        return dp[{i,j}]=res;

}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);cout.tie(NULL);
    ll t;
    cin>>t;
    while (t--)
    {
        ll n;
        string a,b;
        cin>>n>>a>>b;
        for (ll i = 0; i < n; i++)
        {
            if(a[i]=='A')
            a[i]='1';
            else
            a[i]='0';
            if(b[i]=='A')
            b[i]='1';
            else
            b[i]='0';
        }
        cout<<func(a,b,0,0)<<endl;
        dp.clear(); 
        
    }
}