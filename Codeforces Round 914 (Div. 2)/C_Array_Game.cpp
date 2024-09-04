///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-12-26 12:19:51
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
        ll n, k;
        cin >> n >> k;
        ll a[n + 5];
        vl v;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            // v.eb(a[i]);
        }
        sort(a, a + n);
        for (ll i = 0; i < n; i++)
        {
            for (ll j = i + 1; j < n; j++)
            {
                v.eb(a[j] - a[i]);
            }
        }
        sort(v.begin(), v.end());
        ans = min(a[0], v[0]);
        if (k == 1)
        {
            cout << ans << nl;
            continue;
        }
        if (k >= 3)
        {
            cout << 0 << nl;
            continue;
        }
        for (ll i = 0; i < n; i++)
        {
            ll idx = lower_bound(v.begin(), v.end(), a[i]) - v.begin();
            if (idx != v.size())
                ans = min(ans, abs(v[idx] - a[i]));
            if (idx >= 1)
                ans = ans = min(ans, abs(v[idx - 1] - a[i]));
        }
        cout << ans << nl;
    }
    return SH;
}