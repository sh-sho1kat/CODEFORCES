#include <bits/stdc++.h>
using namespace std;

// 2025-05-08 20:57:32
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define mod 998244353
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

ll fastpow(ll a, ll b)
{
    long long res = 1;
    while (b)
    {
        if (b & 1)
            (res *= a) %= mod;
        b >>= 1;
        (a *= a) %= mod;
    }
    return res;
}

int main()
{
    fastio;
    ll n;
    cin >> n;
    ll a[n + 5];
    for (ll i = 1; i <= n; i++)
        cin >> a[i];
    ll res = 0;
    for (ll bit = 0; bit <= 32; bit++)
    {
        ll cnt = 0;
        ll sum1 = 0;
        ll sum2 = 0;
        ll ct1 = 0;
        ll ct2 = 0;
        bool v[n + 5] = {};
        for (ll i = 1; i <= n; i++)
        {
            if (((a[i] >> bit) & 1))
                cnt++;
            if (cnt & 1)
            {
                v[i] = true;
                ct1++;
                sum1 += i;
            }
            else
            {
                ct2++;
                sum2 += i;
            }
        }
        bool flag = true;
        for (ll i = 1; i <= n; i++)
        {
            ll rem;
            if (flag)
                rem = sum1 - (ct1 * (i - 1));
            else
                rem = sum2 - (ct2 * (i - 1));
            rem %= mod;
            ll tmp = rem * fastpow(2, bit);
            tmp %= mod;
            res += tmp;
            res %= mod;
            if (((a[i] >> bit) & 1))
                flag = !flag;
            if (v[i])
            {
                ct1--;
                sum1 -= i;
            }
            else
            {
                ct2--;
                sum2 -= i;
            }
        }
    }
    cout << res << nl;

    return SH;
}