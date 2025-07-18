#include <bits/stdc++.h>
using namespace std;

// 2025-05-26 03:36:47
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
ll dp[200005][3][3][3];

ll func(ll pos, ll p1, ll p2, ll p3)
{
    if (pos > n)
        return 0;

    if (dp[pos][p1][p2][p3] != -1)
        return dp[pos][p1][p2][p3];

    ll res = 0;

    // If not take
    res += func(pos + 1, p1, p2, p3);

    // If take
    ll tmp;
    if (a[pos] & 1)
        tmp = 1;
    else
        tmp = 2;
    if (tmp == 1)
    {
        if (!p2)
            res += func(pos + 1, p2, p3, tmp);
        else if ((p2 + p3) & 1)
            res += func(pos + 1, p2, p3, tmp) + 1;
    }
    else
    {

        if (!p2)
            res += func(pos + 1, p2, p3, tmp);
        else if (!((p2 + p3) & 1))
            res += func(pos + 1, p2, p3, tmp) + 1;
    }
    return dp[pos][p1][p2][p3] = res % mod;
    ;
}

int main()
{
    fastio;

    cin >> n;
    for (ll i = 1; i <= n; i++)
        cin >> a[i];
    for (ll i = 1; i <= n; i++)
        for (ll j = 0; j < 3; j++)
            for (ll k = 0; k < 3; k++)
                for (ll l = 0; l < 3; l++)
                    dp[i][j][k][l] = -1;
    ll res = func(1, 0, 0, 0);
    cout << res << nl;
    return SH;
}