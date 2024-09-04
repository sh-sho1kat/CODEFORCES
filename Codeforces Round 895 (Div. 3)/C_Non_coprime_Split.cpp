///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-09-24 00:47:14
 **/

#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define mod 1000000007
#define inf 1e18
#define all(x) x.begin(), x.end()
#define eb emplace_back
#define ff first
#define ss second
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define dtob(p, n) bitset<p>(n).to_string()
#define btod(bin) stoi(bin, nullptr, 2)
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
    sieve();
    fastio;
    ll t;
    cin >> t;
    while (t--)
    {
        ll sum = 0, tmp = 0, res = 0, cnt = 0, ct = 0, ans = 0, mn = LONG_MAX, mx = 0;
        bool flag = true, fun = false, f = false;
        ll a, b;
        cin >> a >> b;
        if (b <= 3)
            cout << -1 << nl;
        else if ((a == b) && (!a & 1))
            cout << a / 2 << " " << a / 2 << nl;
        else if (a == b)
        {
            f = 1;
            for (ll i = 2; i * i < a; i++)
            {
                if ((__gcd(i, (a - i)) != 1) && (i != 1) && (b - i != 1))
                {
                    cout << i << " " << b - i << nl;
                    f = false;
                    break;
                }
            }
            if (f)
                cout << -1 << nl;
        }
        else if (b & 1)
            cout << (b - 1) / 2 << " " << (b - 1) / 2 << nl;
        else if (!(b & 1))
            cout << b / 2 << " " << b / 2 << nl;
    }
    return SH;
}