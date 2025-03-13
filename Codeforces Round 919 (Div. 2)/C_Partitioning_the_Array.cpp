#include <bits/stdc++.h>
using namespace std;

// 2024-10-11 01:26:28
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
        ll a[n + 5];
        for (ll i = 1; i <= n; i++)
            cin >> a[i];
        vl v;
        for (ll i = 1; i * i <= n; i++)
        {
            if (!(n % i))
            {
                v.eb(i);
                if (i * i != n)
                    v.eb(n / i);
            }
        }
        sort(all(v));
        for (auto k : v)
        {
            ll gc = 0;
            for (ll i = 1; i <= n - k; i++)
                gc = __gcd(gc, abs(a[i] - a[i + k]));
            if (gc != 1)
                res++;
        }
        cout << res << nl;
    }
    return SH;
}