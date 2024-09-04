///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-06-30 22:03:50
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
        ll n, k, x;
        cin >> n >> k >> x;
        if (x != 1)
        {
            yes;
            cout << n << nl;
            for (ll i = 1; i <= n; i++)
                cout << 1 << " ";
            cout << nl;
        }
        else if (!(n & 1) && k > 1)
        {
            yes;
            cout << n / 2 << nl;
            for (ll i = 1; 2 * i <= n; i++)
                cout << 2 << " ";
            cout << nl;
        }
        else if (n >= 3 && k > 2)
        {
            yes;
            cout << n / 2 << nl;
            for (ll i = 2; 2 * i < n; i++)
                cout << 2 << " ";
            cout << 3 << nl;
        }
        else
            no;
    }
    return SH;
}