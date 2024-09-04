/************************************************* بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ *************************************************/

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-02-01 21:26:45
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
        ll n, m, d;
        cin >> n >> m >> d;
        ll a[n + 5], b[m + 5];
        for (ll i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        for (ll i = 1; i <= m; i++)
        {
            cin >> b[i];
        }
        map<ll, ll> mp;
        for (ll i = 1; i <= n; i++)
        {
            mp[a[i]] = i;
        }
        for (ll i = 1; i < m; i++)
        {
            if (mp[b[i]] >= mp[b[i + 1]])
                fun = true;
            break;
        }
        for (ll i = 1; i < m; i++)
        {
            if (mp[b[i]] + d < mp[b[i + 1]])
                fun = true;
            break;
        }
        ll mn = INT_MAX;
        for (ll i = 1; i < m; i++)
        {
            mn = min((mp[b[i + 1]] - mp[b[i]]), mn);
        }
        ll mx = INT_MAX;
        ll mn2 = INT_MAX;
        for (ll i = 1; i < m; i++)
        {
            ll tt = (mp[b[i]] - mp[b[i + 1]]) + d + 1;
            if ((n + mp[b[i]] - mp[b[i + 1]] - 1) >= tt)
            {
                mn2 = min(mn2, tt);
            }
        }
        if (fun)
            cout << 0 << nl;
        else
        {
            if (min(mn2, mn) <= 0)
                mx = 0;
            else
            {
                mx = min(mn, mn2);
            }
            cout << mx << nl;
        }
    }
    return SH;
}