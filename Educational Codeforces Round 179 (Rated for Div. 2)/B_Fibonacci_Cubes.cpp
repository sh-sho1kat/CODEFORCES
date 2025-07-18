#include <bits/stdc++.h>
using namespace std;

// 2025-06-03 20:57:55
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
#define one cout << "1"
#define zero cout << "0"

ll fib[] = {1, 2, 3, 5, 8, 13, 21, 34, 55, 89};

int main()
{
    fastio;
    ll t;
    cin >> t;
    while (t--)
    {
        ll sum = 0, tmp = 0, res = 0, cnt = 0, ct = 0, ans = 0, mn = LONG_MAX, mx = 0;
        bool flag = true, fun = false, f = false;
        ll n, m;
        cin >> n >> m;
        ll last = fib[n - 1];
        ll slast = fib[n - 2];
        for (ll i = 1; i <= m; i++)
        {
            ll w, l, h;
            cin >> w >> l >> h;
            if (last + slast <= h and last <= w and last <= l)
                one;
            else if (last + slast <= w and last <= l and last <= h)
                one;
            else if (last + slast <= l and last <= w and last <= h)
                one;
            else
                zero;
        }
        cout << nl;
    }
    return SH;
}