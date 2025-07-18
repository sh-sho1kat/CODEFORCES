#include <bits/stdc++.h>
using namespace std;

// 2025-06-17 20:49:45
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
        ll r, c;
        cin >> r >> c;
        ll a[r + 5][c + 5];
        ll rdp[r + 5] = {};
        ll cdp[c + 5] = {};

        for (ll i = 1; i <= r; i++)
            for (ll j = 1; j <= c; j++)
                cin >> a[i][j];

        ll maxima = 0;
        ll total = 0;
        for (ll i = 1; i <= r; i++)
            for (ll j = 1; j <= c; j++)
                maxima = max(maxima, a[i][j]);

        for (ll i = 1; i <= r; i++)
        {
            cnt = 0;
            for (ll j = 1; j <= c; j++)
            {
                if (a[i][j] == maxima)
                    cnt++, total++;
            }
            rdp[i] = cnt;
        }
        for (ll i = 1; i <= c; i++)
        {
            cnt = 0;
            for (ll j = 1; j <= r; j++)
            {
                if (a[j][i] == maxima)
                    cnt++;
            }
            cdp[i] = cnt;
        }
        res = maxima;
        for (ll i = 1; i <= r; i++)
        {
            for (ll j = 1; j <= c; j++)
            {
                cnt = rdp[i] + cdp[j];
                if (a[i][j] == maxima)
                    cnt--;
                if (cnt == total)
                {
                    res--;
                    total = inf;
                }
            }
        }
        cout << res << nl;
    }
    return SH;
}