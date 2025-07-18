#include <bits/stdc++.h>
using namespace std;

// 2025-04-19 15:16:37
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
ll a[1005][1005];
ll rc[1005];
ll cc[1005];
ll ldp[1005][2];
ll rdp[1005][2];

ll func1(ll pos, bool prev)
{
    if (pos > n)
        return 0;
    if (ldp[pos][prev] != -1)
        return ldp[pos][prev];
    ll res = inf, res1 = inf, res2 = inf;
    bool f1 = true, f2 = true, f3 = true, f4 = true;
    for (ll i = 1; i <= n; i++)
    {
        if (a[pos - 1][i] == a[pos][i])
            f1 = false;
        if (a[pos - 1][i] + 1 == a[pos][i])
            f2 = false;
        if (a[pos - 1][i] == a[pos][i] + 1)
            f3 = false;
        if (a[pos - 1][i] + 1 == a[pos][i] + 1)
            f4 = false;
    }
    if (prev)
    {
        if (f2)
            res1 = func1(pos + 1, 0);
        if (f4)
            res2 = func1(pos + 1, 1) + rc[pos];
    }
    else
    {
        if (f1)
            res1 = func1(pos + 1, 0);
        if (f3 or pos == 1)
            res2 = func1(pos + 1, 1) + rc[pos];
    }
    res = min(res1, res2);
    return ldp[pos][prev] = res;
}

ll func2(ll pos, bool prev)
{
    if (pos > n)
        return 0;
    if (rdp[pos][prev] != -1)
        return rdp[pos][prev];
    ll res = inf, res1 = inf, res2 = inf;
    bool f1 = true, f2 = true, f3 = true, f4 = true;
    for (ll i = 1; i <= n; i++)
    {
        if (a[i][pos - 1] == a[i][pos])
            f1 = false;
        if (a[i][pos - 1] + 1 == a[i][pos])
            f2 = false;
        if (a[i][pos - 1] == a[i][pos] + 1)
            f3 = false;
        if (a[i][pos - 1] + 1 == a[i][pos] + 1)
            f4 = false;
    }
    if (prev)
    {
        if (f2)
            res1 = func2(pos + 1, 0);
        if (f4)
            res2 = func2(pos + 1, 1) + cc[pos];
    }
    else
    {
        if (f1)
            res1 = func2(pos + 1, 0);
        if (f3 or pos == 1)
            res2 = func2(pos + 1, 1) + cc[pos];
    }
    res = min(res1, res2);
    return rdp[pos][prev] = res;
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
        {
            for (ll j = 1; j <= n; j++)
            {
                cin >> a[i][j];
            }
        }
        for (ll i = 1; i <= n; i++)
            cin >> rc[i];
        for (ll i = 1; i <= n; i++)
            cin >> cc[i];
        for (ll i = 1; i <= n; i++)
        {
            ldp[i][0] = ldp[i][1] = rdp[i][0] = rdp[i][1] = -1;
        }
        ll res1 = func1(1, 0);
        ll res2 = func2(1, 0);
        if (res1 == inf or res2 == inf)
            cout << -1 << nl;
        else
            cout << res1 + res2 << nl;
    }
    return SH;
}