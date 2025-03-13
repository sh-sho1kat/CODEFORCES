#include <bits/stdc++.h>
using namespace std;

// 2025-03-10 13:21:32
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
        ll n;
        cin >> n;
        pll v[n + 5];
        for (ll i = 1; i <= n; i++)
            cin >> v[i].ff >> v[i].ss;
        ll l = 1, r = n;
        while (l <= r)
        {
            ll mid = (l + r) / 2;
            flag = true;
            ll cnt = 0;
            for (ll i = 1; i <= n; i++)
            {
                if ((v[i].ff >= mid - cnt - 1) and (cnt <= v[i].ss))
                    cnt++;
            }
            if (cnt >= mid)
            {
                res = mid;
                l = mid + 1;
            }
            else
                r = mid - 1;
        }
        cout << res << nl;
    }
    return SH;
}