///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-12-09 23:21:34
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
        vpll v;
        for (ll i = 1; i <= n; i++)
        {
            ll p;
            cin >> p;
            v.push_back({p, i});
        }
        sort(v.begin(), v.end(), greater<pll>());
        ll b[n + 5] = {};
        for (ll i = n - 1; i >= 0; i--)
        {
            b[i] = b[i + 1] + v[i].ff;
        }
        cnt = n - 1;
        tmp = cnt;
        vpll v2;
        for (ll i = 0; i < n; i++)
        {
            v2.push_back({v[i].ss, tmp});
            cnt--;
            if (v[i].ff > b[i + 1])
            {
                tmp = cnt;
            }
        }
        sort(v2.begin(), v2.end());
        for (auto u : v2)
            cout << u.ss << " ";
        cout << nl;
    }
    return SH;
}