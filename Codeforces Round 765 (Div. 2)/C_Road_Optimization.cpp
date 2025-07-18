#include <bits/stdc++.h>
using namespace std;

// 2025-04-17 04:02:41
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

ll n, l, k;
ll a[505], b[505];
ll dp[505][505];

ll func(ll pos, ll rem)
{
    if (pos > n)
        return 0;
    if (dp[pos][rem] != -1)
        return dp[pos][rem];

    ll res = inf;
    for (ll skip = pos + 1; skip <= n + 1; skip++)
        if (rem - skip + pos + 1 >= 0)
            res = min(res, func(skip, rem - skip + pos + 1) + b[pos] * (a[skip] - a[pos]));
    return dp[pos][rem] = res;
}

int main()
{
    fastio;

    cin >> n >> l >> k;
    for (ll i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    a[n + 1] = l;
    for (ll i = 1; i <= n; i++)
        cin >> b[i];
    memset(dp, -1, sizeof dp);
    ll res;
    res = func(1, k);
    cout << res << nl;

    return SH;
}