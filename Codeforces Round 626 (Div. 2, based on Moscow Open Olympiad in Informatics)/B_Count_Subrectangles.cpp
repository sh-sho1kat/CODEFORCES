#include <bits/stdc++.h>
using namespace std;

// 2024-12-15 00:43:56
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

int main()
{
    fastio;
    ll n, m, k;
    cin >> n >> m >> k;
    ll a[n + 5] = {};
    ll b[m + 5] = {};
    for (ll i = 1; i <= n; i++)
        cin >> a[i], a[i] += a[i - 1];
    for (ll i = 1; i <= m; i++)
        cin >> b[i], b[i] += b[i - 1];
    vpll v;
    for (ll i = 1; i * i <= k; i++)
    {
        if (!(k % i))
        {
            v.eb({i, k / i});
            if (i * i != k)
                v.eb({k / i, i});
        }
    }
    ll res = 0;
    for (auto u : v)
    {
        ll c1 = 0, c2 = 0;
        for (ll i = 1; i <= n; i++)
        {
            if (i + u.ff - 1 > n)
                break;
            if (a[i + u.ff - 1] - a[i - 1] == u.ff)
            {
                c1++;
            }
        }
        for (ll i = 1; i <= m; i++)
        {
            if (i + u.ss - 1 > m)
                break;
            if (b[i + u.ss - 1] - b[i - 1] == u.ss)
            {
                c2++;
            }
        }
        res += c1 * c2;
    }
    cout << res << nl;

    return SH;
}