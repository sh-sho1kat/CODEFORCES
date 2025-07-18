#include <bits/stdc++.h>
using namespace std;

// 2025-05-14 20:59:53
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

ll dst[1005][1005];
vpll adj[1005];
ll slow[1005];

void dijkstra(ll s, ll n)
{
    for (ll i = 1; i <= n; i++)
        for (ll j = 1; j <= n; j++)
            dst[i][j] = inf;
    dst[s][s] = 0;
    priority_queue<pair<ll, pair<ll, ll>>, vector<pair<ll, pair<ll, ll>>>, greater<pair<ll, pair<ll, ll>>>> q;
    q.push({0, {s, s}});
    while (!q.empty())
    {
        ll idx = q.top().ss.ss;
        ll cost = q.top().ff, node = q.top().ss.ff, slowness = slow[idx];
        q.pop();
        if (dst[node][idx] != cost)
            continue;
        for (auto u : adj[node])
        {
            if (slow[u.ff] < slowness)
            {
                if (cost + u.ss * slowness < dst[u.ff][u.ff])
                {
                    dst[u.ff][u.ff] = cost + u.ss * slowness;
                    q.push({dst[u.ff][u.ff], {u.ff, u.ff}});
                }
            }
            else
            {
                if (cost + u.ss * slowness < dst[u.ff][idx])
                {
                    dst[u.ff][idx] = cost + u.ss * slowness;
                    q.push({dst[u.ff][idx], {u.ff, idx}});
                }
            }
        }
    }
}

void clear(ll n)
{
    for (ll i = 1; i <= n; i++)
        adj[i].clear();
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
        ll n, m;
        cin >> n >> m;
        clear(n);
        while (m--)
        {
            ll u, v, w;
            cin >> u >> v >> w;
            adj[u].eb({v, w});
            adj[v].eb({u, w});
        }
        slow[0] = inf;
        for (ll i = 1; i <= n; i++)
            cin >> slow[i];

        dijkstra(1, n);

        res = inf;
        for (ll i = 1; i <= n; i++)
            res = min(res, dst[n][i]);

        cout << res << nl;
    }
    return SH;
}
