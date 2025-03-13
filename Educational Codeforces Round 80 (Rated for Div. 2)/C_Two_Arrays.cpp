#include <bits/stdc++.h>
using namespace std;

// 2024-09-29 03:20:50
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

ll n, m;
ll dp[1001][1001][11][2];

ll ways(ll asc, ll dsc, ll pos, ll taken)
{
    ll way1 = 0, way2 = 0, way3 = 0, way4 = 0, way5 = 0, way6 = 0, way7 = 0;
    if (pos == m)
        return 1;
    if (pos > m)
        return 0;
    if (dp[asc][dsc][pos][taken] != -1)
        return dp[asc][dsc][pos][taken];
    if (asc <= n and dsc >= 1 and asc <= dsc and !taken)
        way1 = ways(asc, dsc, pos + 1, 0);
    if (asc < n and dsc >= 1 and asc < dsc)
    {
        way2 = ways(asc + 1, dsc, pos + 1, 0);
        way3 = ways(asc + 1, dsc, pos, 1);
    }
    if (asc <= n and dsc > 1 and asc < dsc)
    {
        way4 = ways(asc, dsc - 1, pos + 1, 0);
        way5 = ways(asc, dsc - 1, pos, 1);
    }
    if (asc < n and dsc > 1 and asc + 1 < dsc)
    {
        way6 = ways(asc + 1, dsc - 1, pos + 1, 0);
        way7 = ways(asc + 1, dsc - 1, pos, 1);
    }

    ll way = way1 + way2 + way3 + way4 + way5 + way6 + way7;
    way %= mod;
    return dp[asc][dsc][pos][taken] = way;
}

ll egcd(ll a, ll b, ll &x, ll &y)
{
    if (b == 0)
    {
        x = 1;
        y = 0;
        return a;
    }
    ll x1, y1;
    ll d = egcd(b, a % b, x1, y1);
    x = y1;
    y = x1 - y1 * (a / b);
    return d;
}

ll modInv(ll a, ll m)
{
    ll x, y;
    ll gcd = egcd(a, m, x, y);
    return (x % m + m) % m;
}

ll calculate(ll n, ll m)
{
    ll fact1 = 1, fact2 = 1;
    for (ll i = 1; i <= n + m - 1; i++)
    {
        fact1 *= i;
        fact1 %= mod;
    }
    for (ll i = 1; i <= m; i++)
    {
        fact2 *= i;
        fact2 %= mod;
    }
    for (ll i = 1; i < n; i++)
    {
        fact2 *= i;
        fact2 %= mod;
    }
    ll fact = (fact1 * modInv(fact2, mod)) % mod;
    return fact;
}

int main()
{
    fastio;
    cin >> n >> m;
    // memset(dp, -1, sizeof(dp));
    // ll res = ways(1, n, 0, 0);
    // cout << res << nl;
    m *= 2;
    ll res = calculate(n, m);
    cout << res << nl;
    return SH;
}
