#include <bits/stdc++.h>
using namespace std;

// 2024-10-03 23:36:21
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

ll dp[20][20][5];

ll func(string s, ll pos, ll nonzero, bool f)
{
    if (nonzero > 3)
        return 0;
    if (pos == s.size())
        return 1;
    if (dp[pos][nonzero][f] != -1)
        return dp[pos][nonzero][f];
    ll res = 0;
    if (f)
    {
        res += func(s, pos + 1, nonzero, f);
        res += 9 * func(s, pos + 1, nonzero + 1, f);
    }
    else
    {
        ll mx = s[pos] - '0';
        if (s[pos] == '0')
            res += func(s, pos + 1, nonzero, f);
        else
        {
            res += func(s, pos + 1, nonzero + 1, f);
            res += (mx - 1) * func(s, pos + 1, nonzero + 1, 1);
            res += func(s, pos + 1, nonzero, 1);
        }
    }
    return dp[pos][nonzero][f] = res;
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
        ll l, r;
        cin >> l >> r;
        memset(dp, -1, sizeof(dp));
        ll res1 = func(to_string(r), 0, 0, 0);
        memset(dp, -1, sizeof(dp));
        ll res2 = func(to_string(l - 1), 0, 0, 0);
        cout << res1 - res2 << nl;
    }
    return SH;
}