#include <bits/stdc++.h>
using namespace std;

// 2025-05-31 21:31:35
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

ll gc;
ll a[5005];
ll dp[5005][5005];
ll n;
ll store[5005][5005];

ll func(ll pos, ll cgc)
{
    if (pos > n)
    {
        if (cgc == gc)
            return 0;
        else
            return inf;
    }
    if (dp[pos][cgc] != -1)
        return dp[pos][cgc];
    ll res1, res2;
    ll mn = min(cgc, a[pos]);
    ll mx = max(cgc, a[pos]);
    ll ngc = store[mn][mx];
    res1 = func(pos + 1, ngc) + 1;
    res2 = func(pos + 1, cgc);
    return dp[pos][cgc] = min(res1, res2);
}

int ___gcd(int a, int b)
{
    while (b)
    {
        a %= b;
        swap(a, b);
    }
    return a;
}

void store_gcd()
{
    for (ll i = 0; i <= 5000; i++)
    {
        for (ll j = i; j <= 5000; j++)
            store[i][j] = ___gcd(i, j);
    }
}

int main()
{
    fastio;
    store_gcd();
    ll t;
    cin >> t;
    while (t--)
    {
        ll sum = 0, tmp = 0, res = 0, cnt = 0, ct = 0, ans = 0, mn = LONG_MAX, mx = 0;
        bool flag = true, fun = false, f = false;
        cin >> n;
        for (ll i = 1; i <= n; i++)
            cin >> a[i];
        gc = 0;
        for (ll i = 1; i <= n; i++)
            gc = __gcd(gc, a[i]);
        for (ll i = 1; i <= n; i++)
        {
            mx = max(mx, a[i]);
            if (a[i] == gc)
            {
                fun = true;
                cnt++;
            }
        }
        for (ll i = 1; i <= n; i++)
        {
            for (ll j = 0; j <= mx; j++)
                dp[i][j] = -1;
        }
        res = func(1, 0);
        if (fun)
            cout << n - cnt << nl;
        else
            cout << res + n - 2 << nl;
    }
    return SH;
}