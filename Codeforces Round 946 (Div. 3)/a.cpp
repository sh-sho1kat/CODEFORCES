#include <bits/stdc++.h>
using namespace std;

// 2025-05-17 15:31:39
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
        ll n, x;
        cin >> n >> x;
        ll c[n + 5] = {};
        ll h[n + 5] = {};
        for (ll i = 1; i <= n; i++)
        {
            cin >> c[i] >> h[i];
            sum += h[i];
        }
        ll dp[n + 5][sum + 5];
        for (ll i = 0; i <= n; i++)
        {
            for (ll j = 0; j <= sum; j++)
                dp[i][j] = inf;
        }
        dp[0][0] = 0;
        for (ll pos = 1; pos <= n; pos++)
        {
            for (ll happiness = 0; happiness <= sum; happiness++)
            {
                // If Not Take
                dp[pos][happiness] = dp[pos - 1][happiness];
                // If Take
                if (happiness >= h[pos] and (pos - 1) * x >= dp[pos - 1][happiness - h[pos]] + c[pos])
                    dp[pos][happiness] = min(dp[pos][happiness], dp[pos - 1][happiness - h[pos]] + c[pos]);
            }
        }
        for (ll i = 0; i <= sum; i++)
            if (dp[n][i] != inf)
                res = max(res, i);
        cout << res << nl;
    }
    return SH;
}