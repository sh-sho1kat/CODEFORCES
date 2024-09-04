///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2024-02-26 01:56:53
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

ll a[200005];

ll func(ll pos, ll n, ll green, ll blue, ll sum)
{
    if (pos == n)
        return 0;
    ll ans1 = 0, ans2 = 0, ans3 = 0;
    if (sum - a[pos] > 0)
        ans1 = 1 + func(pos + 1, n, green, blue, sum + a[pos] / 2);
    else
    {
        if (green)
            ans2 = func(pos, n, green - 1, blue, sum * 2);
        if (blue)
            ans3 = func(pos, n, green, blue - 1, sum * 3);
    }
    ll ans = max({ans1, ans2, ans3});
    return ans;
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
        ll n, init;
        cin >> n >> init;
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        ans = func(0, n, 2, 1, init);
        cout << ans << nl;
    }
    return SH;
}