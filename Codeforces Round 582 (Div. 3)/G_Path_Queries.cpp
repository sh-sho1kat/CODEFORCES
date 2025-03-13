#include <bits/stdc++.h>
using namespace std;

// 2024-10-19 03:33:35
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

ll calc(ll n)
{
    return (Size[n] * (Size[n] - 1) / 2);
}

int main()
{
    fastio;
    ll n, m;
    cin >> n >> m;
    make(n);
    set<pair<ll, pll>> edges;
    for (ll i = 1; i < n; i++)
    {
        ll u, v, w;
        cin >> u >> v >> w;
        edges.insert({w, {u, v}});
    }
    vpll query;
    for (ll i = 1; i <= m; i++)
    {
        ll q;
        cin >> q;
        query.push_back({q, i});
    }
    sort(all(query));
    vpll v;
    ll res = 0;
    for (auto u : query)
    {
        while (edges.size())
        {
            auto p = *edges.begin();
            if (p.ff <= u.ff)
            {
                ll a = find(p.ss.ff);
                ll b = find(p.ss.ss);
                res -= calc(a);
                res -= calc(b);
                Union(p.ss.ff, p.ss.ss);
                ll c = find(p.ss.ff);
                res += calc(c);
                edges.erase(edges.begin());
            }
            else
                break;
        }
        v.eb({u.ss, res});
    }
    sort(all(v));
    for (auto u : v)
        cout << u.ss << " ";
    cout << nl;

    return SH;
}