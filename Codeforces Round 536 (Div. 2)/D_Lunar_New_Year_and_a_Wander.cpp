#include <bits/stdc++.h>
using namespace std;

// 2024-12-14 03:23:14
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
ll level[N];
ll par[N];
priority_queue<ll, vl, greater<ll>> q;
vl vec;

void bfs(ll s)
{
    q.push(s);
    vis[s] = true;
    par[s] = -1;
    while (!q.empty())
    {
        ll v = q.top();
        vec.eb(v);
        q.pop();
        for (auto u : adj[v])
        {
            if (!vis[u])
            {
                vis[u] = true;
                q.push(u);
                level[u] = level[v] + 1;
                par[u] = v;
            }
        }
    }
}

void reset(ll n)
{
    for (ll i = 1; i <= n; i++)
    {
        adj[i].clear();
        vis[i] = 0;
        level[i] = 0;
        par[i] = 0;
    }
}

int main()
{
    fastio;
    ll n, m;
    cin >> n >> m;
    reset(n);
    while (m--)
    {
        ll u, v;
        cin >> u >> v;
        adj[u].eb(v);
        adj[v].eb(u);
    }
    bfs(1);
    for (auto u : vec)
        cout << u << " ";
    cout << nl;

    return SH;
}