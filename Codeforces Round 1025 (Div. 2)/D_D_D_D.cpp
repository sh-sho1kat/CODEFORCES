#include <bits/stdc++.h>
using namespace std;

// 2025-05-20 23:08:18
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
ll dst[N][2];
queue<pair<ll, bool>> q;

void bfs(ll s)
{
    q.push({s, 0});
    while (!q.empty())
    {
        ll v = q.front().ff;
        ll parity = q.front().ss;
        q.pop();
        for (auto u : adj[v])
        {

            if (dst[u][1] > dst[v][0] + 1)
            {
                dst[u][1] = dst[v][0] + 1;
                q.push({u, 1});
            }
            if (dst[u][0] > dst[v][1] + 1)
            {
                dst[u][0] = dst[v][1] + 1;
                q.push({u, 0});
            }
        }
    }
}

void reset(ll n)
{
    for (ll i = 1; i <= n; i++)
    {
        dst[i][0] = dst[i][1] = inf;
        adj[i].clear();
        vis[i] = 0;
    }
    dst[1][0] = 0;
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
        ll n, m, k;
        cin >> n >> m >> k;
        ll a[k + 5];
        for (ll i = 0; i < k; i++)
            cin >> a[i];
        reset(n);
        while (m--)
        {
            ll u, v;
            cin >> u >> v;
            adj[u].eb(v);
            adj[v].eb(u);
        }
        bfs(1);
        sort(a, a + k, greater<ll>());
        ll o = -1;
        for (ll i = 0; i < k; i++)
        {
            sum += a[i];
            if (a[i] & 1)
                o = a[i];
        }
        ll ed = 0, od = 0;
        if (sum & 1)
            od = sum;
        else
            ed = sum;
        if (sum & 1 and o != -1)
            ed = sum - o;
        if (!(sum & 1) and o != -1)
            od = sum - o;
        for (ll i = 1; i <= n; i++)
        {
            if (od >= dst[i][1])
                cout << 1;
            else if (ed >= dst[i][0])
                cout << 1;
            else
                cout << 0;
        }
        cout << nl;
    }
    return SH;
}