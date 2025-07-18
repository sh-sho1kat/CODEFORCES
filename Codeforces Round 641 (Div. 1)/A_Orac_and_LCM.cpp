#include <bits/stdc++.h>
using namespace std;

// 2025-03-17 01:41:29
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

int main()
{
    fastio;
    ll n;
    cin >> n;
    ll a[n + 5];
    for (ll i = 1; i <= n; i++)
        cin >> a[i];
    ll pref[n + 5] = {};
    ll suf[n + 5] = {};
    ll res = 0;
    for (ll i = 1; i <= n; i++)
        res = __gcd(a[i], res);
    for (ll i = 1; i <= n; i++)
        a[i] /= res;
    for (ll i = 1; i <= n; i++)
        pref[i] = __gcd(pref[i - 1], a[i]);
    for (ll i = n; i >= 1; i--)
        suf[i] = __gcd(suf[i + 1], a[i]);
    for (ll i = 1; i <= n; i++)
    {
        ll gc = __gcd(pref[i - 1], suf[i + 1]);
        if (gc)
            res *= gc;
    }
    cout << res << nl;

    return SH;
}