#include <bits/stdc++.h>
using namespace std;

// 2024-12-11 21:04:35
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
    for (ll v = 0; v <= n; v++)
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
        ll n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        make(n);
        for (ll i = 0; i < s.size(); i++)
        {
            Union(i % k, i);
            Union((n - i - 1), i % k);
        }
        vector<map<char, ll>> v(n);
        for (ll i = 0; i < n; i++)
        {
            v[find(parent[i])][s[i]]++;
        }
        for (ll i = 0; i < n; i++)
        {
            mx = 0;
            cnt = 0;
            for (auto u : v[i])
            {
                mx = max(mx, u.ss);
                cnt += u.ss;
            }
            res += (cnt - mx);
        }
        cout << res << nl;
    }
    return SH;
}