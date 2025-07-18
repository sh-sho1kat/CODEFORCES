#include <bits/stdc++.h>
using namespace std;

// 2025-07-16 15:56:45
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
        ll n, q;
        cin >> n >> q;

        ll a[n + 5] = {};
        for (ll i = 1; i <= n; i++)
            cin >> a[i];

        ll psum[n + 5];
        ll pxor[n + 5];
        for (ll i = 1; i <= n; i++)
        {
            psum[i] = pxor[i] = a[i];
            psum[i] += psum[i - 1];
            pxor[i] ^= pxor[i - 1];
        }

        ll L, R;
        cin >> L >> R;

        ll xr = 0;
        ll sm = 0;

        for (ll i = L; i <= R; i++)
        {
            sm += a[i];
            xr ^= a[i];
        }
        res = sm - xr;
        ll l = 1, r = R - L + 1;
        ll left = L;
        ll right = R;

        while (l <= r)
        {
            ll mid = (l + r) >> 1;
            flag = false;
            for (ll i = L + mid - 1; i <= R; i++)
            {
                tmp = psum[i] - psum[i - mid] - (pxor[i] ^ pxor[i - mid]);
                if (tmp >= res)
                {
                    left = i - mid + 1;
                    right = i;
                    flag = true;
                }
            }
            if (flag)
                r = mid - 1;
            else
                l = mid + 1;
        }
        cout << left << " " << right << nl;
    }
    return SH;
}