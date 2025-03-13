#include <bits/stdc++.h>
using namespace std;

// 2025-03-12 19:23:42
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define mod 1000000007
#define inf (1LL << 62)
#define all(x) x.begin(), x.end()
#define eb push_back
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
ll n;
ll a[N];
ll b[N];
ll dp[N][2];
bool vis[N];
ll par[N];

void dfs(ll vartex, ll parent)
{
    dp[vartex][0] = dp[vartex][1] = 0;
    for (auto child : adj[vartex])
    {
        if (child != parent)
        {
            dfs(child, vartex);
            dp[vartex][0] += max(dp[child][0] + abs(a[vartex] - a[child]), dp[child][1] + abs(a[vartex] - b[child]));
            dp[vartex][1] += max(dp[child][0] + abs(b[vartex] - a[child]), dp[child][1] + abs(b[vartex] - b[child]));
        }
    }
}

void reset(ll n)
{
    for (ll i = 1; i <= n; i++)
    {
        adj[i].clear();
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
        cin >> n;
        for (ll i = 1; i <= n; i++)
            cin >> a[i] >> b[i];
        reset(n);
        ll m = n - 1;
        while (m--)
        {
            ll u, v;
            cin >> u >> v;
            adj[u].eb(v);
            adj[v].eb(u);
        }
        dfs(1, -1);
        res = max(dp[1][0], dp[1][1]);
        cout << res << nl;
    }
    return SH;
}