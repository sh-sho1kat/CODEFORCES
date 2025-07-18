#include <bits/stdc++.h>
using namespace std;

// 2025-04-08 19:40:35
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
vector<pair<ll, ll>> adj[N];
map<ll, ll> mp1, mp2;
ll dst;

void(dfs(ll vartex, ll parent, ll x, ll f))
{
    for (auto u : adj[vartex])
    {
        ll child = u.ff;
        ll weight = u.ss;
        if (child == parent or child == dst)
            continue;
        if (f)
            mp1[x ^ weight]++;
        else
            mp2[x ^ weight]++;
        dfs(child, vartex, x ^ weight, f);
    }
}

void reset(ll n)
{
    for (ll i = 1; i <= n; i++)
    {
        adj[i].clear();
    }
    mp1.clear();
    mp2.clear();
    dst = 0;
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
        ll n, a, b;
        cin >> n >> a >> b;
        reset(n);
        ll m = n - 1;
        while (m--)
        {
            ll u, v, w;
            cin >> u >> v >> w;
            adj[u].eb({v, w});
            adj[v].eb({u, w});
        }
        mp1[0] = 1;
        dst = b;
        dfs(a, -1, 0, 1);
        dst = -1;
        dfs(b, -1, 0, 0);
        map<ll, ll> mp;
        for (auto u : mp1)
            mp[u.ff]++;
        for (auto u : mp2)
            mp[u.ff]++;
        for (auto u : mp)
        {
            if (u.ss >= 2)
                fun = true;
        }
        fun ? yes : no;
    }
    return SH;
}