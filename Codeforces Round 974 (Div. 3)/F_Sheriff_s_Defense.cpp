#include <bits/stdc++.h>
using namespace std;

// 2024-09-24 23:44:05
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define mod 1000000007
#define inf (1LL << 62)
#define all(x) x.begin(), x.end()
#define eb emplace_back
#define ff first
#define ss second
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
#define dtob(bits, n) bitset<bits>(n).to_string()
#define btod(bin) stoll(bin, nullptr, 2)
#define ok cout << "Eureka" << nl
#define nl '\n'
#define SH 0
typedef long long ll;
typedef pair<ll, ll> pll;
typedef vector<ll> vl;
typedef vector<pll> vpll;

const ll N = 2e5 + 5;
vl adj[N];
bool vis[N];
ll par[N];
ll a[N];
ll dp[N][5];

ll dfs(ll s, ll c, ll parent, bool taken)
{
    /** Take action on Vertex
     *  after entering the Vertex
     **/
    if (dp[s][taken] != -1)
        return dp[s][taken];
    ll cur = a[s];
    if (taken)
        cur -= c;
    ll nibo = 0, nibona = 0;
    if (taken)
        nibo = cur - c;
    else
        nibo = cur;
    vis[s] = true;
    for (auto u : adj[s])
    {
        /** Take action on Child
         *  after entering the Child node
         **/
        if (u == parent)
            continue;
        par[u] = s;
        nibo += dfs(u, c, s, 1);
        nibona += dfs(u, c, s, 0);
        /** Take action on Child
         *  after exiting the Child node
         **/
    }
    return dp[s][taken] = max(nibo, nibona);
    /** Take action on Vertex
     *  before exiting the Vertex
     **/
}

void reset(ll n)
{
    for (ll i = 1; i <= n; i++)
    {
        adj[i].clear();
        dp[i][0] = dp[i][1] = -1;
    }
}

int main()
{
    fastio;
    ll t;
    cin >> t;
    while (t--)
    {
        ll sum = 0, tmp = 0, res = 0, cnt = 0, ct = 0, ans = 0, mn = LONG_MAX, mx = 0;
        bool flag = true, fun = false, f = false;
        ll n, c;
        cin >> n >> c;
        for (ll i = 1; i <= n; i++)
            cin >> a[i];
        reset(n);
        for (ll i = 1; i < n; i++)
        {
            ll u, v;
            cin >> u >> v;
            adj[u].eb(v);
            adj[v].eb(u);
        }
        ans = dfs(1, c, -1, 0);
        cout << ans << nl;
    }
    return SH;
}