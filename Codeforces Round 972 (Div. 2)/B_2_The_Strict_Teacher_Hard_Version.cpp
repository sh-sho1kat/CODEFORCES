#include <bits/stdc++.h>
using namespace std;

// 2024-09-14 21:10:25
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
        ll n, m, q;
        cin >> n >> m >> q;
        vl a;
        for (ll i = 1; i <= m; i++)
        {
            ll p;
            cin >> p;
            a.eb(p);
        }
        a.eb(0);
        a.eb(inf);
        sort(a.begin(), a.end());
        while (q--)
        {
            ll pos;
            cin >> pos;
            auto itr = lower_bound(a.begin(), a.end(), pos) - a.begin();
            if (a[itr - 1] == 0)
                cout << a[itr] - 1 << nl;
            else if (a[itr] == inf)
                cout << n - a[itr-1] << nl;
            else
                cout << (a[itr] - a[itr - 1]) / 2 << nl;
        }
    }
    return SH;
}