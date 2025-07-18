#include <bits/stdc++.h>
using namespace std;

// 2025-04-14 16:20:52
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
        map<ll, ll> prev;
        pair<ll, ll> dp[n + 5];
        for (ll i = 1; i <= n; i++)
        {
            ll p = dp[prev[a[i]]].ff;
            ll q = dp[prev[a[i]]].ss;
            if (a[i] == a[i - 1])
            {
                dp[i].ff = p + 1;
                dp[i].ss = q;
            }
            else
            {
                ll dst = i - prev[a[i]] - 1;
                if (p < dst or prev[a[i]] == 0)
                {
                    dp[i].ff = 1;
                    dp[i].ss = i;
                }
                else
                {
                    dp[i].ff = p - dst + 1;
                    dp[i].ss = q;
                }
            }
            prev[a[i]] = i;
        }
        ll l = 1, r, val;
        for (ll i = 1; i <= n; i++)
        {
            if (dp[i].ff >= tmp)
            {
                tmp = dp[i].ff;
                val = a[i];
                l = dp[i].ss;
                r = i;
            }
        }
        if (n == 1)
            l = 1, r = 1;
        cout << val << " " << l << " " << r << nl;
    }
    return SH;
}