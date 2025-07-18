#include <bits/stdc++.h>
using namespace std;

// 2025-03-31 20:44:24
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
typedef int ll;
typedef pair<ll, ll> pll;
typedef vector<ll> vl;
typedef vector<pll> vpll;

const ll N = 5e5 + 5;
vl adj[N];
bool vis[N];
ll level[N];
ll par[N];
queue<ll> q;
ll mxlvl;

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
                mxlvl = max(mxlvl, level[u]);
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
        mxlvl = 0;
    }
}

bool cmp(const ll &p1, const ll &p2)
{
    return level[p1] < level[p2];
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
        ll m = n - 1;
        reset(n);
        while (m--)
        {
            ll u, v;
            cin >> u >> v;
            adj[u].eb(v);
            adj[v].eb(u);
        }
        bfs(1);
        map<ll, ll> mp;
        for (ll i = 1; i <= n; i++)
        {

            mp[i] = adj[i].size() - 1;
        }
        vl leaf;
        for (ll i = 1; i <= n; i++)
            if (adj[i].size() == 1)
                leaf.eb(i);
        sort(leaf.begin(), leaf.end(), cmp);
        ll niche[n + 5] = {};
        ll upore[n + 5] = {};
        for (auto u : leaf)
        {
            ll node = u;
            cnt = 0;
            while (par[node] != -1)
            {
                if (mp[node] > 1)
                {
                    mp[node]--;
                    break;
                }
                cnt++;
                node = par[node];
            }
            niche[level[u]] += cnt;
        }
        for (ll i = 1; i <= n; i++)
            upore[level[i]]++;

        for (ll i = 1; i <= n; i++)
            niche[i] += niche[i - 1];
        for (ll i = n; i >= 1; i--)
            upore[i] += upore[i + 1];
        res = N;
        for (ll i = 2; i <= mxlvl + 1; i++)
        {
            res = min(res, (niche[i - 2] + upore[i]));
        }
        cout << res << nl;
    }
    return SH;
}