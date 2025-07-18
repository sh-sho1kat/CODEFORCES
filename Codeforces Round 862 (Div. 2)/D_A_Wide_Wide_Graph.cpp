#include <bits/stdc++.h>
using namespace std;

// 2025-06-30 23:58:35
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
const ll LOG = 20;
vl adj[N];
ll depth[N];
ll sz[N];
ll par[N];
ll ancestor[N][LOG + 5];

void dfs(ll vartex, ll Parent = 0)
{
    /** Take action on Vertex
     *  after entering the Vertex
     **/
    par[vartex] = Parent;
    depth[vartex] = depth[Parent] + 1;
    sz[vartex] = 1;
    for (auto child : adj[vartex])
    {
        /** Take action on Child
         *  after entering the Child node
         **/
        if (child != Parent)
        {
            dfs(child, vartex);
            /** Take action on Child
             *  after exiting the Child node
             **/
            sz[vartex] += sz[child];
        }
    }
    /** Take action on Vertex
     *  before exiting the Vertex
     **/
}

void binarylift(ll n)
{
    dfs(1);
    for (ll node = 1; node <= n; node++)
        ancestor[node][0] = par[node];
    for (ll pw = 1; pw <= LOG; pw++)
    {
        for (ll node = 1; node <= n; node++)
        {
            if (depth[node] >= (1 << pw))
            {
                ancestor[node][pw] = ancestor[ancestor[node][pw - 1]][pw - 1];
            }
        }
    }
}

ll kth_ancestor(ll u, ll k)
{
    for (ll i = LOG; i >= 0; i--)
    {
        if (k & (1 << i))
            u = ancestor[u][i];
    }
    return u;
}

ll lca(ll u, ll v)
{
    if (u == v)
        return u;
    if (depth[u] < depth[v])
        swap(u, v);
    ll k = depth[u] - depth[v];
    u = kth_ancestor(u, k);
    if (u == v)
        return u;
    for (ll i = LOG; i >= 0; i--)
    {
        if (depth[u] >= (1 << i) and ancestor[u][i] != ancestor[v][i])
        {
            u = ancestor[u][i];
            v = ancestor[v][i];
        }
    }
    u = ancestor[u][0];
    return u;
}

ll distance(ll u, ll v)
{
    ll Lca = lca(u, v);
    ll dst = depth[u] + depth[v] - 2 * depth[Lca];
    return dst;
}

void reset(ll n)
{
    for (ll i = 1; i <= n; i++)
    {
        adj[i].clear();
        par[i] = 0;
        sz[i] = 0;
        depth[i] = 0;
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
    binarylift(n);
    ll tmp = 0;
    ll start, end;
    for (ll i = 1; i <= n; i++)
    {
        ll dst = distance(1, i);
        if (dst > tmp)
        {
            start = i;
            tmp = dst;
        }
    }
    tmp = 0;
    for (ll i = 1; i <= n; i++)
    {
        ll dst = distance(start, i);
        if (dst > tmp)
        {
            end = i;
            tmp = dst;
        }
    }

    map<ll, ll> mp;
    for (ll i = 1; i <= n; i++)
    {
        ll dst1 = distance(i, start);
        ll dst2 = distance(i, end);
        ll dst = max(dst1, dst2);
        mp[dst]++;
    }
    ll p = n;
    for (ll i = 1; i <= n; i++)
    {
        if (p)
            cout << n - p + 1 << " ";
        else
            cout << n << " ";
        p -= mp[i];
    }
    cout << nl;
    return SH;
}