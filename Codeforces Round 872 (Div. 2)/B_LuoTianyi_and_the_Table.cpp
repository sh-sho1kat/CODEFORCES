///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-05-08 18:44:42
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
#define dtob(p, n) bitset<p>(n).to_string()
#define btod(bin) stoi(bin, nullptr, 2)
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
        ll sum = 0, tmp = 0, res = 0, cnt = 0, ct = 0, ans = 0, mn = 0, mx = INT_MAX;
        bool flag = true, fun = false, f = false;
        ll n, m;
        cin >> n >> m;
        ll len = n * m;
        ll a[len + 5];
        for (ll i = 0; i < len; i++)
        {
            cin >> a[i];
        }

        sort(a, a + len);
        // ll a=max(abs)
        // ll p = (a[len - 1] + a[len - 2]) * (m * n - min(m, n));
        // ll q = (a[len - 1] + a[len - 3]) * (min(m, n) - 1);
        cout << max(((abs(a[0] - a[len - 1]) * (m * n - min(m, n))) + (abs(a[0] - a[len - 2]) * (min(m, n) - 1))), ((abs(a[len - 1] - a[0]) * (m * n - min(m, n))) + (abs(a[len - 1] - a[1]) * ((min(m, n) - 1))))) << nl;
        ;
        // cout << p + q << nl;
    }
    return SH;
}