#include <bits/stdc++.h>
using namespace std;

// 2024-10-26 22:52:53
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
ll a[100005];
ll dp[100005][5];

ll func(ll pos, ll swaped)
{

    if (pos * 2 >= n - 1)
    {
        if (n & 1)
        {
            if (a[pos] != a[pos - 1] and a[pos] != a[pos + 1])
                return 2;
            else if (a[pos] != a[pos - 1] or a[pos] != a[pos + 1])
                return 1;
            else
                return 0;
        }
        else
        {
            if (a[pos] != a[pos - 1])
                return 1;
            else
                return 0;
        }
    }
    if (dp[pos][swaped] != -1)
        return dp[pos][swaped];
    ll res1 = 0, res2 = 0;
    if (pos)
    {
        if (!swaped)
        {
            // if I do not swap
            if (a[pos] != a[pos - 1])
                res1++;
            if (a[n - pos - 1] != a[n - pos])
                res1++;
            res1 += func(pos + 1, 0);

            // If I swap
            if (a[n - pos - 1] != a[pos - 1])
                res2++;
            if (a[pos] != a[n - pos])
                res2++;
            res2 += func(pos + 1, 1);
        }
        if (swaped)
        {
            // if I do not swap
            if (a[pos] != a[n - pos])
                res1++;
            if (a[n - pos - 1] != a[pos - 1])
                res1++;
            res1 += func(pos + 1, 0);

            // If I swap
            if (a[n - pos - 1] != a[n - pos])
                res2++;
            if (a[pos] != a[pos - 1])
                res2++;
            res2 += func(pos + 1, 1);
        }
    }
    else
    {
        res1 = func(pos + 1, 0);
        res2 = func(pos + 1, 1);
    }
    return dp[pos][swaped] = max(res1, res2);
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
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        memset(dp, -1, sizeof(dp));
        res = func(0, 0);
        cout << n - 1 - res << nl;
    }
    return SH;
}