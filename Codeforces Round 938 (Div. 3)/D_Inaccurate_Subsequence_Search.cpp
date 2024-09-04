#include <bits/stdc++.h>
using namespace std;

// 2024-04-11 19:03:59
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define mod 1000000007
#define inf (1LL << 62)
#define all(x) x.begin(), x.end()
#define eb emplace_back
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

int main()
{
    fastio;
    ll t;
    cin >> t;
    while (t--)
    {
        ll sum = 0, tmp = 0, res = 0, cnt = 0, ct = 0, ans = 0, mn = LONG_MAX, mx = 0;
        bool flag = true, fun = false, f = false;
        ll n, m, k;
        cin >> n >> m >> k;
        ll a[n + 5] = {};
        for (ll i = 1; i <= n; i++)
            cin >> a[i];
        map<ll, ll> mp, keep;
        for (ll i = 1; i <= m; i++)
        {
            ll p;
            cin >> p;
            mp[p]++;
        }
        for (ll i = 1; i <= m - 1; i++)
        {
            if (mp[a[i]] > keep[a[i]])
                cnt++;
            keep[a[i]]++;
        }
        for (ll i = m; i <= n; i++)
        {
            if (mp[a[i - m]] >= keep[a[i - m]] and mp[a[i - m]])
                cnt--;
            keep[a[i - m]]--;
            if (mp[a[i]] > keep[a[i]])
                cnt++;
            keep[a[i]]++;
            if (cnt >= k)
                ans++;
        }
        cout << ans << nl;
    }
    return SH;
}