#include <bits/stdc++.h>
using namespace std;

// 2025-06-09 12:43:55
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

ll fastpow(ll a, ll b)
{
    long long res = 1;
    while (b)
    {
        if (b & 1)
            (res *= a) %= mod;
        b >>= 1;
        (a *= a) %= mod;
    }
    return res;
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
        ll n;
        cin >> n;
        ll m = n - 1;
        reset(n);
        while (m--)
        {
            ll u, v;
            cin >> u >> v;
            adj[u].eb(v);
            adj[v].eb(u);
        }

        dfs(1);
        binarylift(n);
        vl vc;
        for (ll i = 2; i <= n; i++)
            if (adj[i].size() == 1)
                vc.eb(i);

        if (vc.size() > 2)
            cout << 0 << nl;
        else if (vc.size() == 1)
            cout << fastpow(2, n) << nl;
        else
        {
            ll u = vc[0];
            ll v = vc[1];

            ll lc = lca(u, v);
            ll dst1 = distance(lc, u);
            ll dst2 = distance(lc, v);
            ll dst3 = distance(1, u);
            ll dst4 = distance(1, v);
            if (dst1 == dst2)
            {
                ll p = distance(1, lc);
                res = fastpow(2, p + 1) + fastpow(2, p + 1);
                res %= mod;
            }
            else if (dst1 > dst2)
            {
                ll p = dst3 - dst2;
                res = fastpow(2, p) + fastpow(2, p + 1);
                res %= mod;
            }
            else
            {
                ll p = dst4 - dst1;
                res = fastpow(2, p) + fastpow(2, p + 1);
                res %= mod;
            }
            cout << res << nl;
        }
    }
    return SH;
}