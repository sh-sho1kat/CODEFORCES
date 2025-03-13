#include <bits/stdc++.h>
using namespace std;

// 2025-01-19 22:08:26
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
ll parent[N];
ll Size[N];

void make(int n)
{
    for (ll v = 1; v <= n; v++)
        parent[v] = v, Size[v] = 1;
}

int find(int v)
{
    if (parent[v] == v)
        return v;
    return find(parent[v]);
}

void Union(int a, int b)
{
    a = find(a);
    b = find(b);
    if (a != b)
    {
        if (Size[a] > Size[b])
        {
            parent[b] = a;
            Size[a] += Size[b];
        }
        else
        {
            parent[a] = b;
            Size[b] += Size[a];
        }
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
        ll n, m1, m2;
        cin >> n >> m1 >> m2;
        vpll v1, v2;
        for (ll i = 1; i <= m1; i++)
        {
            ll u, v;
            cin >> u >> v;
            v1.eb({u, v});
        }
        for (ll i = 1; i <= m2; i++)
        {
            ll u, v;
            cin >> u >> v;
            v2.eb({u, v});
        }
        make(n);
        for (ll i = 0; i < m2; i++)
        {
            ll u = v2[i].ff;
            ll v = v2[i].ss;
            Union(u, v);
        }
        for (ll i = 0; i < m1; i++)
        {
            ll u = v1[i].ff;
            ll v = v1[i].ss;
            ll p1 = find(u);
            ll p2 = find(v);
            if (p1 != p2)
            {
                v1[i].ff = 0;
                v1[i].ss = 0;
                res++;
            }
        }
        make(n);
        for (ll i = 0; i < m1; i++)
        {
            ll u = v1[i].ff;
            ll v = v1[i].ss;
            Union(u, v);
        }
        for (ll i = 0; i < m2; i++)
        {
            ll u = v2[i].ff;
            ll v = v2[i].ss;
            ll p1 = find(u);
            ll p2 = find(v);
            if (p1 != p2)
            {
                Union(u, v);
                res++;
            }
        }
        cout << res << nl;
    }
    return SH;
}