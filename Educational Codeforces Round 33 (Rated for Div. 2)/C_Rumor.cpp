#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define mod 1000000007
#define all(x) x.begin(), x.end()
#define eb emplace_back
#define pf push_front
#define mp make_pair
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

ll sum = 0;
ll p;

bool visited[100005];
vector<ll> adj[100005];
ll a[100005 + 5];

void dfs(ll s)
{
    p = min(p, a[s]);
    if (visited[s])
        return;
    visited[s] = true;
    for (auto u : adj[s])
    {
        dfs(u);
    }
}

int main()
{
    fastio;
    ll n, k;
    cin >> n >> k;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    while (k--)
    {
        ll u, v;
        cin >> u >> v;
        --u, --v;
        adj[u].eb(v);
        adj[v].eb(u);
    }
    // for (ll i = 0; i < n; i++)
    // {
    //     cout << i << "--> ";
    //     for (auto u : adj[i])
    //     {
    //         cout << u << " ";
    //     }
    //     cout << nl;
    // }
    for (ll i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            p = INT_MAX;
            dfs(i);
            sum += p;
        }
    }
    cout << sum << nl;
    return SH;
}