///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2024-02-19 11:03:02
 **/

#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define mod 1000000007
#define inf (1LL << 62)
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

const ll N = 2e6 + 5;
vl adj[N];
bool vis[N];
ll par[N];

vl v, v1;

void dfs(ll s)
{
    /** Take action on Vertex
     *  after entering the Vertex
     **/
    if (vis[s])
        return;
    vis[s] = true;
    v.eb(s);
    for (auto u : adj[s])
    {
        /** Take action on Child
         *  after entering the Child node
         **/
        par[u] = s;
        dfs(u);
        /** Take action on Child
         *  after exiting the Child node
         **/
    }
    /** Take action on Vertex
     *  before exiting the Vertex
     **/
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
    ll n, m;
    cin >> n >> m;
    reset(n);
    while (m--)
    {
        ll u, v;
        cin >> u >> v;
        adj[u].eb(v);
        adj[v].eb(u);
    }
    bool flag = false;
    ll res = 0;
    for (ll i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            v.clear();
            dfs(i);
            ll sum = 0;
            for (auto u : v)
                sum += adj[u].size();
            sum /= 2;
            ll num = v.size();
            ll p = (num * (num - 1)) / 2;
            ll edge = p - sum;
            res += edge;
            v1.eb(num);
        }
    }
    sort(v1.begin(), v1.end());
    if (res)
        cout << res << nl;
    else
    {
        ll a = (v1[0] * (v1[0] - 1)) / 2;
        ll b = (v1[1] * (v1[1] - 1)) / 2;
        ll c = ((v1[0] + v1[1]) * (v1[0] + v1[1] - 1)) / 2;
        cout << c - a - b << nl;
    }

    return SH;
}