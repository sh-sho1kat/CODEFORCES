#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define mod 1000000007
#define all(x) x.begin(), x.end()
#define eb emplace_back
#define pf push_front
//#define mp make_pair
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
ll x = 0;
bool f = false;
vector<pair<ll, ll>> adj[100005];
vector<ll> visited(100005, 0);
map<ll, bool> mp;
bool teleport = false;

void dfs2(ll s)
{

    if (visited[s])
        return;
    visited[s] = 1;
    for (auto u : adj[s])
    {
        x = x ^ u.ss;
        cout << x << " ";
        if (mp[x])
        {
            teleport = true;
        }
        dfs2(u.ff);
    }
}
void dfs1(ll s, ll tt)
{
    if (visited[s])
        return;
    visited[s] = x;
    for (auto u : adj[s])
    {

        // if (u.ff != tt && !mp[x])
        {
            x = visited[s] ^ u.ss;
            mp[x] = true;
        }
        cout << x << " ";
        dfs1(u.ff, tt);
    }
}

int main()
{
    fastio;
    ll t;
    cin >> t;
    while (t--)
    {
        ll sum = 0, tmp = 0, res = 0, cnt = 0, count = 0, ans = 0;
        bool flag = true;
        ll n, a, b;
        cin >> n >> a >> b;
        ll m = n;
        --a, --b;
        while (m--)
        {
            ll u, v, wt;
            cin >> u >> v >> wt;
            --u, --v;
            adj[u].eb(make_pair(v, wt));
            adj[v].eb(make_pair(u, wt));
        }
        dfs1(a, b);
        cout << nl;
        fr(0, n + 2) visited[i] = 0;
        // for (ll i = 0; i < n + 2; i++)
        // {
        //     // ok;
        //     cout << visited[i] << " ";
        // }
        dfs2(b);
        cout << nl;
        teleport ? yes : no;
        fr(0, n + 2)
        {
            adj[i].clear();
        }
        mp.clear();
        fr(0, n + 2) visited[i] = 0;
    }
    return SH;
}