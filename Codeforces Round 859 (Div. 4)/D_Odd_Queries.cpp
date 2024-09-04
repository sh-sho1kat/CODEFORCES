///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-03-19 21:17:48
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
        ll sum = 0, tmp = 0, res = 0, cnt = 0, count = 0, ans = 0;
        bool flag = true, fun = false;
        ll n, m;
        cin >> n >> m;
        ll a[n + 5];
        a[0] = 0;
        ll b[n + 5];
        b[0] = 0;
        for (ll i = 1; i <= n; i++)
        {
            cin >> a[i];
            sum += a[i];
            b[i] = a[i] + b[i - 1];
        }
        // for (ll i = 1; i <= n; i++)
        // {
        //     cout << b[i] << " ";
        // }
        // cout << nl;
        while (m--)
        {
            ll l, r, k;
            cin >> l >> r >> k;
            tmp = (r - l - 1) * k;
            res = sum - (b[r] - b[l - 1]) + tmp;
            res & 1 ? yes : no;
        }
    }
    return SH;
}