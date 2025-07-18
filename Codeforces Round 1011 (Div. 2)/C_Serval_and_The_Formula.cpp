#include <bits/stdc++.h>
using namespace std;

// 2025-03-27 12:58:48
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

#define set_kth_bit(x, k) (x | (1 << k))
#define check_kth_bit(x, k) ((x >> k) & 1)
#define toggle_kth_bit(x, k) (x ^ (1 << k))
#define unset_kth_bit(x, k) (x & (~(1 << k)))
#define check_power_of_2(x) (x && !(x & (x - 1)))
#define count_set_bits(x) __builtin_popcountll(x)
#define count_trailing_zero(x) __builtin_ctzll(x)
#define count_leading_zero(x) __builtin_clzll(x)

int main()
{
    fastio;
    ll t;
    cin >> t;
    while (t--)
    {
        ll sum = 0, tmp = 0, res = 0, cnt = 0, ct = 0, ans = 0, mn = LONG_MAX, mx = 0;
        bool flag = true, fun = false, f = false;
        ll a, b;
        cin >> a >> b;
        if (a == b)
        {
            cout << -1 << nl;
            continue;
        }
        res = max(a, b);
        string bin = dtob(64, res);
        flag = false;
        for (ll i = 0; i < 64; i++)
        {
            if (bin[i] == '1')
                flag = true;
            if (flag)
            {
                if (bin[i] == '0')
                    bin[i] = '1';
                else
                    bin[i] = '0';
            }
        }
        res = btod(bin);
        res++;
        cout << res << nl;
    }
    return SH;
}