#include <bits/stdc++.h>
using namespace std;

// 2025-07-17 03:28:34
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

vl dst1(200005);
vl dst(200005);
vpll adj[200005];
vl par(200005);

void dijkstra(ll s, ll n)
{
    for (ll _ = 0; _ <= n; _++)
        dst1[_] = inf;
    for (ll _ = 0; _ <= n; _++)
        dst[_] = inf;
    dst1[s] = 0, par[1] = -1;
    priority_queue<pll, vpll, greater<pll>> q;
    q.push({0, s});
    while (!q.empty())
    {
        ll cost = q.top().ff, node = q.top().ss;
        q.pop();
        if (dst1[node] != cost)
            continue;
        for (auto u : adj[node])
        {
            if (cost + u.ss < dst1[u.ff])
            {
                dst1[u.ff] = cost + u.ss;
                q.push({dst1[u.ff], u.ff});
                par[u.ff] = node;
            }
        }
    }
}

int main()
{
    fastio;
    ll n, m;
    cin >> n >> m;
    while (m--)
    {
        ll u, v, w;
        cin >> u >> v >> w;
        adj[u].eb({v, w});
    }
    dijkstra(1, n);
    vpll v;
    for (ll i = 1; i <= n; i++)
        v.eb({dst1[i], i});
    sort(all(v));
    for (auto u : v)
    {
        ll node = u.ss;
        ll dt = u.ff;
        dst[node] = dt;
        for (auto ed : adj[node])
            dst[node] = min(dst[node], ed.ss + dst[ed.ff]);
    }
    for (ll i = 2; i <= n; i++)
    {
        if (dst[i] >= inf)
            dst[i] = -1;
        cout << dst[i] << " ";
    }
    cout << nl;
    return SH;
}