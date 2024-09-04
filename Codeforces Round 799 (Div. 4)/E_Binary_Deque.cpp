///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-02-26 02:58:14
 **/

#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define mod 1000000007
#define all(x) x.begin(), x.end()
#define eb emplace_back
#define pf push_front
#define MP make_pair
#define ff first
#define ss second
#define fr(s, n) for (ll i = s; i < n; i++)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define nl '\n'
#define SH 0
typedef long long ll;
typedef pair<ll, ll> pll;
typedef vector<ll> vl;
typedef vector<pll> vpll;

#define ok cout << "Eureka" << nl
#define ap(arr, n)             \
    for (ll i = 0; i < n; i++) \
        cout << arr[i] << " "; \
    cout << nl;

int main()
{
    fastio;
    ll t;
    cin >> t;
    while (t--)
    {
        ll sum = 0, tmp = 0, res = 0, cnt = 0, count = 0, ans = 0;
        bool flag = true, fun = false;
        ll n, s;
        cin >> n >> s;
        vl a(n + 5, 0), v(n + 1);
        for (ll i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        for (ll i = 1; i <= n; i++)
        {
            v[i] += v[i - 1] + a[i];
        }
        a[0] = 1;
        // ap(v, n + 1);
        if (v[n] < s)
        {
            cout << -1 << nl;
            continue;
        }
        // cout << upper_bound(all(v), 1) - v.begin() << nl;
        for (ll i = 0; i <= n; i++)
        {
            ll p = (upper_bound(all(v), v[i] + s) - v.begin());
            // cout << p << " ";
            if (p <= n + 1 && a[i] == 1)
                ans = max(ans, p - i - 1);
        }
        cout << n - ans << nl;
    }
    return SH;
}