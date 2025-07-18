#include <bits/stdc++.h>
using namespace std;

// 2025-04-18 03:13:41
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

ll n, k;
ll dp[200005][5];

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

ll func(ll pos, bool all)
{
    if (pos > k)
        return 1;
    ll &res = dp[pos][all];
    if (res != -1)
        return res;
    res = 0;
    if (all)
    {
        res = func(pos + 1, all) * fastpow(2, n);
    }
    else
    {
        if (n & 1)
        {
            res = func(pos + 1, all) * fastpow(2, n - 1);
            res += func(pos + 1, all);
        }
        else
        {
            res = func(pos + 1, all) * (fastpow(2, n - 1) - 1);
            res += func(pos + 1, 1);
        }
    }
    res %= mod;
    return res;
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
        cin >> n >> k;
        for (ll i = 1; i <= k; i++)
            dp[i][0] = dp[i][1] = -1;
        res = func(1, 0);
        cout << res << nl;
    }
    return SH;
}