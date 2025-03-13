#include <bits/stdc++.h>
using namespace std;

// 2025-01-22 18:42:55
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
ll depth[N];
ll sz[N];
ll par[N];
ll vis[N];
ll var1, var2;
bool f;

void dfs(ll vartex, ll Parent)
{
    vis[vartex] = 1;
    par[vartex] = Parent;
    depth[vartex] = depth[Parent] + 1;
    sz[vartex] = 1;
    if (adj[vartex].size() == var2 and Parent != var1)
        f = true;
    for (auto child : adj[vartex])
    {
        if (child != Parent)
        {
            dfs(child, vartex);
            sz[vartex] += sz[child];
        }
    }
}

void reset(ll n)
{
    for (ll i = 1; i <= n; i++)
    {
        adj[i].clear();
        vis[i] = 0;
        par[i] = 0;
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
        bool flag = true, fun = false;
        ll n;
        cin >> n;
        reset(n);
        ll m = n - 1;
        map<ll, ll> mp;
        while (m--)
        {
            ll u, v;
            cin >> u >> v;
            adj[u].eb(v);
            adj[v].eb(u);
        }
        vpll v;
        for (ll i = 1; i <= n; i++)
        {
            v.eb({adj[i].size(), i});
            mp[adj[i].size()]++;
        }
        sort(v.begin(), v.end(), greater<pll>());
        var1 = v[0].ss;
        var2 = v[1].ff;
        f = false;
        dfs(v[0].ss, v[0].ss);
        if (mp[v[0].ff] >= 3)
            cout << v[0].ff + v[1].ff - 1 << nl;
        else if (f)
            cout << v[0].ff + v[1].ff - 1 << nl;
        else
            cout << v[0].ff + v[1].ff - 2 << nl;
    }
    return SH;
}