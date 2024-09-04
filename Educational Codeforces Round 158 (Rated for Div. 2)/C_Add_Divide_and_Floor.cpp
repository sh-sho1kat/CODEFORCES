///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-11-24 21:20:19
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
        if (n == 1)
        {
            cout << 0 << nl;
            continue;
        }
        sort(a + 1, a + n + 1);
        ll l = 0, r = 0;
        l = a[1], r = a[n];
        vl v;
        while (l != r)
        {
            l = (l + r + 1) / 2;
            v.eb(r + 1);
            cnt++;
        }

        if ((cnt) > n)
            cout << cnt << nl;
        else
        {
            cout << cnt << nl;
            for (ll i = 0; i < cnt; i++)
                cout << v[i] << " ";
            cout << nl;
        }
    }
    return SH;
}