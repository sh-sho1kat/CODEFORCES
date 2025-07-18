#include <bits/stdc++.h>
using namespace std;

// 2025-06-18 01:54:27
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

int main()
{
    fastio;
    ll t;
    cin >> t;
    while (t--)
    {
        ll sum = 0, tmp = 0, res = 0, cnt = 0, ct = 0, ans = 0, mn = LONG_MAX, mx = 0;
        bool flag = true, fun = false, f = false;
        ll n, s, x;
        cin >> n >> s >> x;
        ll a[n + 5];
        for (ll i = 1; i <= n; i++)
            cin >> a[i];

        map<ll, ll> mp, premp;
        mp[0] = 1;
        mx = -inf;
        for (ll i = 1; i <= n; i++)
        {
            mx = max(mx, a[i]);
            if (mx > x)
            {
                mx = -inf;
                sum = 0;
                mp.clear();
                mp[0] = 1;
            }
            else
            {
                sum += a[i];
                if (mx == x)
                {
                    if (mx == a[i])
                    {
                        premp.clear();
                    }
                    res += mp[sum - s];
                    res -= premp[sum - s];
                }
                mp[sum]++;
                premp[sum]++;
            }
        }
        cout << res << nl;
    }
    return SH;
}