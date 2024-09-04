#include <bits/stdc++.h>
using namespace std;

// 2024-04-03 05:08:08
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
        ll n;
        cin >> n;
        ll a[n + 5];
        for (ll i = 1; i <= n; i++)
            cin >> a[i];
        ll prev[n + 5] = {}, dst[n + 5] = {};
        for (ll i = 1; i <= n; i++)
        {
            dst[a[i]] = max(dst[a[i]], i - prev[a[i]]);
            prev[a[i]] = i;
        }
        for (ll i = 1; i <= n; i++)
        {
            if (dst[i])
                dst[i] = max(dst[i], n + 1 - prev[i]);
            else
                dst[i] = inf;
        }
        vl v;
        map<ll, ll> mp;
        for (ll i = 1; i <= n; i++)
        {
            if (!mp[dst[i]])
                mp[dst[i]] = i;
        }
        ll pre = inf;
        for (ll i = 1; i <= n; i++)
        {
            if (mp[i])
            {
                tmp = mp[i];
                pre = min(pre, mp[i]);
            }
            v.push_back(pre);
        }
        for (ll i = 0; i < n; i++)
            if (v[i] == inf)
                cout << -1 << " ";
            else
                cout << v[i] << " ";
        cout << nl;
    }
    return SH;
}