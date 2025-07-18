#include <bits/stdc++.h>
using namespace std;

// 2025-04-01 11:19:10
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

const ll MxN = 2e5 + 5;
ll Inv[MxN];
ll factorialInv[MxN];
ll factorial[MxN];

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
    if (n < r)
        return 0;
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

        ll n, k;
        cin >> n >> k;
        ll zero = 0, one = 0;
        for (ll i = 1; i <= n; i++)
        {
            ll p;
            cin >> p;
            p ? one++ : zero++;
        }
        for (ll i = (k + 1) / 2; i <= k; i++)
        {
            res += nCr(one, i) * nCr(zero, k - i);
            res %= mod;
        }
        cout << res << nl;
    }
    return SH;
}