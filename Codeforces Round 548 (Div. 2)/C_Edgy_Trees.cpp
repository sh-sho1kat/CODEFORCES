#include <bits/stdc++.h>
using namespace std;

// 2024-12-18 18:32:12
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

ll fastpow(ll a, ll b)
{
    long long res = 1;
    while (b)
    {
        if (b & 1)
            (res *= a) %= mod;
        b >>= 1;
        (a *= a) %= mod;
    }
    return res;
}

int main()
{
    fastio;
    ll n, m, k;
    cin >> n >> k;
    m = n - 1;
    make(n);
    while (m--)
    {
        ll u, v, w;
        cin >> u >> v >> w;
        if (!w)
            Union(u, v);
    }
    ll res = fastpow(n, k);
    for (ll i = 1; i <= n; i++)
    {
        if (parent[i] == i)
            res -= fastpow(Size[i], k);
        res += mod;
        res %= mod;
    }
    cout << res << nl;

    return SH;
}