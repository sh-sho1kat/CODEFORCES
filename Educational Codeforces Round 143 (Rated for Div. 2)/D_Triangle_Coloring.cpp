#include <bits/stdc++.h>
using namespace std;

// 2024-11-05 13:15:53
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

const ll MxN = 3e5 + 5;
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
    return factorial[n] * factorialInv[r] % mod * factorialInv[n - r] % mod;
}

int main()
{
    fastio;
    ll n;
    cin >> n;
    n /= 3;
    ll fact = 1;
    PrecalcInverse();
    for (ll i = 1; i <= n; i++)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        if (a == b and b == c and c == a)
            fact *= 3;
        else if (a == b and c > a)
            fact *= 2;
        else if (b == c and a > b)
            fact *= 2;
        else if (c == a and b > c)
            fact *= 2;
        fact %= mod;
    }
    ll res = nCr(n, n / 2);
    ((res %= mod) *= fact) %= mod;
    cout << res << nl;
    return SH;
}