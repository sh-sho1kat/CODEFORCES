///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-06-18 14:18:20
 **/

#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define mod 1000000007
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
        ll pos = 0, ne = 0;
        for (ll i = 1; i <= n; i++)
        {
            ll p;
            cin >> p;
            if (p > 0)
                pos++;
            else
                ne++;
        }
        if (pos >= ne)
        {
            if (ne & 1)
                cout << 1 << nl;
            else
                cout << 0 << nl;
        }
        else
        {
            tmp = ne - pos;
            ans = (tmp + 1) / 2;
            if ((ne - ans) & 1)
                ans++;
            cout << ans << nl;
        }
    }
    return SH;
}