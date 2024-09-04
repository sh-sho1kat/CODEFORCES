///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2024-02-06 21:54:18
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
        ll b[n + 5] = {};
        a[0] = 1;
        tmp = 0;
        ll idx = -1;
        b[1] = -1;
        for (ll i = 2; i <= n; i++)
        {
            if (a[i] != a[i - 1])
                idx = i - 1;
            b[i] = idx;
        }
        // for (ll i = 1; i <= n; i++)
        //     cout << b[i] << " ";
        // cout << nl;
        ll q;
        cin >> q;
        while (q--)
        {
            ll l, r;
            cin >> l >> r;
            if (b[r] == -1)
                cout << "-1 -1" << nl;
            else if (b[r] < l)
                cout << "-1 -1" << nl;
            else
                cout << b[r] << " " << r << nl;
        }
        cout << nl;
    }
    return SH;
}