#include <bits/stdc++.h>
using namespace std;

// 2025-05-14 04:35:58
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

ll n;
ll a[5][100005];
ll dp[100005][5];

ll func(ll pos, ll rem)
{
    if (pos > n)
    {
        if (pos == n + 1 and rem == 0)
            return 0;
        return -5 * n;
    }
    if (dp[pos][rem] != -inf)
        return dp[pos][rem];
    ll way1 = 0, way2 = 0, way3 = 0;
    if (rem == 0)
    {
        way1 = func(pos + 3, 0) + (a[1][pos] + a[1][pos + 1] + a[1][pos + 2] >= 2) + (a[2][pos] + a[2][pos + 1] + a[2][pos + 2] >= 2);
        way2 = func(pos + 1, 1) + (a[1][pos] + a[1][pos + 1] + a[2][pos] >= 2);
        way3 = func(pos + 2, 2) + (a[2][pos] + a[2][pos + 1] + a[1][pos] >= 2);
    }
    if (rem == 1)
    {
        way1 = func(pos + 3, 1) + (a[1][pos + 1] + a[1][pos + 2] + a[1][pos + 3] >= 2) + (a[2][pos] + a[2][pos + 1] + a[2][pos + 2] >= 2);
        way2 = func(pos + 2, 0) + (a[1][pos + 1] + a[2][pos] + a[2][pos + 1] >= 2);
    }
    if (rem == 2)
    {
        way1 = func(pos + 3, 2) + (a[1][pos - 1] + a[1][pos] + a[1][pos + 1] >= 2) + (a[2][pos] + a[2][pos + 1] + a[2][pos + 2] >= 2);
        way2 = func(pos + 1, 0) + (a[1][pos - 1] + a[1][pos] + a[2][pos] >= 2);
    }
    return dp[pos][rem] = max({way1, way2, way3});
}

int main()
{
    fastio;
    ll t;
    cin >> t;
    while (t--)
    {
        ll sum = 0, tmp = 0, res = 0, cnt = 0, ct = 0, ans = 0, mn = LONG_MAX, mx = 0;
        bool flag = true, fun = false, f = false;
        cin >> n;
        for (ll i = 1; i <= 2; i++)
        {
            for (ll j = 1; j <= n; j++)
            {
                a[i][j] = 0;
                char ch;
                cin >> ch;
                if (ch == 'A')
                    a[i][j] = 1;
            }
        }
        for (ll i = 1; i <= n; i++)
            dp[i][0] = dp[i][1] = dp[i][2] = -inf;
        res = func(1, 0);
        cout << res << nl;
    }
    return SH;
}