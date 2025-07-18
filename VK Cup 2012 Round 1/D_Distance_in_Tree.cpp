#include <bits/stdc++.h>
using namespace std;

// 2025-06-03 16:34:19
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

const ll N = 50005;
vl adj[N];
bool vis[N];
ll par[N];
ll dst[N][505];
ll n, k;

void dfs(ll vartex, ll parent)
{
    dst[vartex][0] = 1;
    for (auto child : adj[vartex])
    {
        if (child != parent)
        {
            dfs(child, vartex);
            for (ll i = 1; i <= k; i++)
                dst[vartex][i] += dst[child][i - 1];
        }
    }
}

void dfs2(ll vartex, ll parent)
{
    if (parent)
    {
        for (ll i = k; i >= 2; i--)
        {
            dst[vartex][i] += dst[parent][i - 1];
            dst[vartex][i] -= dst[vartex][i - 2];
        }
        dst[vartex][1]++;
    }
    for (auto child : adj[vartex])
    {
        if (child != parent)
        {
            dfs2(child, vartex);
        }
    }
}

int main()
{
    fastio;
    cin >> n >> k;
    ll m = n - 1;
    while (m--)
    {
        ll u, v;
        cin >> u >> v;
        adj[u].eb(v);
        adj[v].eb(u);
    }
    dfs(1, 0);
    dfs2(1, 0);
    ll res = 0;
    for (ll i = 1; i <= n; i++)
        res += dst[i][k];
    res /= 2;
    cout << res << nl;

    return SH;
}