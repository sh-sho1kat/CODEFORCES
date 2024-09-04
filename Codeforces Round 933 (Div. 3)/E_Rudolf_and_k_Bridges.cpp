///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2024-03-15 00:32:54
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

int main()
{
    fastio;
    ll t;
    cin >> t;
    while (t--)
    {
        ll sum = 0, tmp = 0, res = 0, cnt = 0, ct = 0, ans = 0, mn = LONG_MAX, mx = 0;
        bool flag = true, fun = false, f = false;
        ll n, m, k, d;
        cin >> n >> m >> k >> d;
        ll a[n + 5][m + 5];
        for (ll i = 1; i <= n; i++)
            for (ll j = 1; j <= m; j++)
                cin >> a[i][j];
        vl v;
        for (ll i = 1; i <= n; i++)
        {
            priority_queue<pll, vpll, greater<pll>> pq;
            ll dp[m + 5] = {};
            pq.push({1, 1});
            dp[1] = 1;
            for (ll j = 2; j <= m; j++)
            {
                while (j - pq.top().ss - 1 > d)
                    pq.pop();
                dp[j] = pq.top().ff + a[i][j] + 1;
                pq.push({dp[j], j});
            }
            v.eb(dp[m]);
        }
        sum = 0;
        for (ll i = 0; i < k; i++)
            sum += v[i];
        res = sum;
        for (ll i = k; i < n; i++)
        {
            sum -= v[i - k];
            sum += v[i];
            res = min(sum, res);
        }
        cout << res << nl;
    }
    return SH;
}