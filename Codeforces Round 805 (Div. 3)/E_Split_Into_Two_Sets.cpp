#include <bits/stdc++.h>
using namespace std;

// 2025-01-31 23:13:31
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
set<ll> adj[N];
bool vis[N];
ll par[N];
ll color[N];
bool checked;

void dfs(ll s)
{
    /** Take action on Vertex
     *  after entering the Vertex
     **/
    if (vis[s])
    {
        if (color[s] == color[par[s]] and color[s])
            checked = false;
        return;
    }
    vis[s] = true;
    if (color[par[s]] == 1)
        color[s] = 2;
    else
        color[s] = 1;
    for (auto u : adj[s])
    {
        /** Take action on Child
         *  after entering the Child node
         **/
        par[u] = s;
        dfs(u);
        /** Take action on Child
         *  after exiting the Child node
         **/
    }
    /** Take action on Vertex
     *  before exiting the Vertex
     **/
}

void reset(ll n)
{
    for (ll i = 1; i <= n; i++)
    {
        adj[i].clear();
        vis[i] = 0;
        par[i] = i;
        color[i] = 0;
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
        ll n;
        cin >> n;
        reset(n);
        map<ll, ll> mp;
        for (ll i = 1; i <= n; i++)
        {
            ll u, v;
            cin >> u >> v;
            mp[u]++;
            mp[v]++;
            adj[u].insert(v);
            adj[v].insert(u);
        }
        checked = true;
        for (auto u : mp)
            if (u.ss > 2)
                checked = false;
        for (ll i = 1; i <= n; i++)
        {
            if (!vis[i])
                dfs(i);
        }
        checked ? yes : no;
    }
    return SH;
}