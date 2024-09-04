///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-11-17 20:40:44
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
        for (ll i = 1; i <= n; i++)
            cin >> a[i];
        // sort(a + 1, a + n + 1);
        ll b[n + 5] = {};
        for (ll i = 1; i <= n; i++)
        {
            b[i] += a[i] + b[i - 1];
            // cout << b[i] << " ";
        }
        // cout << nl;
        ll c[n + 5] = {};
        for (ll i = n; i >= 1; i--)
        {
            c[i] = c[i + 1] + a[i];
            // cout << c[i] << " ";
        }
        // for (ll i = 1; i <= n; i++)
        //     cout << c[i] << " ";
        // cout << nl;
        for (ll i = 1; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                ll p = i;
                ll q = n / i;
                // cout << p << " " << q << nl;
                ll j = 1;
                mx = INT_MIN;
                mn = inf;
                while (j <= n && p != n)
                {
                    sum += a[j];
                    tmp++;
                    if (tmp == p)
                    {
                        mx = max(mx, sum);
                        mn = min(mn, sum);
                        sum = 0;
                        tmp = 0;
                    }
                    j++;
                }
                ans = max(mx - mn, ans);
                j = 1;
                sum = 0;
                tmp = 0;
                mx = INT_MIN;
                mn = inf;

                while (j <= n && q != n)
                {
                    sum += a[j];
                    tmp++;
                    if (tmp == q)
                    {
                        mx = max(mx, sum);
                        mn = min(mn, sum);
                        sum = 0;
                        tmp = 0;
                    }
                    j++;
                }
                ans = max(mx - mn, ans);
            }
        }
        cout << ans << nl;
    }
    return SH;
}