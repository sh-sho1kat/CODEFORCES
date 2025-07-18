#include <bits/stdc++.h>
using namespace std;

// 2025-04-01 11:35:37
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

ll query(ll a, ll b)
{
    cout << "? " << a << " " << b << nl;

    ll p;
    cin >> p;
    return p;
}

int main()
{
    // fastio;
    ll t;
    cin >> t;
    while (t--)
    {
        ll sum = 0, tmp = 0, res = 0, cnt = 0, ct = 0, ans = 0, mn = LONG_MAX, mx = 0;
        bool flag = true, fun = false, f = false;
        ll l = 1, r = 999;
        while (l <= r)
        {
            ll m1 = l + (r - l) / 3;
            ll m2 = r - (r - l) / 3;
            ll val = query(m1, m2);

            ll fact = m1 * m2;
            ll fact2 = (m2 + 1) * (m1 + 1);
            if (fact == val)
            {
                l = m2 + 1;
            }
            else if (fact2 == val)
            {
                r = m1 - 1;
                res = m1;
            }
            else
            {
                l = m1 + 1;
                r = m2 - 1;
                res = m2;
            }
        }
        cout << "! " << res << nl;
    }
    return SH;
}