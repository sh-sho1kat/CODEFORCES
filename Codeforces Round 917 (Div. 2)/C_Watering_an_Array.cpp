///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-12-24 21:48:10
 **/

#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define mod 1000000007
#define inf (1LL << 62)
#define all(x) x.begin(), x.end()
#define eb emplace_back
#define ff first
#define ss second
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define dtob(p, n) bitset<p>(n).to_string()
#define btod(bin) stoi(bin, nullptr, 2)
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
        ll n, k, d;
        cin >> n >> k >> d;
        ll a[n + 5];
        vl b(k);
        vl c;
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        for (ll i = 0; i < k; i++)
            cin >> b[i];
        ll p = 0;
        while (p < n)
        {
            for (ll i = 0; i < k; i++)
            {
                c.eb(b[i]);
                p += k;
            }
        }
        // for (auto u : c)
        //     cout << u << " ";
        // cout << nl;
        for (ll i = 1; i <= min(d, n * n + 1); i++)
        {
            cnt = 0;
            for (ll j = 0; j < n; j++)
            {
                if (a[j] == j + 1)
                    cnt++;
            }
            res = max(res, cnt + (d - i - 1) / 2);
            ll tm = (i - 1) % n;
            for (ll j = 0; j < c[tm]; j++)
            {
                a[j]++;
            }
        }
        cout << res << nl;
    }
    return SH;
}