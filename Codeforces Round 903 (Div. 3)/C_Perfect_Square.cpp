///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-10-16 11:57:27
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
        ll n;
        cin >> n;
        char s[n + 5][n + 5];
        for (ll i = 1; i <= n; i++)
        {
            for (ll j = 1; j <= n; j++)
                cin >> s[i][j];
        }
        for (ll i = 1; 2 * i <= n; i++)
        {
            char mxx = 'a';
            for (ll j = i; j < n - i + 1; j++)
            {
                mxx = max({s[i][j], s[j][n - i + 1], s[n - i + 1][n - j + 1], s[n - j + 1][i]});
                ans += (mxx - s[i][j]);
                ans += (mxx - s[j][n - i + 1]);
                ans += (mxx - s[n - i + 1][n - j + 1]);
                ans += (mxx - s[n - j + 1][i]);
            }
        }
        cout << ans << nl;
    }
    return SH;
}