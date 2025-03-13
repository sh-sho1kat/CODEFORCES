#include <bits/stdc++.h>
using namespace std;

// 2024-11-10 22:55:29
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
        ll n, m, v;
        cin >> n >> m >> v;
        ll a[n + 5] = {};
        for (ll i = 1; i <= n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        ll pre[n + 5] = {};
        ll suf[n + 5] = {};
        ll presum[n + 5] = {};
        ll ssum[n + 5] = {};
        for (ll i = 1; i <= n; i++)
            presum[i] += presum[i - 1] + a[i];
        for (ll i = n; i >= 1; i--)
            ssum[n - i + 1] += ssum[n - i] + a[i];

        for (ll i = 1; i <= n; i++)
        {
            tmp += a[i];
            pre[i] = pre[i - 1];
            if (tmp >= v)
            {
                tmp = 0;
                cnt++;
                pre[i] = cnt;
            }
        }
        tmp = 0, cnt = 0;
        for (ll i = n; i >= 1; i--)
        {
            tmp += a[i];
            if (tmp >= v)
            {
                tmp = 0;
                cnt++;
                suf[cnt] = n - i + 1;
            }
        }
        res = -1;
        for (ll i = 0; i <= n; i++)
        {
            ll lc = pre[i];
            ll need = m - lc;
            if (need < 0 or lc > m or cnt<m)
                break;
            res = max(res, (sum - presum[i] - ssum[suf[need]]));
        }
        cout << res << nl;
    }
    return SH;
}