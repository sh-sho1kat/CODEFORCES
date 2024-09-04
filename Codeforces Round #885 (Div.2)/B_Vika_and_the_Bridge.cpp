#include <bits/stdc++.h>
using namespace std;

// 2024-04-07 16:42:00
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define mod 1000000007
#define inf (1LL << 62)
#define all(x) x.begin(), x.end()
#define eb emplace_back
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
        ll n, k;
        cin >> n >> k;
        ll a[n + 5];
        for (ll i = 1; i <= n; i++)
            cin >> a[i];
        ll prev[n + 5] = {};
        ll mxdst[n + 5] = {};
        ll temp[n + 5] = {};
        ll dst[n + 5] = {};
        for (ll i = 1; i <= n; i++)
        {
            if (i - prev[a[i]] >= mxdst[a[i]])
            {
                mxdst[a[i]] = i - prev[a[i]];
                temp[a[i]] = i;
            }
            prev[a[i]] = i;
        }
        for (ll i = 1; i <= n; i++)
        {
            if (n - prev[i] >= mxdst[i])
            {
                mxdst[i] = n + 1 - prev[i];
                temp[i] = n;
            }
        }
        for (ll i = 1; i <= n; i++)
        {
            dst[i] = (mxdst[i] + 1) / 2;
            prev[i] = 0;
        }

        for (ll i = 1; i <= n; i++)
        {
            if ((i - prev[a[i]] >= dst[a[i]]) and temp[a[i]] != i)
            {
                dst[a[i]] = i - prev[a[i]];
            }
            prev[a[i]] = i;
        }
        for (ll i = 1; i <= n; i++)
        {
            if ((n - prev[i] >= dst[i]) and temp[i] != n)
            {
                dst[i] = n + 1 - prev[i];
            }
        }
        res = inf;
        for (ll i = 1; i <= n; i++)
            res = min(res, dst[i]);

        cout << --res << nl;
    }
    return SH;
}