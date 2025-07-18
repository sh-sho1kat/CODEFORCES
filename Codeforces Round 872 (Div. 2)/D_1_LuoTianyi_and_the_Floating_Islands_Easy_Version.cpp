#include <bits/stdc++.h>
using namespace std;

// 2025-06-15 10:58:43
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

ll n, k;
const ll N = 2e5 + 5;
const ll LOG = 20;
vl adj[N];
ll depth[N];
ll sz[N];
ll par[N];
ll res[N];
ll ancestor[N][LOG + 5];

void dfs(ll vartex, ll Parent = 0)
{
    depth[vartex] = depth[Parent] + 1;
    res[vartex] = depth[vartex];
    sz[vartex] = 1;
    for (auto child : adj[vartex])
    {
        if (child != Parent)
        {
            dfs(child, vartex);
            sz[vartex] += sz[child];
            res[vartex] += res[child];
        }
    }
}

void dfs2(ll vartex, ll Parent = 0)
{
    if (Parent)
    {
        res[vartex] = res[Parent];
        res[vartex] += n;
        res[vartex] -= 2 * sz[vartex];
    }
    for (auto child : adj[vartex])
    {
        if (child != Parent)
        {
            dfs2(child, vartex);
        }
    }
}

ll egcd(ll a, ll b, ll &x, ll &y)
{
    if (b == 0)
    {
        x = 1;
        y = 0;
        return a;
    }
    ll x1, y1;
    ll d = egcd(b, a % b, x1, y1);
    x = y1;
    y = x1 - y1 * (a / b);
    return d;
}

ll modInv(ll a, ll m)
{
    ll x, y;
    ll gcd = egcd(a, m, x, y);
    return (x % m + m) % m;
}

int main()
{
    fastio;
    cin >> n >> k;
    ll m = n - 1;
    while (m--)
    {
        ll u, v;
        cin >> u >> v;
        adj[u].eb(v);
        adj[v].eb(u);
    }
    if (k == 1 or k == 3)
        cout << 1 << nl;
    else
    {
        depth[1] = 1;
        dfs(1, 0);
        dfs2(1, 0);
        ll sum = -n;
        for (ll i = 1; i <= n; i++)
            sum += res[i];
        sum %= mod;
        ll q = n * (n - 1);
        ll qinv = modInv(q, mod);
        ll result = sum * qinv;
        result %= mod;
        cout << result << nl;
    }

    return SH;
}