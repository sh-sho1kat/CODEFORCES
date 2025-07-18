#include <bits/stdc++.h>
using namespace std;

// 2025-07-17 22:12:04
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
        ll a[n + 5], b[n + 5];
        for (ll i = 1; i <= n; i++)
            cin >> a[i];
        for (ll i = 1; i <= n; i++)
            cin >> b[i];
        ll ar[n + 5];
        for (ll i = 1; i <= n; i++)
            ar[i] = (a[i] * b[i]) / __gcd(a[i], b[i]);

        ll gc = 0;
        for (ll i = 1; i <= n; i++)
        {
            gc = __gcd(ar[i], gc);
            if (gc != a[i])
                flag = false;
        }

        gc = 0;
        for (ll i = n; i >= 1; i--)
        {
            gc = __gcd(ar[i], gc);
            if (gc != b[i])
                flag = false;
        }
        flag ? yes : no;
    }
    return SH;
}