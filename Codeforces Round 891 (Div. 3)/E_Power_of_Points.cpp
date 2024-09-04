///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-08-10 03:13:11
 **/

#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define mod 1000000007
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
    ll t;
    cin >> t;
    while (t--)
    {
        ll sum = 0, tmp = 0, res = 0, cnt = 0, ct = 0, ans = 0, mn = LONG_MAX, mx = 0;
        bool flag = true, fun = false, f = false;
        ll n;
        cin >> n;
        vpll v;
        for (ll i = 1; i <= n; i++)
        {
            ll p;
            cin >> p;
            v.push_back({p, i});
        }
        sort(all(v));
        ll a[n + 5] = {};
        for (ll i = 1; i <= n; i++)
        {
            a[i] = a[i - 1] + v[i - 1].ff;
        }
        for (ll i = 1; i <= n; i++)
        {
            v[i - 1].ff = a[n] - 2 * a[i] + v[i - 1].ff * (2 * i - n) + n;
        }
        for (ll i = 0; i < n; i++)
        {
            swap(v[i].ff, v[i].ss);
        }
        sort(all(v));
        for (auto u : v)
            cout << u.ss << " ";
        cout << nl;
    }
    return SH;
}