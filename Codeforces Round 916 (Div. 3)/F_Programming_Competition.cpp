///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-12-22 14:47:04
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
vl adj[N];
bool vis[N];
ll level[N];
ll par[N];
ll subordinate[N];
ll result;
queue<ll> q;

void bfs(ll s)
{
    q.push(s);
    vis[s] = true;
    par[s] = -1;
    while (!q.empty())
    {
        ll v = q.front();
        q.pop();
        for (auto u : adj[v])
        {
            if (!vis[u])
            {
                vis[u] = true;
                q.push(u);
                level[u] = level[v] + 1;
                par[u] = v;
            }
        }
    }
}

void reset(ll n)
{
    for (ll i = 1; i <= n; i++)
    {
        adj[i].clear();
        vis[i] = 0;
        level[i] = 0;
        par[i] = 0;
    }
}

void dfs(ll s)
{
    /** Take action on Vertex
     *  after entering the Vertex
     **/

    vis[s] = true;
    for (auto u : adj[s])
    {
        /** Take action on Child
         *  after entering the Child node
         **/
        par[u] = s;
        dfs(u);
        subordinate[s] += subordinate[u];
        /** Take action on Child
         *  after exiting the Child node
         **/
    }
    /** Take action on Vertex
     *  before exiting the Vertex
     **/
}

void reset2(ll n)
{
    for (ll i = 1; i <= n; i++)
    {
        subordinate[i] = 1;
        vis[i] = 0;
        par[i] = 0;
    }
}

void dfs2(ll n, ll s, ll used)
{
    /** Take action on Vertex
     *  after entering the Vertex
     **/
    bool use = false;
    if ((n - subordinate[s] - level[s] - used) > 0)
    {
        use = true;
        result++;
    }
    for (auto u : adj[s])
    {
        /** Take action on Child
         *  after entering the Child node
         **/
        if (use)
            dfs2(n, u, used + 1);
        else
            dfs2(n, u, used);
        /** Take action on Child
         *  after exiting the Child node
         **/
    }
    /** Take action on Vertex
     *  before exiting the Vertex
     **/
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
        reset(n);
        for (ll i = 2; i <= n; i++)
        {
            ll p;
            cin >> p;
            adj[p].push_back(i);
        }
        bfs(1);
        reset2(n);
        dfs(1);
        dfs2(n, 1, 0);
        cout << result / 2 << nl;
        result = 0;
    }
    return SH;
}