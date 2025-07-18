#include <bits/stdc++.h>
using namespace std;

// 2025-06-17 21:49:46
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

string a, b;

ll dp[25][5][5];

ll func(ll pos, bool up, bool down)
{
    ll res1 = inf, res2 = inf, res3 = inf;
    if (pos == a.size())
        return 0;

    if (dp[pos][up][down] != -1)
        return dp[pos][up][down];
    if (!up and !down)
        return 0;
    else if (!up and down)
    {
        if (a[pos] != '9')
            return 0;
        else
        {
            if (a[pos] == b[pos])
                res1 = func(pos + 1, up, down) + 2;
            else
                res2 = func(pos + 1, up, down) + 1;
        }
    }
    else if (up and !down)
    {
        if (b[pos] != '0')
            return 0;
        else
        {
            if (a[pos] == b[pos])
                res1 = func(pos + 1, up, down) + 2;
            else
                res2 = func(pos + 1, up, down) + 1;
        }
    }
    else
    {
        if (a[pos] > b[pos])
            return inf;
        else if (a[pos] == b[pos])
            res1 = func(pos + 1, up, down) + 2;
        else if (a[pos] + 1 == b[pos])
        {
            res2 = func(pos + 1, up, !down) + 1;
            res3 = func(pos + 1, !up, down) + 1;
        }
        else
            return 0;
    }

    return dp[pos][up][down] = min({res1, res2, res3});
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
        for (ll i = 0; i <= 20; i++)
        {
            for (ll j = 0; j <= 2; j++)
            {
                for (ll k = 0; k <= 2; k++)
                    dp[i][j][k] = -1;
            }
        }
        cin >> a >> b;
        res = func(0, 1, 1);
        cout << res << nl;
    }
    return SH;
}