#include <bits/stdc++.h>
using namespace std;

// 2025-05-26 21:24:07
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
        ll n;
        cin >> n;
        vpll v1, v2;
        for (ll i = 1; i <= n; i++)
        {
            ll a, b;
            cin >> a >> b;
            v1.eb({a, b});
            v2.eb({b, a});
        }
        ll mxa, smxa, mna, smna, mxb, smxb, mnb, smnb;
        sort(all(v1));
        sort(all(v2));
        for (ll i = 0; i < n; i++)
            swap(v2[i].ff, v2[i].ss);

        if (n == 1)
        {
            cout << 1 << nl;
            continue;
        }
        res = inf;
        ll x, y;
        ll area;
        // Right point
        mx = 0, mn = inf;
        for (ll i = 0; i < n - 1; i++)
        {
            mx = max(mx, v1[i].ss);
            mn = min(mn, v1[i].ss);
        }
        x = v1[n - 2].ff - v1[0].ff + 1;
        y = mx - mn + 1;
        area = x * y;
        if (area == n - 1)
        {
            area = (x + 1) * y;
            res = min(res, area);
            area = (x) * (y + 1);
            res = min(res, area);
        }
        else
        {
            area = x * y;
            res = min(res, area);
        }

        // Left
        mx = 0, mn = inf;
        for (ll i = 1; i < n; i++)
        {
            mx = max(mx, v1[i].ss);
            mn = min(mn, v1[i].ss);
        }
        x = v1[n - 1].ff - v1[1].ff + 1;
        y = mx - mn + 1;
        area = x * y;
        if (area == n - 1)
        {
            area = (x + 1) * y;
            res = min(res, area);
            area = (x) * (y + 1);
            res = min(res, area);
        }
        else
        {
            area = x * y;
            res = min(res, area);
        }

        // upper
        mx = 0, mn = inf;
        for (ll i = 0; i < n - 1; i++)
        {
            mx = max(mx, v2[i].ff);
            mn = min(mn, v2[i].ff);
        }

        x = mx - mn + 1;
        y = v2[n - 2].ss - v2[0].ss + 1;
        area = x * y;
        if (area == n - 1)
        {
            area = (x + 1) * y;
            res = min(res, area);
            area = (x) * (y + 1);
            res = min(res, area);
        }
        else
        {
            area = x * y;
            res = min(res, area);
        }

        // // Lower
        mx = 0, mn = inf;
        for (ll i = 1; i < n; i++)
        {
            mx = max(mx, v2[i].ff);
            mn = min(mn, v2[i].ff);
        }

        x = mx - mn + 1;
        y = v2[n - 1].ss - v2[1].ss + 1;
        area = x * y;
        if (area == n - 1)
        {
            area = (x + 1) * y;
            res = min(res, area);
            area = (x) * (y + 1);
            res = min(res, area);
        }
        else
        {
            area = x * y;
            res = min(res, area);
        }

        // cout << x << " " << y << nl;

        cout << res << nl;
    }
    return SH;
}