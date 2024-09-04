///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-12-19 21:05:36
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
        vpll v1, v2, v3;
        for (ll i = 0; i < n; i++)
        {
            ll p;
            cin >> p;
            v1.eb(p, i);
        }
        for (ll i = 0; i < n; i++)
        {
            ll p;
            cin >> p;
            v2.eb(p, i);
        }
        for (ll i = 0; i < n; i++)
        {
            ll p;
            cin >> p;
            v3.eb(p, i);
        }
        sort(v1.begin(), v1.end(), greater<pll>());
        sort(v2.begin(), v2.end(), greater<pll>());
        sort(v3.begin(), v3.end(), greater<pll>());

        for (ll i = 0; i < min((ll)3, n); i++)
        {
            for (ll j = 0; j < min((ll)3, n); j++)
            {
                for (ll k = 0; k < min((ll)3, n); k++)
                {
                    if (v1[i].ss != v2[j].ss && v2[j].ss != v3[k].ss && v3[k].ss != v1[i].ss)
                    {
                        ans = max(ans, v1[i].ff + v2[j].ff + v3[k].ff);
                    }
                }
            }
        }
        cout << ans << nl;
    }
    return SH;
}