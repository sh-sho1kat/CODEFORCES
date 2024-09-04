///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-07-02 22:47:07
 **/

#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define mod 1000000007
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
        ll sum = 0, tmp = 0, res = 0, cnt = 0, ct = 0, ans = 1, mn = LONG_MAX, mx = 0;
        bool flag = true, fun = false, f = false;
        ll x, y, a, b, c, d;
        cin >> x >> y >> a >> b >> c >> d;
        if (x < a && x < c)
            ans += min(a, c) - x;
        else if (x > a && x > c)
        {
            ans += x - max(a, c);
        }
        if (y < b && y < d)
            ans += min(b, d) - y;
        else if (y > b && y > d)
            ans += y - max(b, d);

        cout << ans << nl;
    }
    return SH;
}