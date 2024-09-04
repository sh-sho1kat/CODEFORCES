#include <bits/stdc++.h>
using namespace std;

// 2024-04-09 22:09:05
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
        vpll v;
        ll a[n + 5];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            v.push_back({a[i], i + 1});
        }
        sort(v.begin(), v.end());
        vpll v1;
        for (ll i = 0; i < n; i++)
        {
            if (k >= m)
            {
                tmp = m;
                k -= m;
            }
            else
            {
                tmp = k;
                k -= k;
            }
            v1.push_back({v[i].ss, tmp});
        }
        sort(v1.begin(), v1.end());
        ll extra = 0;
        for (ll i = 0; i < n; i++)
        {
            res += v1[i].ss * (a[i] + extra);
            extra += v1[i].ss;
        }
        cout << res << nl;
    }
    return SH;
}