#include <bits/stdc++.h>
using namespace std;

// 2025-07-18 05:21:34
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

vpll adj[200005];
map<pll, ll> mp;
map<pll, ll> edge;
ll par[200005];
ll color[200005];
ll result;
ll c;

void dfs(ll vartex, ll parent)
{
    par[vartex] = parent;
    for (auto child : adj[vartex])
    {
        if (child.ff != parent)
        {
            if (color[vartex] != color[child.ff])
                result += child.ss;
            mp[{vartex, color[child.ff]}] += child.ss;
            dfs(child.ff, vartex);
        }
    }
}

void reset(ll n)
{
    for (ll i = 1; i <= n; i++)
        adj[i].clear();
    mp.clear();
    edge.clear();
    result = 0;
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
        ll n, q;
        cin >> n >> q;
        for (ll i = 1; i <= n; i++)
            cin >> color[i];
        reset(n);
        ll m = n - 1;
        while (m--)
        {
            ll u, v, w;
            cin >> u >> v >> w;
            edge[{u, v}] = w;
            edge[{v, u}] = w;
            adj[u].eb({v, w});
            adj[v].eb({u, w});
        }
        dfs(1, 0);
        while (q--)
        {
            ll node, c;
            cin >> node >> c;
            ll p = par[node];
            result -= mp[{node, c}];
            result += mp[{node, color[node]}];
            mp[{par[node], color[node]}] -= edge[{par[node], node}];
            mp[{par[node], c}] += edge[{par[node], node}];
            if (color[p] != color[node])
                result -= edge[{par[node], node}];
            color[node] = c;
            if (color[p] != color[node])
                result += edge[{par[node], node}];
            cout << result << nl;
        }
    }
    return SH;
}