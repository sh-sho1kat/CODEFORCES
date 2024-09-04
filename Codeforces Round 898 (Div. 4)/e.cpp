///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-09-21 21:32:10
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
        ll n, k;
        cin >> n >> k;
        ll a[n + 5];
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        ll b[n + 5];
        b[0] = a[0];
        for (ll i = 1; i < n; i++)
        {
            b[i] = b[i - 1] + a[i];
        }
        for (ll i = n - 1; i >= 0; i--)
        {
            ll p = a[i] * (i + 1);
            tmp = p - b[i];
            if (tmp <= k)
            {
                ans = a[i] + (k - tmp) / (i + 1);
                break;
            }
        }
        ll p = a[n - 1] * n;
        tmp = p - b[n - 1];
        if (k >= tmp)
        {
            ans = a[n - 1] + (k - tmp) / n;
        }
        cout << ans << nl;
    }
    return SH;
}