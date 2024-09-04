/**                        بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ
 *
 *
 *
 *     title : B_Number_Factorization.cpp
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-01-29 21:14:05
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

#define prime 10000
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
map<ll, ll> factor(ll n)
{
    map<ll, ll> factorization;
    for (auto p : Primes)
    {
        if (p * p > n)
            break;
        while (n % p == 0)
        {
            factorization[p]++;
            n /= p;
        }
    }
    if (n > 1)
        factorization[n] = 1;
    return factorization;
}
int main()
{
    sieve();
    fastio;
    ll t;
    cin >> t;
    while (t--)
    {
        ll sum = 0, tmp = 0, res = 0, cnt = 0, count = 0, ans = 0;
        bool flag = true, fun = false;
        ll n;
        cin >> n;
        ll p = 0;
        map<ll, ll> fact = factor(n);
        ll mx = 0;
        for (auto u : fact)
        {
            mx = max(mx, u.ss);
        }
        ll ssum = 0, ffact = 1;
        for (ll i = 0; i < mx; i++)
        {
            for (auto u : fact)
            {
                if (u.ss)
                {
                    ffact *= u.ff;
                    fact[u.ff]--;
                }
            }
            ssum += ffact;
            ffact = 1;
        }
        cout << ssum << nl;
    }
    return SH;
}