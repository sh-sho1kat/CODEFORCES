#include <bits/stdc++.h>
using namespace std;

// 2025-06-26 03:50:47
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

const ll mxn = 200005;
vl adj[mxn];
ll par[mxn];

void dfs(ll vartex, ll parent)
{
    par[vartex] = parent;
    for (auto child : adj[vartex])
    {
        if (child != parent)
        {
            dfs(child, vartex);
        }
    }
}

void dfs2(ll vartex, ll parent, bool flag)
{
    for (auto child : adj[vartex])
    {
        if (child != parent)
        {
            if (flag)
                cout << vartex << " " << child << nl;
            else
                cout << child << " " << vartex << nl;
            dfs2(child, vartex, !flag);
        }
    }
}

void clr(ll n)
{
    for (ll i = 1; i <= n; i++)
    {
        adj[i].clear();
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
        clr(n);
        for (ll i = 1; i < n; i++)
        {
            ll u, v;
            cin >> u >> v;
            adj[u].eb(v);
            adj[v].eb(u);
        }
        for (ll i = 1; i <= n; i++)
        {
            if (adj[i].size() == 1)
            {
                dfs(i, 0);
                break;
            }
        }
        for (ll i = 1; i <= n; i++)
        {
            if (adj[par[i]].size() == 2 and par[par[i]])
            {
                fun = true;
                tmp = i;
            }
        }
        if (fun)
        {
            yes;
            cout << par[tmp] << " " << tmp << nl;
            cout << par[par[tmp]] << " " << par[tmp] << nl;
            dfs2(tmp, par[tmp], 0);
            dfs2(par[par[tmp]], par[tmp], 1);
        }
        else
            no;
    }
    return SH;
}