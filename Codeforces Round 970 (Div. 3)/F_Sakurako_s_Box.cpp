#include <bits/stdc++.h>
using namespace std;

// 2024-11-30 19:37:13
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

ll egcd(ll a, ll b, ll &x, ll &y)
{
    if (b == 0)
    {
        x = 1;
        y = 0;
        return a;
    }
    ll x1, y1;
    ll d = egcd(b, a % b, x1, y1);
    x = y1;
    y = x1 - y1 * (a / b);
    return d;
}

ll modInv(ll a, ll m)
{
    ll x, y;
    ll gcd = egcd(a, m, x, y);
    return (x % m + m) % m;
}

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
        ll ssum[n + 5] = {};
        for (ll i = n; i >= 1; i--)
        {
            ssum[i] = a[i] + ssum[i + 1];
        }
        for (ll i = 1; i <= n; i++)
        {
            tmp = a[i] * ssum[i + 1];
            tmp %= mod;
            (sum += tmp) %= mod;
        }
        tmp = (n * (n - 1)) / 2;
        sum *= modInv(tmp, mod);
        sum %= mod;
        cout << sum << nl;
    }
    return SH;
}