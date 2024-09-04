///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-02-23 00:47:20
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

vl adj[1000005];
vl v;
vector<ll> visited(1000005), cat(1000005);
ll k;

ll cou = 0;
void dfs(ll s, ll cnt)
{
    if (cat[s])
        cnt++;
    else
        cnt = 0;
    if (cnt > k)
    {
        visited[s] = 2;
        return;
    }
    if (adj[s].size() == 1 && s != 1)
        cou++;
    if (visited[s])
        return;
    visited[s] = 1;
    for (auto u : adj[s])
        dfs(u, cnt);
}

int main()
{
    fastio;
    ll t;
    // cin >> t;
    // while (t--)
    {
        ll sum = 0, tmp = 0, res = 0, ans = 0;
        bool flag = true, fun = false;
        ll n;
        cin >> n >> k;
        for (ll i = 1; i <= n; i++)
        {
            cin >> cat[i];
        }
        ll m = n - 1;
        while (m--)
        {
            ll u, v;
            cin >> u >> v;
            adj[u].eb(v);
            adj[v].eb(u);
        }
        dfs(1, 0);
        cout << cou << nl;
        // for (ll node = 1; node <= n; node++)
        // {
        //     cout << node << " --> ";
        //     for (auto u : adj[node])
        //         cout << u << " ";
        //     cout << nl;
        // }
    }
    return SH;
}