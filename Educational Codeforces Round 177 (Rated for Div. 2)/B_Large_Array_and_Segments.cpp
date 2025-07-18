#include <bits/stdc++.h>
using namespace std;

// 2025-04-03 20:45:37
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define mod 1000000007
#define inf (1LL << 62)
#define all(x) x.begin(), x.end()
#define eb push_back
#define ff first
#define ss second
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
#define dtob(bits, n) bitset<bits>(n).to_string()
#define btod(bin) stoll(bin, nullptr, 2)
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
        ll n, k, x;
        cin >> n >> k >> x;
        ll a[n + 5];
        ll pref[n + 5] = {};
        for (ll i = 1; i <= n; i++)
            cin >> a[i], sum += a[i], pref[i] = sum;
        ll total = sum * k;

        ll lo = 1, hi = n * k;
        while (lo <= hi)
        {
            ll mid = (hi + lo) >> 1;
            ll p = mid / n;
            ll q = mid % n;
            if (q == 0)
            {
                p--;
                q = n;
            }
            ll csum = p * sum;
            csum += pref[q - 1];
            ll rem = total - csum;
            if (rem >= x)
            {
                res = mid;
                lo = mid + 1;
            }
            else
            {
                hi = mid - 1;
            }
        }
        cout << res << nl;
    }
    return SH;
}