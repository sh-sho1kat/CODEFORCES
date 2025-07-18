#include <bits/stdc++.h>
using namespace std;

// 2025-03-15 17:13:48
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
        ll n, k, z;
        cin >> n >> k >> z;
        ll a[n + 5];
        ll pref[n + 5] = {};
        for (ll i = 1; i <= n; i++)
            cin >> a[i], pref[i] = pref[i - 1] + a[i];
        res = pref[k + 1];
        ll num = k + 1;
        for (ll i = 2; i <= num; i++)
        {
            sum = pref[i - 1];
            ll rem = num - i + 1;
            for (ll j = 1; j <= z; j++)
            {
                if (rem >= 2)
                {
                    sum += a[i - 1];
                    sum += a[i];
                    rem -= 2;
                }
                else if (rem)
                {
                    sum += a[i];
                    rem--;
                }
                tmp = sum + (pref[i + rem - 1] - pref[i - 1]);
                res = max(res, tmp);
            }
        }
        cout << res << nl;
    }
    return SH;
}