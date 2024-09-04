///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2024-03-29 06:21:08
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
#define dtob(bits, n) bitset<bits>(n).to_string()
#define btod(bin) stoll(bin, nullptr, 2)
#define ok cout << "Eureka" << nl
#define nl '\n'
#define SH 0
typedef long long ll;
typedef pair<ll, ll> pll;
typedef vector<ll> vl;
typedef vector<pll> vpll;

ll a[200005];
ll dp[200005][2];

ll func(ll pos, bool frnd, ll n)
{
    ll res = 0, res1 = 0, res2 = 0;
    if (pos >= n)
        return 0;
    if (dp[pos][frnd] != -1)
        return dp[pos][frnd];
    if (frnd)
    {
        if (a[pos] == 0)
        {
            res = func(pos + 1, 0, n);
            if (a[pos + 1] == 0 && pos + 1 < n)
            {
                res = min(res, func(pos + 2, 0, n));
            }
            else if (a[pos + 1] == 1 && pos + 1 < n)
            {
                res = min(res, func(pos + 2, 0, n) + 1);
            }
        }
        else
        {
            res = func(pos + 1, 0, n) + 1;
            if (a[pos + 1] == 0 && pos + 1 < n)
            {
                res = min(res, func(pos + 2, 0, n) + 1);
            }
            else if (a[pos + 1] == 1 && pos + 1 < n)
            {
                res = min(res, func(pos + 2, 0, n) + 2);
            }
        }
    }
    else
    {
        res1 = func(pos + 1, 1, n);
        res2 = func(pos + 2, 1, n);
        res = min(res1, res2);
    }
    return dp[pos][frnd] = res;
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
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        memset(dp, -1, n * sizeof(dp[0]));
        ans = func(0, 1, n);
        cout << ans << nl;
    }
    return SH;
}