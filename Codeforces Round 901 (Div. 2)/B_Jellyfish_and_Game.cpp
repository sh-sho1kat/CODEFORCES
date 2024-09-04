///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-09-30 20:56:23
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
        ll n, m, k;
        cin >> n >> m >> k;
        ll a[n + 5], b[m + 5];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }
        for (ll i = 0; i < m; i++)
            cin >> b[i];
        sort(a, a + n);
        sort(b, b + m);
        if (n == 1)
        {
            if (a[0] >= b[0])
            {
                if (k & 1)
                {
                    cout << a[0] << nl;
                }
                else
                {
                    cout << b[0] << nl;
                }
            }
        }
        else if (a[n - 1] >= b[m - 1] && b[0] <= a[0])
        {
            if (k & 1)
            {
                cout << sum - a[0] + b[m - 1] << nl;
            }
            else
            {
                cout << sum - a[n - 1] - a[0] + b[0] + b[m - 1] << nl;
            }
        }
        else if (b[0] >= a[0] && a[n - 1] >= b[m - 1])
        {
            if (k & 1)
            {
                cout << sum - a[0] + b[m - 1] << nl;
            }
            else
            {
                cout << sum - a[n - 1] + b[m - 1] << nl;
            }
        }
        else if (b[0] >= a[0] && a[n - 1] <= b[m - 1])
        {
            if (k & 1)
            {
                cout << sum - a[0] + b[m - 1] << nl;
            }
            else
            {
                cout << sum - a[0] + b[0] << nl;
            }
        }
        else if ((a[0] >= b[m - 1]))
        {
            if (k & 1)
            {
                cout << sum << nl;
            }
            else
            {
                cout << sum - a[n - 1] + b[0] << nl;
            }
        }
        else
        {
            if (k & 1)
                cout << sum - a[0] + b[m - 1] << nl;
            else
                cout << sum << nl;
        }
    }
    return SH;
}