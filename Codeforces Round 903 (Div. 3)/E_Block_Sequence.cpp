///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2024-01-05 11:41:42
 **/

#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define mod 1000000007
#define inf (1LL << 62)
#define all(x) x.begin(), x.end()
#define eb emplace_back
#define ff first
#define ss second
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define dtob(p, n) bitset<p>(n).to_string()
#define btod(bin) stoi(bin, nullptr, 2)
#define ok cout << "Eureka" << nl
#define nl '\n'
#define SH 0
typedef long long ll;
typedef pair<ll, ll> pll;
typedef vector<ll> vl;
typedef vector<pll> vpll;

/*
recursive
ll dp[200005];

ll min_operation(ll a[], ll n, ll pos)
{
    if (pos == n)
        return 0;
    if (pos > n)
        return inf;
    if (dp[pos] != -1)
        return dp[pos];
    ll nibo = 0, nibona = 0;
    nibo = min_operation(a, n, pos + a[pos] + 1);
    nibona = min_operation(a, n, pos + 1) + 1;
    return dp[pos] = min(nibo, nibona);
}

*/

vl dp(200005, inf);
ll min_operation(ll a[], ll n)
{
    dp[n] = 0;
    for (ll i = n - 1; i >= 0; i--)
    {
        ll nibo = inf, nibona = inf;
        nibona = 1 + dp[i + 1];
        if (i + a[i] < n)
            nibo = dp[i + a[i] + 1];
        dp[i] = min(nibo, nibona);
    }
    return dp[0];
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
        ll n;
        cin >> n;
        ll a[n + 5];
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        // memset(dp, -1, sizeof(dp));
        // ans = min_operation(a, n, 0);
        ans = min_operation(a, n);
        cout << ans << nl;
    }
    return SH;
}