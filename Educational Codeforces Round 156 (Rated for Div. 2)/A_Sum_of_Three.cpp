///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-10-09 20:36:37
 **/

#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define mod 1000000007
#define inf 1e18
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
        ll a = 1, b = 2, c = 4, d = 5;
        if (n <= 6)
            no;
        else if ((n - a - b) % 3 != 0 && (n - a - b) != a && (n - a - b) != b)
        {
            yes;
            cout << a << " " << b << " " << n - a - b << nl;
        }
        else if ((n - a - c) % 3 != 0 && (n - a - c) != c && (n - a - c) != a)
        {
            yes;
            cout << a << " " << c << " " << n - a - c << nl;
        }
        else if (((n - d - c) % 3 != 0) && (n - d - c) != c && (n - d - c) != d)
        {
            yes;
            cout << c << " " << d << " " << n - c - d << nl;
        }
        else
            no;
    }
    return SH;
}