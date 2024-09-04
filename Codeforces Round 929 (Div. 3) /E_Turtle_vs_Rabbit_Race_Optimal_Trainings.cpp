///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2024-02-27 22:29:11
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
#define dtob(bits, n) bitset<bits>(n).to_string()
#define btod(bin) stoll(bin, nullptr, 2)
#define ok cout << "Eureka" << nl
#define nl '\n'
#define SH 0
typedef long long ll;
typedef pair<ll, ll> pll;
typedef vector<ll> vl;
typedef vector<pll> vpll;

ll ts(ll l, ll u, ll a[], ll n)
{
    ll low = l, high = n;
    ll res = l;
    while (low <= high)
    {
        ll mid = (low + high) / 2;
        if (a[mid] - a[l - 1] <= u)
        {
            res = mid;
            low = mid + 1;
        }
        else
            high = mid - 1;
    }
    ll sum = u * (u + 1) / 2;
    ll tmp = a[res] - a[l - 1];
    ll sum1 = tmp * u - (tmp * (tmp - 1)) / 2;
    tmp = a[res + 1] - a[l - 1];
    ll sum2 = tmp * u - (tmp * (tmp - 1)) / 2;
    if (sum2 > sum1 && res != n)
        res++;
    return res;
}
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
        ll a[n + 5] = {};
        for (ll i = 1; i <= n; i++)
            cin >> a[i];
        for (ll i = 1; i <= n; i++)
            a[i] += a[i - 1];
        ll q;
        cin >> q;
        while (q--)
        {
            ll l, u;
            cin >> l >> u;
            ll idx = ts(l, u, a, n);
            cout << idx << " ";
        }
        cout << nl;
    }
    return SH;
}