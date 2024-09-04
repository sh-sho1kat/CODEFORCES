///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-09-25 20:43:19
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
        ll n;
        cin >> n;
        ll a[55][55] = {};
        map<ll, ll> mp, mp2;
        for (ll tt = 1; tt <= n; tt++)
        {
            ll ttt;
            cin >> ttt;
            for (ll i = 1; i <= ttt; i++)
            {
                ll p;
                cin >> p;
                a[tt][p] = 1;
                mp[p]++;
            }
        }

        for (ll i = 1; i <= 50; i++)
        {
            if (mp[i])
            {
                mp2 = mp;
                for (ll j = 1; j <= n; j++)
                {
                    if (a[j][i] == 1)
                    {
                        for (ll k = 1; k <= 50; k++)
                        {
                            if (a[j][k])
                            {
                                mp2[k]--;
                            }
                        }
                    }
                }
                sum = 0;
                for (auto u : mp2)
                {
                    if (u.ss > 0)
                        sum++;
                }
                ans = max(ans, sum);
            }
        }
        cout << ans << nl;
    }
    return SH;
}