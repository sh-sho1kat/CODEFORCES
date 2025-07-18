#include <bits/stdc++.h>
using namespace std;

// 2025-06-10 23:15:06
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
ll parent[N];
ll Size[N];
ll maxima[N];
ll minima[N];

void make(int n)
{
    for (ll v = 1; v <= n; v++)
    {
        parent[v] = v;
        Size[v] = 1;
        maxima[v] = -inf;
        minima[v] = inf;
    }
}

int find(int v)
{
    if (parent[v] == v)
        return v;
    return find(parent[v]);
}

void Union(ll a, ll b, ll w)
{
    a = find(a);
    b = find(b);
    if (a != b)
    {
        if (Size[a] > Size[b])
        {
            parent[b] = a;
            Size[a] += Size[b];
            maxima[a] = max(maxima[a], maxima[b]);
            minima[a] = min(minima[a], minima[b]);
            maxima[a] = max(maxima[a], w);
            minima[a] = min(minima[a], w);
        }
        else
        {
            parent[a] = b;
            Size[b] += Size[a];
            maxima[b] = max(maxima[a], maxima[b]);
            minima[b] = min(minima[a], minima[b]);
            maxima[b] = max(maxima[b], w);
            minima[b] = min(minima[b], w);
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
        ll n, m;
        cin >> n >> m;
        vector<pair<ll, pll>> edge;
        for (ll i = 1; i <= m; i++)
        {
            ll u, v, w;
            cin >> u >> v >> w;
            edge.eb({w, {u, v}});
        }
        sort(all(edge));

        make(n);
        res = inf;
        for (auto ed : edge)
        {
            ll w = ed.ff;
            ll u = ed.ss.ff;
            ll v = ed.ss.ss;
            Union(u, v, w);
            if (find(1) == find(n))
                res = min(maxima[find(1)] + minima[find(1)], res);
        }
        cout << res << nl;
    }
    return SH;
}