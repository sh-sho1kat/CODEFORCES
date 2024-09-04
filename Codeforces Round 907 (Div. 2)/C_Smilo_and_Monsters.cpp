///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2024-01-03 23:02:09
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
        ll n;
        cin >> n;
        ll a[n + 5];
        for (ll i = 0; i < n; sum += a[i++])
            cin >> a[i];
        sort(a, a + n);
        for (ll i = 0; i < n; i++)
        {
            tmp += a[i];
            if (!(sum & 1))
            {
                if (2 * tmp == sum)
                {
                    ans = tmp + n - i - 1;
                    break;
                }
                else if (2 * tmp > sum)
                {
                    ans = (sum / 2) + n - i;
                    break;
                }
            }
            else
            {
                if (2 * tmp - 1 == sum)
                {
                    ans = tmp + n - i - 1;
                    break;
                }
                else if (2 * tmp - 1 > sum)
                {
                    ans = (sum / 2) + n - i + 1;
                    break;
                }
            }
        }
        cout << ans << nl;
    }
    return SH;
}