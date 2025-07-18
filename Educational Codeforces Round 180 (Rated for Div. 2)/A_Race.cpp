#include <bits/stdc++.h>
using namespace std;

// 2025-06-26 02:19:15
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
        ll a, x, y;
        cin >> a >> x >> y;
        for (ll i = 1; i <= 101; i++)
        {
            ll dst1 = abs(a - x);
            ll dst2 = abs(a - y);

            ll dst3 = abs(i - x);
            ll dst4 = abs(i - y);
            if (dst3 < dst1 and dst4 < dst2)
                fun = true;
        }
        fun ? yes : no;
    }
    return SH;
}