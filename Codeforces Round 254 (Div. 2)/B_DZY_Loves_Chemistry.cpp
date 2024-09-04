///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-02-22 03:35:37
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

ll fastpow(ll a, ll b)
{
    long long res = 1;
    while (b)
    {
        if (b & 1)
            (res *= a);
        b >>= 1;
        (a *= a);
    }
    return res;
}

vl adj[1000005];
vl v;
vector<bool> visited(1000005);

void dfs(ll s)
{
    if (visited[s])
        return;
    visited[s] = true;
    for (auto u : adj[s])
        dfs(u);
}

int main()
{
    fastio;
    ll n, m;
    cin >> n >> m;
    while (m--)
    {
        ll u, v;
        cin >> u >> v;
        --u, --v;
        adj[u].eb(v);
        adj[v].eb(u);
    }
    ll cnt = 0;
    for (ll i = 0; i < n; i++)
    {
        if (visited[i] != 1)
        {
            dfs(i);
            cnt++;
        }
    }
    // for (ll node = 0; node < n; node++)
    // {
    //     cout << node << " --> ";
    //     for (auto u : adj[node])
    //         cout << u << " ";
    //     cout << nl;
    // }
    cout << fastpow(2, n - cnt) << nl;
    return SH;
}