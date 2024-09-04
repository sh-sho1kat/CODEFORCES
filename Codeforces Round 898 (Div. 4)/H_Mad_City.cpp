///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-09-23 21:09:53
 **/

#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define mod 1000000007
#define inf 1e18
#define all(x) x.begin(), x.end()
#define eb emplace_back
#define ff first
#define ss second
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define dtob(p, n) bitset<p>(n).to_string()
#define btod(bin) stoi(bin, nullptr, 2)
#define ok cout << "Eureka" << nl
#define nl '\n'
#define SH 0
typedef long long ll;
typedef pair<ll, ll> pll;
typedef vector<ll> vl;
typedef vector<pll> vpll;

vl adj[1000005];
vector<bool> vis(1000005);
vector<ll> level(1000005);
queue<ll> q;

void bfs(ll s)
{
    q.push(s);
    vis[s] = true;
    while (!q.empty())
    {
        ll v = q.front();
        q.pop();
        for (auto u : adj[v])
        {
            if (!vis[u])
            {
                vis[u] = true;
                q.push(u);
                level[u] = level[v] + 1;
            }
        }
    }
}

ll cnode, fg = 1;

void dfs(ll vertex, ll par)
{
    vis[vertex] = true;
    for (auto child : adj[vertex])
    {
        if (vis[child])
        {
            if ((child != par) && fg)
            {
                cnode = child;
                fg = 0;
            }
            continue;
        }
        dfs(child, vertex);
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
        ll n, m, b;
        cin >> n >> m >> b;
        ll mlabel, blabel;
        for (ll i = 0; i <= n; i++)
        {
            adj[i].clear();
            vis[i] = 0;
        }
        for (ll i = 1; i <= n; i++)
        {
            ll u, v;
            cin >> u >> v;
            adj[u].eb(v);
            adj[v].eb(u);
        }
        fg = 1;
        dfs(b, 0);
        for (ll i = 1; i <= n; i++)
        {
            vis[i] = 0;
            level[i] = 0;
        }
        bfs(m);
        mlabel = level[cnode];
        for (ll i = 1; i <= n; i++)
        {
            vis[i] = 0;
            level[i] = 0;
        }
        bfs(b);
        blabel = level[cnode];
        (mlabel > blabel) ? yes : no;
    }
    return SH;
}