///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2024-03-15 17:40:47
 **/

#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define mod 1000000007
#define inf (1LL << 62)
#define all(x) x.begin(), x.end()
#define eb emplace_back
#define ff first
#define ss second
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define dtob(bits, n) bitset<bits>(n).to_string()
#define btod(bin) stoll(bin, nullptr, 2)
#define ok cout << "Eureka" << nl
#define nl '\n'
#define SH 0
typedef long long ll;
typedef pair<ll, ll> pll;
typedef vector<ll> vl;
typedef vector<pll> vpll;

double fastpow(double a, ll b)
{
    double res = 1.0;
    while (b)
    {
        if (b & 1)
            (res *= a);
        b >>= 1;
        (a *= a);
    }
    return res;
}

int main()
{
    fastio;
    ll m, n;
    cin >> m >> n;
    double sum = 0;
    for (ll i = 1; i <= m; i++)
    {
        sum += i * (fastpow((i * 1.0 / m), n) - fastpow(((i - 1.0) / m), n));
    }
    cout << fixed << setprecision(12) << sum << nl;
    return SH;
}