#include <bits/stdc++.h>
using namespace std;

// 2024-12-14 02:52:52
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
vl adj[N];
bool vis[N];
ll par[N];

ll res = 0;

ll dfs(ll s)
{
    /** Take action on Vertex
     *  after entering the Vertex
     **/
    if (vis[s])
        return 0;
    vis[s] = true;
    ll cnt = 1;
    for (auto u : adj[s])
    {
        /** Take action on Child
         *  after entering the Child node
         **/
        par[u] = s;
        cnt += dfs(u);
        /** Take action on Child
         *  after exiting the Child node
         **/
    }
    /** Take action on Vertex
     *  before exiting the Vertex
     **/
    if (cnt % 2 == 0 && cnt)
    {
        res++;
        return 0;
    }
    else
        return cnt;
}

void reset(ll n)
{
    for (ll i = 1; i <= n; i++)
    {
        adj[i].clear();
        vis[i] = 0;
        par[i] = 0;
    }
}

int main()
{
    fastio;
    ll n;
    cin >> n;
    ll m = n - 1;
    while (m--)
    {
        ll u, v;
        cin >> u >> v;
        adj[u].eb(v);
        adj[v].eb(u);
    }
    if (n & 1)
    {
        cout << -1 << nl;
        return 0;
    }
    ll node;
    for (ll i = 1; i <= n; i++)
        if (adj[i].size() == 1)
        {
            node = i;
            break;
        }
    dfs(node);
    cout << --res << nl;

    return SH;
}