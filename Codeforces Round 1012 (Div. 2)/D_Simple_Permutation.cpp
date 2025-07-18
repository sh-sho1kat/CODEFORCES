#include <bits/stdc++.h>
using namespace std;

// 2025-03-24 19:18:46
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

#define prime 1000000
bitset<prime + 5> checker;
set<ll> Primes;

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
    Primes.insert(1);
    Primes.insert(2);
    for (ll i = 3; i <= prime; i += 2)
    {
        if (!checker[i])
            Primes.insert(i);
    }
}

int main()
{
    fastio;
    sieve();
    ll t;
    cin >> t;
    while (t--)
    {
        ll sum = 0, tmp = 0, res = 0, cnt = 0, ct = 0, ans = 0, mn = LONG_MAX, mx = 0;
        bool flag = true, fun = false, f = false;
        ll n;
        cin >> n;
        ll p = n / 2;
        ll prm = *(--Primes.upper_bound(p));
        prm *= 2;
        prm--;
        ll l = 1, r = prm;
        ll freq[n + 5] = {};
        vl v;
        while (l < r)
        {
            v.eb(l);
            v.eb(r);
            freq[l]++;
            freq[r]++;
            l++;
            r--;
        }
        for (ll i = 1; i <= n; i++)
            if (!freq[i])
                v.eb(i);
        for (auto u : v)
            cout << u << " ";
        cout << nl;
    }
    return SH;
}