///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-07-21 21:07:31
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
        ll n, c;
        cin >> n >> c;
        ll a[n + 5];
        ll sqsum = 0, jsum = 0;
        for (ll i = 0; i < n; i++)
        {
            ll p;
            cin >> p;
            sqsum += p * p;
            jsum += p;
        }
        long double area = 0;

        ll w = 0;
        ll l = 0, r = 1e9;
        c -= sqsum;
        while (l <= r)
        {
            w = (l + r) / 2;
            ll tmparea = c / w;
            area = 2 * jsum + n * w;
            if (area > tmparea)
            {
                r = w - 1;
            }
            else if (area < tmparea)
            {
                l = w + 1;
            }
            else
            {
                ans = w;
                break;
            }
        }
        cout << ans / 2 << nl;
    }
    return SH;
}