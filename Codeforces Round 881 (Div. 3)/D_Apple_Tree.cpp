///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-06-26 00:49:38
 **/

#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define mod 1000000007
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
vl leaf(1000005);

void dfs(ll s)
{
    vis[s] = true;
    if (adj[s].size() == 1 && s != 1)
        leaf[s] = 1;
    for (auto u : adj[s])
    {
        if (!vis[u])
        {
            dfs(u);
            leaf[s] += leaf[u];
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
        cin >> n;
        m = n - 1;
        while (m--)
        {
            ll u, v;
            cin >> u >> v;
            adj[u].eb(v);
            adj[v].eb(u);
        }
        dfs(1);
        ll q;
        cin >> q;
        while (q--)
        {
            ll a, b;
            cin >> a >> b;
            cout << leaf[a] * leaf[b] << nl;
        }
        for (ll i = 0; i <= n; i++)
        {
            adj[i].clear();
            leaf[i] = 0;
            vis[i] = false;
        }
    }
    return SH;
}