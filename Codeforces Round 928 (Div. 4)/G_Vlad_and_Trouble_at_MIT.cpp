///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2024-02-19 20:40:55
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

string str;
ll wall = 0;

const ll N = 2e5 + 5;
vl adj[N];
bool vis[N];
ll par[N];

void dfs(ll s, ll prev)
{
    /** Take action on Vertex
     *  after entering the Vertex
     **/
    if (vis[s])
        return;
    vis[s] = true;
    for (auto u : adj[s])
    {
        /** Take action on Child
         *  after entering the Child node
         **/
        par[u] = s;
        if (str[s] == 'P' && str[u]=='C')
        {
            dfs(u, 1);
        }
        else if (str[s] == 'P'&& str[u]=='S')
        {
            wall++;
            dfs(u, 0);
        }
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
            adj[p].eb(i);
        }
        str = "#";
        string p;
        cin >> p;
        str += p;
        wall = 0;
        dfs(1, 0);
        cout << wall << nl;
    }
    return SH;
}