#include <bits/stdc++.h>
using namespace std;

// 2025-03-10 11:58:06
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
vl adj[N][2];
bool vis[N][2];
ll par[N][2];
ll sz[N][2];

ll dfs(ll s, ll c)
{
    ll size = 1;
    if (vis[s][c])
        return 0;
    vis[s][c] = 1;
    for (auto u : adj[s][c])
    {
        par[u][c] = par[s][c];
        size += dfs(u, c);
    }
    return size;
}

int main()
{
    fastio;
    ll n;
    cin >> n;
    ll a[n + 5];
    for (ll i = 1; i < n; i++)
    {
        ll u, v, w;
        cin >> u >> v >> w;
        if (w)
        {
            adj[u][1].eb(v);
            adj[v][1].eb(u);
        }
        else
        {
            adj[u][0].eb(v);
            adj[v][0].eb(u);
        }
    }
    for (ll i = 1; i <= n; i++)
        par[i][0] = par[i][1] = i;
    for (ll i = 1; i <= n; i++)
    {
        if (!vis[i][0])
            sz[i][0] = dfs(i, 0);
        if (!vis[i][1])
            sz[i][1] = dfs(i, 1);
    }
    ll res = 0;
    for (ll i = 1; i <= n; i++)
    {
        res += sz[i][0] * (sz[i][0] - 1);
        res += sz[i][1] * (sz[i][1] - 1);
        res += (sz[par[i][0]][0] - 1) * (sz[par[i][1]][1] - 1);
    }
    cout << res << nl;
    return SH;
}