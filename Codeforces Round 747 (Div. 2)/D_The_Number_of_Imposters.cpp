#include <bits/stdc++.h>
using namespace std;

// 2025-04-19 01:49:30
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
vector<pair<ll, ll>> adj[N];
ll vis[N];
ll color[N];
ll par[N];

ll cnt1 = 0;
ll cnt2 = 0;
bool flag = true;

void dfs(ll s, ll cur)
{
    /** Take action on Vertex
     *  after entering the Vertex
     **/
    if (cur)
        cnt1++;
    else
        cnt2++;
    vis[s] = 1;
    color[s] = cur;
    for (auto u : adj[s])
    {
        /** Take action on Child
         *  after entering the Child node
         **/
        if (vis[u.ff])
        {
            if (vis[u.ff] == 1 and par[s] != u.ff)
            {
                // cout << u.ff << " " << s << " " << par[s] << nl;
                if (cur ^ u.ss != color[u.ff])
                    flag = false;
            }
            continue;
        }
        par[u.ff] = s;
        dfs(u.ff, cur ^ u.ss);
        /** Take action on Child
         *  after exiting the Child node
         **/
    }
    /** Take action on Vertex
     *  before exiting the Vertex
     **/
    vis[s] = 2;
    return;
}

void reset(ll n)
{
    for (ll i = 1; i <= n; i++)
    {
        adj[i].clear();
        vis[i] = 0;
        color[i] = 0;
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
        bool fun = false, f = false;
        flag = true;
        ll n, m;
        cin >> n >> m;
        reset(n);
        map<pll, ll> mp1, mp2;
        while (m--)
        {
            ll u, v, w;
            string s;
            cin >> u >> v >> s;
            if (s == "imposter")
            {
                w = 1;
                mp1[{min(u, v), max(u, v)}]++;
            }
            else
            {
                w = 0;
                mp2[{min(u, v), max(u, v)}]++;
            }
            adj[u].eb({v, w});
            adj[v].eb({u, w});
        }
        for (auto u : mp1)
            if (mp2[u.ff])
                flag = false;
        for (ll i = 1; i <= n; i++)
        {
            cnt1 = 0, cnt2 = 0;
            if (!vis[i])
                dfs(i, 0);
            res += max(cnt1, cnt2);
        }
        flag ?: res = -1;
        cout << res << nl;
    }
    return SH;
}