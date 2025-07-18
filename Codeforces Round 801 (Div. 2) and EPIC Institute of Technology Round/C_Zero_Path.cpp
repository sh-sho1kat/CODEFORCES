#include <bits/stdc++.h>
using namespace std;

// 2025-04-21 16:48:55
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
        ll n, m;
        cin >> n >> m;
        ll a[n + 5][m + 5];
        for (ll i = 1; i <= n; i++)
            for (ll j = 1; j <= m; j++)
                cin >> a[i][j];

        ll dp[n + 5][m + 5] = {};

        dp[0][0] = 0;
        for (ll i = 1; i <= n; i++)
            dp[i][1] = a[i][1], dp[i][1] += dp[i - 1][1];
        for (ll i = 1; i <= m; i++)
            dp[1][i] = a[1][i], dp[1][i] += dp[1][i - 1];

        for (ll i = 2; i <= n; i++)
            for (ll j = 2; j <= m; j++)
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]) + a[i][j];
        mx = dp[n][m];

        dp[0][0] = 0;
        for (ll i = 1; i <= n; i++)
            dp[i][1] = a[i][1], dp[i][1] += dp[i - 1][1];
        for (ll i = 1; i <= m; i++)
            dp[1][i] = a[1][i], dp[1][i] += dp[1][i - 1];

        for (ll i = 2; i <= n; i++)
            for (ll j = 2; j <= m; j++)
                dp[i][j] = min(dp[i - 1][j], dp[i][j - 1]) + a[i][j];
        mn = dp[n][m];

        if (((m + n + 1) & 1) or mn > 0 or mx < 0)
            no;
        else
            yes;
    }
    return SH;
}