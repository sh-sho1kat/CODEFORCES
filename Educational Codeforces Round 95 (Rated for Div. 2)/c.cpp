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

ll func(ll pos, ll n, bool frnd)
{
    if (pos >= n)
        return 0;
    if (dp[pos][frnd] != -1)
        return dp[pos][frnd];
    ll ans = 0;
    if (frnd)
    {
        if (a[pos] == 1)
        {
            ans = 1 + func(pos + 1, n, 0);
            if (pos < n - 1 and a[pos + 1] == 0)
                ans = min(ans, 1 + func(pos + 2, n, 0));
        }
        else
        {
            ans = func(pos + 1, n, 0);
            if (pos < n - 1 and a[pos + 1] == 0)
            {
                ans = min(ans, func(pos + 2, n, 0));
            }
        }
    }
    else
    {
        ans = func(pos + 1, n, 1);
        ans = min(ans, func(pos + 2, n, 1));
    }
    return dp[pos][frnd] = ans;
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
        memset(dp, -1, sizeof(dp));
        ans = func(0, n, 1);
        cout << ans << nl;
    }
    return SH;
}