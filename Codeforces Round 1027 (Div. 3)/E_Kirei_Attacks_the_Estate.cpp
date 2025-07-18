#include <bits/stdc++.h>
using namespace std;

// 2025-05-27 15:56:09
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

ll a[200005];
ll dp[200005][2];
vl adj[200005];

void dfs(ll vartex, ll parent)
{
    dp[vartex][0] = max(a[vartex], a[vartex] + dp[parent][1]);
    dp[vartex][1] = max(0LL, -a[vartex] + dp[parent][0]);
    for (auto child : adj[vartex])
    {
        if (child != parent)
        {
            dfs(child, vartex);
        }
    }
}

void clear(ll n)
{
    for (ll i = 1; i <= n; i++)
        dp[i][0] = dp[i][1] = 0, adj[i].clear();
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
        ll n;
        cin >> n;
        for (ll i = 1; i <= n; i++)
            cin >> a[i];
        clear(n);
        ll m = n - 1;
        while (m--)
        {
            ll u, v;
            cin >> u >> v;
            adj[u].eb(v);
            adj[v].eb(u);
        }
        dfs(1, 0);
        for (ll i = 1; i <= n; i++)
            cout << dp[i][0] << " ";
        cout << nl;
    }
    return SH;
}