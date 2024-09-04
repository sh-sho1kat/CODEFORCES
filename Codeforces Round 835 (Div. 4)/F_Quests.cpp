///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2024-02-25 01:44:11
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
        ll n, c, d;
        cin >> n >> c >> d;
        ll a[n + 5] = {};
        for (ll i = 1; i <= n; i++)
            cin >> a[i];
        sort(a + 1, a + n + 1, greater<ll>());
        if (a[1] * d < c)
        {
            cout << "Impossible" << nl;
            continue;
        }
        for (ll i = 1; i <= n; i++)
            a[i] += a[i - 1];
        ll low = 0, high = d + 1;
        while (low < high)
        {
            ll mid = high - (high - low) / 2;
            mn = min(mid + 1, n);
            ll remain = c % a[mn];
            ll day;
            if (remain == 0)
            {
                remain = a[mn];
                day = ((c / a[mn]) - 1) * (mid + 1);
            }
            else
                day = (c / a[mn]) * (mid + 1);
            tmp = 0;
            for (ll i = 0; i <= n; i++)
            {
                tmp = i;
                if (remain <= a[i])
                    break;
            }
            // cout << mid << " " << mn << " " << remain << " " << day << " " << tmp << nl;
            day += tmp;
            if (day <= d)
            {
                ans = mid;
                low = mid;
            }
            else
            {
                high = mid - 1;
            }
        }
        if (ans == d + 1)
            cout << "Infinity" << nl;
        else
            cout << ans << nl;
    }
    return SH;
}