#include <bits/stdc++.h>
using namespace std;

// 2025-07-01 22:49:57
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

int main()
{
    fastio;
    ll t;
    cin >> t;
    sieve();
    while (t--)
    {
        ll sum = 0, tmp = 0, res = 0, cnt = 0, ct = 0, ans = 0, mn = LONG_MAX, mx = 0;
        bool flag = true, fun = false, f = false;
        ll n;
        cin >> n;
        ll a[n + 5] = {};
        a[1] = 1;
        for (ll i = Primes.size() - 1; i >= 0; i--)
        {
            ll p = Primes[i];
            if (p > n)
                continue;
            if (p * 2 > n)
            {
                a[p] = p;
                continue;
            }
            vl v;
            ll prev = p;
            for (ll j = p + p; j <= n; j += p)
            {
                if (!a[j])
                {
                    a[j] = prev;
                    prev = j;
                }
            }
            a[p] = prev;
        }

        for (ll i = 1; i <= n; i++)
            cout << a[i] << ' ';
        cout << nl;
    }
    return SH;
}