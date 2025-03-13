#include <bits/stdc++.h>
using namespace std;

// 2024-10-12 10:16:22
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
bool degree = false;
void dfs(ll s)
{
    /** Take action on Vertex
     *  after entering the Vertex
     **/
    if (vis[s])
        return;
    vis[s] = true;
    if (adj[s].size() == 1)
        degree = true;
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
    ll t;
    cin >> t;
    while (t--)
    {
        ll sum = 0, tmp = 0, res = 0, cnt = 0, ct = 0, ans = 0, mn = LONG_MAX, mx = 0;
        bool flag = true, fun = false, f = false;
        ll n;
        cin >> n;
        ll a[n + 5];
        for (ll i = 1; i <= n; i++)
            cin >> a[i];

        reset(n);
        for (ll i = 1; i <= n; i++)
        {
            if (i > a[i] and a[a[i]] == i)
                continue;
            adj[i].eb(a[i]);
            adj[a[i]].eb(i);
        }
        for (ll i = 1; i <= n; i++)
        {
            if (!vis[i])
            {
                ++res;
                degree = false;
                dfs(i);
                if (degree)
                    cnt++;
            }
        }
        if (cnt)
            --cnt;

        cout << res - cnt << " " << res << nl;
    }
    return SH;
}