///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-05-06 20:46:04
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
        ll sum = 0, tmp = 0, res = 0, cnt = 0, ct = 0, ans = 0, mn = 0, mx = LONG_MAX;
        bool flag = true, fun = false, f = false;
        ll n;
        cin >> n;
        ll b1 = LONG_MAX;
        ll b2 = LONG_MAX;
        while (n--)
        {
            ll m;
            cin >> m;
            char a, b;
            cin >> a >> b;
            if (a == '1')
            {
                b1 = min(b1, m);
            }
            if (b == '1')
            {
                b2 = min(b2, m);
            }
            if (a == '1' && b == '1')
            {
                mx = min(mx, m);
            }
        }
        mx = min(mx, (b1 + b2));
        if (b1 == LONG_MAX || b2 == LONG_MAX)
            cout << -1 << nl;
        else
            cout << mx << nl;
    }
    return SH;
}