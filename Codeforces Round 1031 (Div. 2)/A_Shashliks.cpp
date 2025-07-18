#include <bits/stdc++.h>
using namespace std;

// 2025-06-15 15:10:10
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
        ll k, a, b, x, y;
        cin >> k >> a >> b >> x >> y;
        if (x <= y)
        {
            if (k >= a and k >= x)
            {
                ll tmp = (k - a) / x;
                k -= tmp * x;
                res += tmp;
            }
            if (k >= a)
            {
                res++;
                k -= x;
            }
            if (k >= b and k >= y)
            {
                ll tmp = (k - b) / y;
                res += tmp;
                k -= tmp * y;
            }
            if (k >= b)
            {
                res++;
                k -= y;
            }
        }
        else
        {
            if (k >= b and k >= y)
            {
                ll tmp = (k - b) / y;
                k -= tmp * y;
                res += tmp;
            }
            if (k >= b)
            {
                res++;
                k -= y;
            }
            if (k >= a and k >= x)
            {
                ll tmp = (k - a) / x;
                res += tmp;
                k -= tmp * x;
            }
            if (k >= a)
            {
                res++;
                k -= x;
            }
        }
        cout << res << nl;
    }
    return SH;
}