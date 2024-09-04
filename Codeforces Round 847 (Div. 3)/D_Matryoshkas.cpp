/**                        بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ
 *
 *
 *
 *     title : D_Matryoshkas.cpp
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-01-27 21:37:46
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
        ll n;
        cin >> n;
        ll a[n + 5];
        fr(0, n) cin >> a[i];
        map<ll, ll> mp;
        for (ll i = 0; i < n; i++)
        {
            mp[a[i]]++;
        }
        ll tmps = 0;
        ll tm = 0;
        for (auto u : mp)
        {
            if (fun)
            {
                if (u.ff - tmp == 1)
                {
                    if (tmps >= u.ss)
                    {
                        res = max(res, tmps);
                        // tm = min(tm, u.ss);
                    }
                    else
                    {
                        sum += res - tm;
                        tm = tmps;
                        res = u.ss;
                    }
                }
                else
                {
                    sum += res - tm;
                    res = u.ss;
                    tm = 0;
                }
                tmp = u.ff;
                tmps = u.ss;
            }
            if (fun == false)
            {
                tmp = u.ff;
                fun = true;
                res = u.ss;
                tmps = u.ss;
                // tm = u.ss;
            }
        }
        sum += res - tm;
        cout << sum << nl;
    }
    return SH;
}