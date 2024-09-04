///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-11-26 21:29:09
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

const ll N = 3e5 + 5;
vl adj[N];
bool vis[N];
ll par[N];
ll dp[N];
string s;

ll dfs(ll vertex)
{
    ll left_child = adj[vertex][0];
    ll right_child = adj[vertex][1];
    if (left_child == 0 && right_child == 0)
    {
        dp[vertex] = 0;
        return dp[vertex];
    }
    if (dp[vertex] != -1)
        return dp[vertex];
    ll cnt1 = inf, cnt2 = inf;
    if (left_child)
    {
        cnt1 = dfs(left_child);
        if (s[vertex] != 'L')
            cnt1++;
    }
    if (right_child)
    {
        cnt2 = dfs(right_child);
        if (s[vertex] != 'R')
            cnt2++;
    }
    return dp[vertex] = min(cnt1, cnt2);
}

void reset(ll n)
{
    for (ll i = 1; i <= n; i++)
    {
        adj[i].clear();
        vis[i] = 0;
        par[i] = 0;
        dp[i] = -1;
    }
    s.clear();
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
        string p;
        cin >> p;
        s.push_back('.');
        s += p;
        reset(n);
        for (ll i = 1; i <= n; i++)
        {
            ll u, v;
            cin >> u >> v;
            adj[i].eb(u);
            adj[i].eb(v);
        }
        ans = dfs(1);
        cout << ans << nl;
    }
    return SH;
}