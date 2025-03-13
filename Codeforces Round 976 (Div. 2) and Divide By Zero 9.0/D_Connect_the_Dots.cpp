#include <bits/stdc++.h>
using namespace std;

// 2024-10-01 03:02:53
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define mod 1000000007
#define inf (1LL << 62)
#define all(x) x.begin(), x.end()
#define eb emplace_back
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

ll parent[200005];
ll sz[200005];

void make_set(int v)
{
    parent[v] = v;
    sz[v] = 1;
}

int find_set(int v)
{
    if (v == parent[v])
        return v;
    return parent[v] = find_set(parent[v]);
}

void union_sets(int a, int b)
{
    a = find_set(a);
    b = find_set(b);
    if (a != b)
    {
        if (sz[a] < sz[b])
            swap(a, b);
        parent[b] = a;
        sz[a] += sz[b];
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
        ll n, m;
        cin >> n >> m;
        for (ll i = 1; i <= n; i++)
            make_set(i);
        vpll v[15][15];
        for (ll i = 1; i <= m; i++)
        {
            ll a, d, k;
            cin >> a >> d >> k;
            ll p = a + d * k;
            v[d][a % d].push_back({a, p});
        }
        for (ll i = 1; i <= 10; i++)
        {
            for (ll j = 0; j <= 10; j++)
            {
                ll arr1[n + 5] = {};
                ll arr2[n + 5] = {};
                for (auto u : v[i][j])
                {
                    arr1[u.ff]++;
                    arr2[u.ss]++;
                }
                sum = 0;
                tmp = -1;
                for (ll k = 1; k <= n; k++)
                {
                    if (arr1[k])
                        sum += arr1[k];
                    if (sum and k % i == j)
                    {
                        if (tmp == -1)
                            tmp = k;
                        union_sets(tmp, k);
                    }

                    if (arr2[k])
                        sum -= arr2[k];
                    if (sum <= 0)
                        tmp = -1;
                }
            }
        }
        for (ll i = 1; i <= n; i++)
            if (parent[i] == i)
                res++;
        cout << res << nl;
    }
    return SH;
}