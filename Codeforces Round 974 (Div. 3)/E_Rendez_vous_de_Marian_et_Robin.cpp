#include <bits/stdc++.h>
using namespace std;

// 2024-09-23 23:35:21
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define mod 1000000007
#define inf (1LL << 62)
#define all(x) x.begin(), x.end()
#define eb emplace_back
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

ll dst[200005][5];
ll horse[200005] = {};
vpll adj[200005];

void dijkstra(ll s, ll n)
{
    for (ll _ = 0; _ <= n; _++)
        dst[_][0] = inf, dst[_][1] = inf;
    bool f = 0;
    priority_queue<tuple<ll, ll, ll>, vector<tuple<ll, ll, ll>>, greater<tuple<ll, ll, ll>>> q;
    if (horse[s])
        f = 1;
    q.push({0, s, f});
    dst[s][f] = 0;
    while (!q.empty())
    {
        ll cost = get<0>(q.top()), node = get<1>(q.top());
        f = get<2>(q.top());
        q.pop();
        if (dst[node][f] != cost)
            continue;
        for (auto u : adj[node])
        {
            if (f or horse[node])
            {
                if (cost + u.ss / 2 < dst[u.ff][1])
                {
                    dst[u.ff][1] = cost + u.ss / 2;
                    q.push({dst[u.ff][1], u.ff, 1});
                }
            }
            else
            {
                if (cost + u.ss < dst[u.ff][0])
                {
                    dst[u.ff][0] = cost + u.ss;
                    q.push({dst[u.ff][0], u.ff, 0});
                }
            }
        }
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
        ll n, m, h;
        cin >> n >> m >> h;
        for (ll i = 1; i <= n; i++)
        {
            adj[i].clear();
            horse[i] = 0;
        }
        for (ll i = 1; i <= h; i++)
        {
            ll p;
            cin >> p;
            horse[p]++;
        }
        while (m--)
        {
            ll u, v, w;
            cin >> u >> v >> w;
            adj[u].eb(v, w);
            adj[v].eb(u, w);
        }
        dijkstra(1, n);
        ll dst1[n + 5], dst2[n + 5];
        for (ll i = 1; i <= n; i++)
            dst1[i] = min(dst[i][0], dst[i][1]);
        dijkstra(n, n);
        for (ll i = 1; i <= n; i++)
            dst2[i] = min(dst[i][0], dst[i][1]);
        ans = inf;
        for (ll i = 1; i <= n; i++)
            ans = min({ans, max(dst1[i], dst2[i])});
        if (ans == inf)
            cout << -1 << nl;
        else
            cout << ans << nl;
    }
    return SH;
}
