#include <bits/stdc++.h>
using namespace std;

// 2024-11-17 01:29:13
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

const ll N = 5e5 + 5;
ll parent[N];
ll Size[N];
ll maxima[N];
ll ar[N];

void make(int n)
{
    for (ll v = 1; v <= n; v++)
        parent[v] = v, Size[v] = 1, maxima[v] = ar[v];
}

int find(int v)
{
    if (parent[v] == v)
        return v;
    return parent[v] = find(parent[v]);
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
            maxima[a] = max(maxima[a], maxima[b]);
        }
        else
        {
            parent[a] = b;
            Size[b] += Size[a];
            maxima[b] = max(maxima[a], maxima[b]);
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
        ll n;
        cin >> n;
        for (ll i = 1; i <= n; i++)
            cin >> ar[i];
        ll mxa[n + 5];
        for (ll i = 1; i <= n; i++)
            mx = max(ar[i], mx), mxa[i] = mx;
        ll mna[n + 5];
        for (ll i = n; i >= 1; i--)
            mn = min(mn, ar[i]), mna[i] = mn;
        make(n);
        for (ll i = n - 1; i >= 1; i--)
        {
            if (mxa[i] > mna[i + 1])
            {
                 Union(i, i + 1);
            }
        }
        for (ll i = 1; i <= n; i++)
            cout << maxima[parent[i]] << " ";
        cout << nl;
    }
    return SH;
}