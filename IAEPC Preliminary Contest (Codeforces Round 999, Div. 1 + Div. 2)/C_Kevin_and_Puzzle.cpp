#include <bits/stdc++.h>
using namespace std;

// 2025-01-20 22:48:47
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define mod 998244353
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
ll a[200005];
ll dp[2000010][5];
ll func(ll pos, bool flag)
{
    ll res = 0;
    if (pos > n)
    {
        return 1;
    }
    if (dp[pos][flag] != -1)
        return dp[pos][flag];
    if (flag)
    {
        if (a[pos] == a[pos - 2] + 1)
            res += func(pos + 1, 0);
        else
            return 0;
    }
    else
    {
        if (a[pos] != a[pos - 1])
            res += func(pos + 1, 1);
        else
        {
            res += func(pos + 1, 1);
            res += func(pos + 1, 0);
        }
    }
    res %= mod;
    return dp[pos][flag] = res;
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
        for (ll i = 1; i <= n; i++)
            cin >> a[i];
        for (ll i = 0; i < n + 5; i++)
            for (ll j = 0; j < 5; j++)
                dp[i][j] = -1;
        res = func(1, 0);
        cout << res << nl;
    }
    return SH;
}