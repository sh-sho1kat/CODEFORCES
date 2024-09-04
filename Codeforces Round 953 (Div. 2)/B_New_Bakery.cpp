#include <bits/stdc++.h>
using namespace std;

// 2024-06-16 15:20:17
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define mod 1000000007
#define inf (1LL << 62)
#define all(x) x.begin(), x.end()
#define eb emplace_back
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
        ll n, a, b;
        cin >> n >> a >> b;
        if (a >= b)
        {
            cout << n * a << nl;
        }
        else if ((b - a) >= n)
        {
            ll tmp1 = (b * (b + 1)) / 2;
            ll tmp2 = ((b - n) * (b - n + 1)) / 2;
            // cout << tmp1 << " " << tmp2 << nl;
            cout << tmp1 - tmp2 << nl;
        }
        else
        {
            ll tmp1 = n * a;
            ll tmp2 = b - a;
            ll sum = (tmp2 * (tmp2 + 1)) / 2;
            // cout << tmp1 << " " << tmp2 << " " << sum << nl;
            cout << tmp1 + sum << nl;
        }
    }
    return SH;
}