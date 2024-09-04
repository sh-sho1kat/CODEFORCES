///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-05-06 22:26:55
 **/

#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define mod 1000000007
#define all(x) x.begin(), x.end()
#define eb emplace_back
#define pf push_front
#define MP make_pair
#define ff first
#define ss second
#define fr(s, n) for (ll i = s; i < n; i++)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define dtob(p, n) bitset<p>(n).to_string()
#define btod(bin) stoi(bin, nullptr, 2)
#define nl '\n'
#define SH 0
typedef long long ll;
typedef pair<ll, ll> pll;
typedef vector<ll> vl;
typedef vector<pll> vpll;

#define ok cout << "Eureka" << nl
#define ap(arr, n)             \
    for (ll i = 0; i < n; i++) \
        cout << arr[i] << " "; \
    cout << nl;

vl adj[1005];

int main()
{
    fastio;
    ll t;
    cin >> t;
    while (t--)
    {
        ll sum = 0, tmp = 0, res = 0, cnt = 0, ct = 0, ans = 0, mn = 0, mx = INT_MAX;
        bool flag = true, fun = false, f = false;
        ll n, m;
        cin >> n >> m;
        while (m--)
        {
            ll u, v;
            cin >> u >> v;
            adj[u].eb(v);
            adj[v].eb(u);
        }
        ll x = 0, y = 0;
        map<ll, ll> mp;
        for (ll node = 1; node <= n; node++)
        {
            // cout << node << " --> ";
            // for (auto u : adj[node])
            //     cout << u << " ";
            // cout << nl << adj[node].size() << nl;
            ll len = adj[node].size();
            mp[len]++;
        }
        mp[1] = 0;
        for (auto u : mp)
        {
            // cout << u.ff << " " << u.ss << nl;
            if (u.ss > 0)
            {
                if (u.ss == 1)
                    x = u.ff;
                else
                    y = u.ff;
            }
        }
        if (x == 0)
            x = y;
        cout << x << " " << y - 1 << nl;
        for (ll node = 1; node <= n; node++)
        {
            adj[node].clear();
        }
    }
    return SH;
}