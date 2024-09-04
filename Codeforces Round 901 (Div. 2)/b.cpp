///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-09-30 22:31:11
 **/

#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define mod 1000000007
#define inf 1e18
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
        ll n, m, k;
        cin >> n >> m >> k;
        ll a[n + 5], b[m + 5];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (ll i = 0; i < m; i++)
            cin >> b[i];

        sort(a, a + n);
        sort(b, b + m);
        ll s1 = 0, s2 = 0, s3 = 0;
        if (b[m - 1] >= a[0])
        {
            swap(a[0], b[m - 1]);
        }
        for (ll i = 0; i < n; i++)
            s1 += a[i];

        sort(a, a + n);
        sort(b, b + m);
        if (b[0] <= a[n - 1])
        {
            swap(b[0], a[n - 1]);
        }
        for (ll i = 0; i < n; i++)
            s2 += a[i];

        sort(a, a + n);
        sort(b, b + m);
        if (b[m - 1] >= a[0])
        {
            swap(a[0], b[m - 1]);
        }
        for (ll i = 0; i < n; i++)
            s3 += a[i];

        if (k == 1)
            cout << s1 << nl;
        else if (k % 2 == 0)
            cout << s2 << nl;
        else
            cout << s3 << nl;
    }
    return SH;
}