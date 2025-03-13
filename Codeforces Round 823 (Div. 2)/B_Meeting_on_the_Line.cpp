#include <bits/stdc++.h>
using namespace std;

// 2025-01-31 22:35:59
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
        ll sum = 0, tmp = 0, res = 0, cnt = 0, ct = 0, ans = 0, mn = inf, mx = -inf;
        bool flag = true, fun = false, f = false;
        ll n;
        cin >> n;
        ll a[n + 5];
        for (ll i = 1; i <= n; i++)
            cin >> a[i];
        ll b[n + 5];
        for (ll i = 1; i <= n; i++)
            cin >> b[i];
        ll tm = -1;
        ll pos = -1;
        for (ll i = 1; i <= n; i++)
        {
            if (b[i] > tm)
            {
                tm = b[i];
                pos = a[i];
            }
        }
        for (ll i = 1; i <= n; i++)
        {
            ll remtm = tm - b[i];
            if (a[i] > pos)
            {
                a[i] -= remtm;
                a[i] = max(a[i], pos);
            }
            else
            {
                a[i] += remtm;
                a[i] = min(a[i], pos);
            }
        }
        for (ll i = 1; i <= n; i++)
        {
            mn = min(a[i], mn);
            mx = max(a[i], mx);
        }
        double result = (mn + mx) / 2.0;
        cout << fixed << setprecision(10) << result << nl;
    }
    return SH;
}