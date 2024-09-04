///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2024-01-14 01:20:31
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
        ll n, m, d;
        cin >> n >> m >> d;
        ll a[m + 5];
        for (ll i = 1; i <= m; i++)
            cin >> a[i];
        a[0] = 1;
        ll b[m + 5] = {};
        b[0] = 1;
        for (ll i = 1; i <= m; i++)
        {
            b[i] = (a[i] - a[i - 1] + d - 1) / d;
        }
        b[m + 1] = (n - a[m]) / d;
        for (ll i = 0; i <= m + 1; i++)
            sum += b[i];
        mn = sum;
        for (ll i = 1; i < m; i++)
        {
            tmp = sum - b[i] - b[i + 1];
            tmp += (a[i + 1] - a[i - 1] + d - 1) / d;
            mn = min(tmp, mn);
        }
        tmp = sum - b[m] - b[m + 1];
        tmp += (n - a[m - 1]) / d;
        mn = min(tmp, mn);

        for (ll i = 1; i < m; i++)
        {
            tmp = sum - b[i] - b[i + 1];
            tmp += (a[i + 1] - a[i - 1] + d - 1) / d;
            if (mn == tmp)
                cnt++;
        }
        tmp = sum - b[m] - b[m + 1];
        tmp += (n - a[m - 1]) / d;
        if (tmp == mn)
            cnt++;
        cout << mn << " " << cnt << nl;
    }
    return SH;
}