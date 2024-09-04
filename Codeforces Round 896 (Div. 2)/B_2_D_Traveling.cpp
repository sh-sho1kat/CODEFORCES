///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-09-11 14:51:23
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

int main()
{
    fastio;
    ll t;
    cin >> t;
    while (t--)
    {
        ll sum = 0, tmp = 0, res = 0, cnt = 0, ct = 0, ans = 0, mn = LONG_MAX, mx = 0;
        bool flag = true, fun = false, f = false;
        ll n, k, a, b;
        cin >> n >> k >> a >> b;
        vpll v(n + 5);
        for (ll i = 1; i <= n; i++)
        {
            cin >> v[i].ff >> v[i].ss;
        }
        ll mn1 = inf, mn2 = inf;
        for (ll i = 1; i <= k; i++)
        {
            mn1 = min(mn1, ((abs(v[a].ff - v[i].ff)) + (abs(v[a].ss - v[i].ss))));
            mn2 = min(mn2, ((abs(v[b].ff - v[i].ff)) + (abs(v[b].ss - v[i].ss))));
        }
        ans = min(((abs(v[b].ff - v[a].ff)) + abs(v[b].ss - v[a].ss)), (mn1 + mn2));
        // cout << mn1 << " " << mn2 << nl;
        // cout << ((abs(v[b].ff - v[a].ff)) + abs(v[b].ss - v[a].ss)) << nl;
        cout << ans << nl;
    }
    return SH;
}