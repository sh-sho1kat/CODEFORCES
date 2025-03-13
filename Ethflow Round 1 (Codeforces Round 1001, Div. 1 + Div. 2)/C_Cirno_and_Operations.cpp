#include <bits/stdc++.h>
using namespace std;

// 2025-01-28 00:50:04
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
        vl v;
        for (ll i = 1; i <= n; i++)
        {
            ll p;
            cin >> p;
            v.eb(p);
            sum += p;
        }
        res = sum;
        if (n == 1)
        {
            cout << res << nl;
            continue;
        }
        while (n--)
        {
            vl b, c;
            ll s1 = 0, s2 = 0;
            for (ll i = 1; i < v.size(); i++)
            {
                b.eb(v[i] - v[i - 1]);
                s1 += (b[b.size() - 1]);
            }
            reverse(all(v));
            for (ll i = 1; i < v.size(); i++)
            {
                c.eb(v[i] - v[i - 1]);
                s2 += (c[c.size() - 1]);
            }
            res = max({s1, s2, res});
            if (s1 >= s2)
                v = b;
            else
                v = c;
        }
        cout << res << nl;
    }
    return SH;
}