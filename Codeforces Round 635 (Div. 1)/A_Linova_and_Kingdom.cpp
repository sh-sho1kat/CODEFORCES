#include <bits/stdc++.h>
using namespace std;

// 2025-03-14 18:00:13
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
bool vis[N];
ll par[N];
ll Size[N];
ll level[N];

void dfs(ll vartex, ll parent = 0)
{
    Size[vartex] = 1;
    level[vartex] = level[parent] + 1;
    for (auto child : adj[vartex])
    {
        if (child != parent)
        {
            dfs(child, vartex);
            Size[vartex] += Size[child];
        }
    }
}

int main()
{
    fastio;
    ll n, k;
    cin >> n >> k;
    ll m = n - 1;
    while (m--)
    {
        ll u, v;
        cin >> u >> v;
        adj[u].eb(v);
        adj[v].eb(u);
    }
    dfs(1);
    vl v;
    for (ll i = 1; i <= n; i++)
        v.eb(Size[i] - level[i]);
    sort(all(v));
    ll res = 0;
    for (ll i = 0; i < k; i++)
        res -= v[i];
    cout << res << nl;

    return SH;
}