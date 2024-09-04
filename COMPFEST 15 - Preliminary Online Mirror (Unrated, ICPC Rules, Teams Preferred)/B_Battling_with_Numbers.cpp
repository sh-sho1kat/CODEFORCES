///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-09-04 17:52:36
 **/

#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define mod 998244353
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

int main()
{
    fastio;
    ll n, m;
    cin >> n;
    ll a[n + 5];
    for (ll i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    map<ll, ll> mpa;
    for (ll i = 1; i <= n; i++)
    {
        ll p;
        cin >> p;
        mpa[a[i]] = p;
    }
    cin >> m;
    ll b[m + 5];
    for (ll i = 1; i <= m; i++)
    {
        cin >> b[i];
    }
    map<ll, ll> mpb;
    for (ll i = 1; i <= m; i++)
    {
        ll p;
        cin >> p;
        mpb[b[i]] = p;
    }
    bool flag = true;
    for (auto u : mpb)
    {
        if (mpa[u.ff] < u.ss)
            flag = false;
    }
    ll ans = 1;
    for (ll i = 1; i <= n; i++)
    {
        if (mpa[a[i]] > mpb[a[i]])
            ans *= 2;
        ans %= mod;
    }
    if (flag)
        cout << ans << nl;
    else
        cout << flag << nl;

    return SH;
}