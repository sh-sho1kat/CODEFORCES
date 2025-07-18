#include <bits/stdc++.h>
using namespace std;

// 2025-04-04 15:42:29
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define mod 998244353
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

const ll MxN = 5e5 + 5;
ll Inv[MxN];
ll factorialInv[MxN];
ll factorial[MxN];
ll a[30];
ll dp[30][MxN];

ll func(ll pos, ll sum)
{
    if (pos == 27)
    {
        if (!sum)
            return 1;
        return 0;
    }

    if (dp[pos][sum] != -1)
        return dp[pos][sum];

    ll ways = func(pos + 1, sum);
    if (a[pos] and sum >= a[pos])
        ways += func(pos + 1, sum - a[pos]);
    ways %= mod;
    return dp[pos][sum] = ways;
}

void PrecalcInverse()
{
    factorial[0] = 1;
    for (int i = 1; i < MxN; i++)
        factorial[i] = factorial[i - 1] * i % mod;

    Inv[0] = Inv[1] = 1;
    for (ll i = 2; i < MxN; i++)
        Inv[i] = mod - (mod / i) * Inv[mod % i] % mod;

    factorialInv[0] = factorialInv[1] = 1;
    for (ll i = 2; i < MxN; i++)
        factorialInv[i] = Inv[i] * factorialInv[i - 1] % mod;
}

ll nCr(ll n, ll r)
{
    return factorial[n] * factorialInv[r] % mod * factorialInv[n - r] % mod;
}

int main()
{
    fastio;
    PrecalcInverse();
    ll t;
    cin >> t;
    while (t--)
    {
        ll sum = 0, tmp = 0, res = 0, cnt = 0, ct = 0, ans = 0, mn = LONG_MAX, mx = 0;
        bool flag = true, fun = false, f = false;
        for (ll i = 1; i <= 26; i++)
            cin >> a[i], sum += a[i];
        for (ll i = 1; i <= 26; i++)
            for (ll j = 0; j <= sum; j++)
                dp[i][j] = -1;
        res = func(1, sum / 2);
        res *= factorial[sum / 2];
        res %= mod;
        res *= factorial[(sum + 1) / 2];
        res %= mod;
        for (ll i = 1; i <= 26; i++)
        {
            if (a[i])
                res *= factorialInv[a[i]];
            res %= mod;
        }
        cout << res << nl;
    }
    return SH;
}