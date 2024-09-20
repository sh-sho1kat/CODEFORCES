#include <bits/stdc++.h>
using namespace std;

// 2024-09-05 19:47:30
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
        map<pll, ll> mp;
        ll upore = -1, niche = -1;
        for (ll i = 0; i < n; i++)
        {
            ll a, b;
            cin >> a >> b;
            if (b == 0)
                niche++;
            else
                upore++;
            mp[{a, b}]++;
        }
        for (auto u : mp)
        {
            ll x = u.ff.ff;
            ll y = u.ff.ss;
            if (!u.ss)
                continue;
            if (y)
            {
                if (mp[{x, 0}])
                    ans += niche;
                if (mp[{x - 1, 0}] and mp[{x + 1, 0}])
                    ans++;
            }
            else
            {
                if (mp[{x, 1}])
                    ans += upore;
                if (mp[{x - 1, 1}] and mp[{x + 1, 1}])
                    ans++;
            }
        }
        cout << ans << nl;
    }
    return SH;
}