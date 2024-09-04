///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2024-02-26 18:57:15
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
        ll n, w;
        cin >> n >> w;
        vpll a;
        for (ll i = 0; i < n; i++)
        {
            ll p;
            cin >> p;
            a.push_back({p, i + 1});
        }
        ll k = (w + 1) / 2;
        sort(a.begin(), a.end(), greater<pll>());
        vl v;
        for (ll i = 0; i < n; i++)
        {
            if (a[i].ff + sum >= k && a[i].ff + sum <= w)
            {
                v.eb(a[i].ss);
                fun = true;
                break;
            }
            if (a[i].ff + sum < k)
            {
                v.eb(a[i].ss);
                sum += a[i].ff;
            }
        }
        if (fun)
        {
            cout << v.size() << nl;
            sort(v.begin(), v.end());
            for (auto u : v)
                cout << u << " ";
            cout << nl;
        }
        else
            cout << -1 << nl;
    }
    return SH;
}