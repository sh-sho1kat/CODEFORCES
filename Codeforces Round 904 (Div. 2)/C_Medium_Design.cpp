///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-10-24 22:02:54
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
        ll m, n;
        cin >> m >> n;
        map<ll, string> mp1in, mp1out, mp2in, mp2out;
        vector<pair<ll, string>> v1, v2;
        for (ll i = 1; i <= m; i++)
        {
            ll l, r;
            cin >> l >> r;
            if (l != 1)
            {
                v1.push_back({l, "in"});
                v1.push_back({r, "out"});
            }
            if (r != n)
            {
                v2.push_back({l, "in"});
                v2.push_back({r, "out"});
            }
        }
        sort(v1.begin(), v1.end());
        for (auto u : v1)
        {
            if (u.ss == "in")
                cnt++;
            ans = max(ans, cnt);
            if (u.ss == "out")
                cnt--;
        }

        sort(v2.begin(), v2.end());
        cnt = 0;
        for (auto u : v2)
        {
            if (u.ss == "in")
                cnt++;
            ans = max(ans, cnt);
            if (u.ss == "out")
                cnt--;
        }
        cout << ans << nl;
    }
    return SH;
}