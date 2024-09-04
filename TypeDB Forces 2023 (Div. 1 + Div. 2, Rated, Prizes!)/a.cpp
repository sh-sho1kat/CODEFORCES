/**                        بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ
 *
 *
 *
 *     title : a.cpp
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-01-30 02:27:41
 **/
#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define mod 1000000007
#define all(x) x.begin(), x.end()
#define eb emplace_back
#define pf push_front
#define MP make_pair
#define ff first
#define ss second
#define fr(s, n) for (ll i = s; i < n; i++)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define nl '\n'
#define SH 0
typedef long long ll;
typedef pair<ll, ll> pll;
typedef vector<ll> vl;
typedef vector<pll> vpll;

#define ok cout << "Eureka" << nl
#define ap(arr, n)             \
    for (ll i = 0; i < n; i++) \
        cout << arr[i] << " "; \
    cout << nl;

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
long long expo(long long n, long long x, long long m)
{
    long long ret = 1;
    while (x)
    {
        if (x & 1)
            (ret *= n) %= m;
        x >>= 1;
        (n *= n) %= m;
    }
    return ret;
}

#define prime 100000
bitset<prime + 5> checker;
vector<ll> Primes;

void sieve()
{
    for (ll i = 3; i * i <= prime; i += 2)
    {
        if (!checker[i])
        {
            for (ll j = i * i; j <= prime; j += 2 * i)
            {
                checker[j] = 1;
            }
        }
    }
    Primes.eb(2);
    for (ll i = 3; i <= prime; i += 2)
    {
        if (!checker[i])
            Primes.eb(i);
    }
}

vector<long long> trial_division1(long long n)
{
    vector<long long> factorization;
    for (long long d = 2; d * d <= n; d++)
    {
        while (n % d == 0)
        {
            factorization.push_back(d);
            n /= d;
        }
    }
    if (n > 1)
        factorization.push_back(n);
    return factorization;
}

vector<pair<ll, ll>> factory(ll x)
{
    vector<pair<ll, ll>> pri;
    for (ll i = 2; i * i <= x; ++i)
        if (x % i == 0)
        {
            int t = 0;
            while (x % i == 0)
                x /= i, t++;
            pri.push_back({i, t});
        }
    if (x > 1)
        pri.push_back({x, 1});
    return pri;
}
vector<long long> primes;

map<ll, ll> factor(ll n)
{
    ll cnt = 0;
    map<ll, ll> factorization;
    for (auto d : Primes)
    {
        if (d * d > n)
            break;
        while (n % d == 0)
        {
            cnt++;
            n /= d;
        }
        factorization[d] = cnt;
        cnt = 0;
    }
    if (n > 1)
        factorization[n] = 1;
    return factorization;
}

int main()
{
    fastio;
    ll n;
    cin >> n;
    sieve();
    // for (auto u : Primes)
    // {
    //     cout << u << " ";
    // }
    cout << fastpow(3, 11) << nl;
    ll res = pow(3, 11);
    cout << res << nl;
    map<ll, ll> mp = factor(n);
    for (auto u : mp)
    {
        cout << u.ff << " " << u.ss << nl;
    }
    cout << setbase(10) << 1010;

    return SH;
}