///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2024-01-09 18:08:51
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

const ll N = 200000 + 5;

ll n;
ll a[N];
ll dp[N];

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
            cin >> a[i];
        dp[0] = 0;
        vl maxwell(n + 1, -inf);
        for (ll i = 1; i <= n; i++)
        {
            ll ans1 = dp[i - 1];
            ll ans2 = i + 1 + maxwell[a[i]];
            dp[i] = max(ans1, ans2);
            maxwell[a[i]] = max(maxwell[a[i]], dp[i - 1] - i);
        }
        ans = dp[n];
        cout << ans << nl;
    }
    return SH;
}