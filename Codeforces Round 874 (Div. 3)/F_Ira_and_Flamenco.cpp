#include <bits/stdc++.h>
using namespace std;

// 2025-04-06 19:20:51
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
        ll n, k;
        cin >> n >> k;
        ll a[n + 5];
        map<ll, ll> mp;
        for (ll i = 1; i <= n; i++)
            cin >> a[i], mp[a[i]]++;

        vpll v;
        for (auto u : mp)
            v.eb({u.ff, u.ss});
        ll fact = 1;
        for (ll i = 0; i < min(ll(v.size()), k - 1); i++)
        {
            fact *= v[i].ss;
            fact %= mod;
        }
        for (ll i = k - 1; i < v.size(); i++)
        {
            fact *= v[i].ss;
            fact %= mod;
            if (v[i].ff - v[i - k + 1].ff == k - 1)
            {
                res += fact;
            }
            res %= mod;
            fact *= modInv(v[i - k + 1].ss, mod);
            fact %= mod;
        }
        cout << res << nl;
    }
    return SH;
}