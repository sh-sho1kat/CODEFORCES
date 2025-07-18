#include <bits/stdc++.h>
using namespace std;

// 2025-04-08 15:58:28
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

ll n, k;
const ll mxn = 2e5 + 5;
ll a[mxn];
ll dp[mxn][130];

ll func(ll pos, ll mask)
{
    if (pos > n)
    {
        if ((__builtin_popcountll(mask) == k))
            return true;
        return false;
    }
    ll &res = dp[pos][mask];
    if (res != -1)
        return res;
    res = 0;
    res += func(pos + 1, mask);
    res += func(pos + 1, a[pos] & mask);
    res %= mod;
    return res;
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
        cin >> n >> k;
        for (ll i = 1; i <= n; i++)
            cin >> a[i];
        for (ll i = 1; i <= n; i++)
            for (ll j = 0; j < 128; j++)
                dp[i][j] = -1;
        res = func(1, 127);
        cout << res << nl;
    }
    return SH;
}