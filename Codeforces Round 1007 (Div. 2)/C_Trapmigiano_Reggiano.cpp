#include <bits/stdc++.h>
using namespace std;

// 2025-03-01 02:52:47
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
queue<ll> q;

void bfs(ll s)
{
    q.push(s);
    vis[s] = true;
    par[s] = -1;
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

bool cmp(const ll &p1, const ll &p2)
{
    return level[p1] > level[p2];
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
        ll n, st, ed;
        cin >> n >> st >> ed;
        reset(n);
        ll m = n - 1;
        while (m--)
        {
            ll u, v;
            cin >> u >> v;
            adj[u].eb(v);
            adj[v].eb(u);
        }
        bfs(ed);
        vl v;
        for (ll i = 1; i <= n; i++)
            v.eb(i);
        sort(all(v), cmp);
        for (auto u : v)
            cout << u << " ";
        cout << nl;
    }
    return SH;
}