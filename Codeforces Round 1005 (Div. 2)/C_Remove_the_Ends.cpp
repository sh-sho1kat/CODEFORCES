#include <bits/stdc++.h>
using namespace std;

// 2025-02-16 21:21:53
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
        ll a[n + 5];
        for (ll i = 1; i <= n; i++)
            cin >> a[i];
        vl v;
        ll pos = 0;
        if (a[1] >= 0)
            pos = 1;
        for (ll i = 1; i <= n; i++)
        {
            if (pos)
            {
                if (a[i] >= 0)
                {
                    sum += a[i];
                }
                else
                {
                    pos = 0;
                    v.eb(sum);
                    sum = a[i];
                }
            }
            else
            {
                if (a[i] < 0)
                {
                    sum += a[i];
                }
                else
                {
                    pos = 1;
                    v.eb(sum);
                    sum = a[i];
                }
            }
        }
        v.eb(sum);
        ll len = v.size();
        ll presum[len + 5] = {};
        ll ssum[len + 5] = {};
        for (ll i = 0; i < len; i++)
        {
            if (v[i] >= 0)
                presum[i] = v[i];
            else
                ssum[i] = v[i];
        }
        for (ll i = 1; i < len; i++)
            presum[i] += presum[i - 1];
        for (ll i = len - 2; i >= 0; i--)
            ssum[i] += ssum[i + 1];

        for (ll i = 0; i < v.size(); i++)
        {
            res = max(res, presum[i] - ssum[i]);
        }
        cout << res << nl;
    }
    return SH;
}