///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2024-01-13 03:29:17
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

ll a[20];

ll number_of_ways(ll n, ll l, ll r, ll x, ll pos, ll koyta, ll sum, vl v)
{
    if (pos == n)
    {
        if (sum > r || sum < l || koyta < 2)
            return 0;
        else if (v[v.size() - 1] - v[0] < x)
            return 0;
        else
            return 1;
    }
    ll ways, nibo = 0, nibona = 0;
    vl v1;
    v1 = v;
    v1.eb(a[pos]);
    nibo = number_of_ways(n, l, r, x, pos + 1, koyta + 1, sum + a[pos], v1);
    nibona = number_of_ways(n, l, r, x, pos + 1, koyta, sum, v);
    ways = nibo + nibona;
    return ways;
}

int main()
{
    fastio;
    ll n, l, r, x;
    cin >> n >> l >> r >> x;
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    vl v;
    ll ans = number_of_ways(n, l, r, x, 0, 0, 0, v);
    cout << ans << nl;
    return SH;
}