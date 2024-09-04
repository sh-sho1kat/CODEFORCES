///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-04-10 02:32:39
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
    // fastio;
    ll t;
    cin >> t;
    while (t--)
    {
        cout.flush();
        ll sum = 0,
           tmp = 0, res = 0, cnt = 0, count = 0, ans = 0;
        bool flag = true, fun = false;
        ll a, b;
        ll r, c;
        cin >> r >> c;
        cout << "? 1 1" << nl;
        ll x, y, z;
        cin >> x;
        if (x == 0)
        {
            cout << "! 1 1" << nl;
            continue;
        }
        if (x >= r || x >= c)
        {
            a = 1 + x;
            if (x >= c)
            {
                cout << "? " << a << " " << 1 << nl;
                cin >> y;
                cout << "! " << a << " " << 1 + y << nl;
            }
            else
            {
                cout << "? " << 1 << " " << a << nl;
                cin >> y;
                cout << "! " << 1 + y << " " << a << nl;
            }
            continue;
        }
        x++;
        cout << "? " << x << " " << x << nl;
        cin >> y;
        cout << "? " << x << " " << x - 1 << nl;
        cin >> z;
        if (z < y)
            cout << "! " << x << " " << x - y << nl;
        else
            cout << "! " << x - y << " " << x << nl;
    }
    return SH;
}