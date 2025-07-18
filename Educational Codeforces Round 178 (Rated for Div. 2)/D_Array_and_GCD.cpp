#include <bits/stdc++.h>
using namespace std;

// 2025-04-28 15:31:30
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

#define prime 7000000
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
    sieve();
    ll t;
    cin >> t;
    while (t--)
    {
        ll sum = 0, tmp = 0, res = 0, cnt = 0, ct = 0, ans = 0, mn = LONG_MAX, mx = 0;
        bool flag = true, fun = false, f = false;
        ll n;
        cin >> n;
        ll a[n + 5];
        for (ll i = 1; i <= n; i++)
            cin >> a[i];
        sort(a + 1, a + n + 1);
        ll j = 0;
        for (ll i = n; i >= 1; i--)
        {
            if (a[i] > Primes[j])
            {
                tmp += a[i] - Primes[j];
            }
            else
            {
                if (tmp >= (Primes[j] - a[i]))
                    tmp -= (Primes[j] - a[i]);
                else
                {
                    res = i;
                    break;
                }
            }
            j++;
        }
        cout << res << nl;
    }
    return SH;
}