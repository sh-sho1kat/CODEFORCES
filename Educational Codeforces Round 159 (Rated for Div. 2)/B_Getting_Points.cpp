///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-12-03 20:46:02
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
        ll n, p, a, b;
        cin >> n >> p >> a >> b;
        ans = 0;
        ll left = 0, right = n, mid;
        ll task = ((n - 1) / 7) + 1;
        while (left <= right)
        {
            mid = (right + left) / 2;
            ll days = n - mid;
            unsigned long long points = min(days * 2, task) * b + days * a;
            if (points >= p)
            {
                left = mid + 1;
                ans = mid;
            }
            else
            {
                right = mid - 1;
            }
            // cout << mid << " " << points << " " << task << nl;
            // cout << left << " " << right << nl;
        }

        cout << ans << nl;
    }
    return SH;
}