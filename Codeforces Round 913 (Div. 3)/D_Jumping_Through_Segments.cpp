///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-12-11 16:52:15
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
        vpll v(n);
        ll l = inf, r = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i].ff >> v[i].ss;
            l = min(l, v[i].ff);
            r = max(r, v[i].ss);
        }
        while (l <= r)
        {
            ll k = (l + r) / 2;
            ll x = 0, y = 0;
            for (auto u : v)
            {
                x = max(x - k, u.ff);
                y = min(y + k, u.ss);
                if (x > y)
                    break;
            }
            if (x <= y)
            {
                ans = k;
                r = k - 1;
            }
            else
            {
                l = k + 1;
            }
        }
        cout << ans << nl;
    }
    return SH;
}