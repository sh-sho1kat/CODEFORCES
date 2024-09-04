///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-03-30 16:05:03
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
#define dtob(p, n) bitset<p>(n).to_string()
#define btod(bin) stoi(bin, nullptr, 2)
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
        for (ll i = 1; i <= n; i++)
            cin >> a[i];
        vpll v;
        for (ll j = 1; j <= 30; j++)
        {
            ll mn = INT_MAX;
            tmp = 0;
            for (ll i = 1; i <= n; i++)
            {
                if (a[i] < mn)
                {
                    tmp = i;
                    mn = a[i];
                }
            }
            for (ll i = 1; i <= n; i++)
            {
                if (a[i] > mn)
                {
                    cnt++;
                    v.push_back({i, tmp});
                    a[i] = ceil((a[i] * 1.0) / a[tmp]);
                }
            }
        }
        for (ll i = 1; i < n; i++)
        {
            if (a[i] != a[i + 1])
            {
                flag = false;
            }
        }
        if (flag)
        {
            cout << cnt << nl;
            for (auto u : v)
                cout << u.ff << " " << u.ss << nl;
        }
        else
            cout << -1 << nl;
    }
    return SH;
}