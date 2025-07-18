#include <bits/stdc++.h>
using namespace std;

// 2025-04-05 01:16:36
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
        ll n, m, k;
        cin >> n >> m >> k;
        ll a[n + 5][m + 5];
        for (ll i = 1; i <= n; i++)
            for (ll j = 1; j <= m; j++)
                cin >> a[i][j];
        char s[n + 5][m + 5];
        for (ll i = 1; i <= n; i++)
            for (ll j = 1; j <= m; j++)
                cin >> s[i][j];

        ll s1 = 0, s2 = 0;
        ll pref[n + 5][m + 5] = {};
        for (ll i = 1; i <= n; i++)
        {
            for (ll j = 1; j <= m; j++)
            {
                if (s[i][j] == '1')
                {
                    s1 += a[i][j];
                    pref[i][j] = 1;
                }
                else
                {
                    s2 += a[i][j];
                }
            }
        }
        for (ll i = 1; i <= n; i++)
        {
            for (ll j = 1; j <= m; j++)
            {
                pref[i][j] += pref[i - 1][j];
            }
        }
        for (ll i = 1; i <= n; i++)
        {
            for (ll j = 1; j <= m; j++)
            {
                pref[i][j] += pref[i][j - 1];
            }
        }
        ll dif = abs(s1 - s2);
        ll gc = 0;
        for (ll i = 1; i <= n - k + 1; i++)
        {
            for (ll j = 1; j <= m - k + 1; j++)
            {
                sum = pref[i + k - 1][j + k - 1];
                sum -= pref[i + k - 1][j - 1];
                sum -= pref[i - 1][j + k - 1];
                sum += pref[i - 1][j - 1];
                sum = (k * k - 2 * sum);
                gc = __gcd(gc, abs(sum));
            }
        }
        if (dif == 0)
            yes;
        else if (gc == 0)
            no;
        else if (dif % gc == 0)
            yes;
        else
            no;
    }
    return SH;
}