/********************************************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************************************/

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-01-31 04:55:05
 **/

#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define mod 998244353
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

int main()
{
    fastio;
    ll w, h;
    cin >> w >> h;
    ll res = (fastpow(2, w % mod) * fastpow(2, h) % mod) % mod;
    cout << res << nl;
    return SH;
}