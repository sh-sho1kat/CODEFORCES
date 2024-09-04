///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2024-01-21 23:13:57
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

const ll N = 2e5 + 5;
ll cost[N];
vl adj[N];
bool vis[N];
ll par[N];

void dfs(ll s)
{
    /** Take action on Vertex
     *  after entering the Vertex
     **/
    if (vis[s])
        return;
    vis[s] = true;
    ll sum = 0;
    bool flag = false;
    for (auto u : adj[s])
    {
        /** Take action on Child
         *  after entering the Child node
         **/
        flag = true;
        par[u] = s;
        dfs(u);
        sum += cost[u];
        /** Take action on Child
         *  after exiting the Child node
         **/
    }
    if (sum < cost[s] && flag)
        cost[s] = sum;
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
        cost[i] = 0;
    }
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
        ll n, k;
        cin >> n >> k;
        reset(n);
        for (ll i = 1; i <= n; i++)
            cin >> cost[i];
        for (ll i = 1; i <= k; i++)
        {
            ll p;
            cin >> p;
            cost[p] = 0;
        }
        for (ll i = 1; i <= n; i++)
        {
            ll m;
            cin >> m;
            while (m--)
            {
                ll v;
                cin >> v;
                adj[i].eb(v);
            }
        }

        // for (ll node = 1; node <= n; node++)
        // {
        //     cout << node << " --> ";
        //     for (auto u : adj[node])
        //         cout << u << " ";
        //     cout << nl;
        // }
        for (ll i = 1; i <= n; i++)
            dfs(i);
        for (ll i = 1; i <= n; i++)
            cout << cost[i] << " ";
        cout << nl;
    }
    return SH;
}