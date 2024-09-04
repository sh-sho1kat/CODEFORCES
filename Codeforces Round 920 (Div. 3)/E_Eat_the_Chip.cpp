///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2024-01-25 14:28:27
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
        bool flag = true, fun = false;
        ll a, b, c, d, e, f;
        cin >> a >> b >> c >> d >> e >> f;
        ll xdif = e - c;
        if (xdif <= 0)
        {
            cout << "Draw" << nl;
        }
        else if (xdif & 1)
        {
            ll ydif = f - d;
            if (abs(ydif) <= 1)
            {
                cout << "Alice" << nl;
                continue;
            }
            if (d > f)
            {
                if (d - 1 <= (xdif + 1) / 2)
                    cout << "Alice" << nl;
                else
                    cout << "Draw" << nl;
            }
            else
            {
                if ((b - d) <= (xdif + 1) / 2)
                    cout << "Alice" << nl;
                else
                    cout << "Draw" << nl;
            }
        }
        else
        {
            ll ydif = f - d;
            if (abs(ydif) == 0)
            {
                cout << "Bob" << nl;
                continue;
            }
            if (f > d)
            {
                if (f - 1 <= (xdif / 2))
                    cout << "Bob" << nl;
                else
                    cout << "Draw" << nl;
            }
            else
            {
                if ((b - f) <= (xdif / 2))
                    cout << "Bob" << nl;
                else
                    cout << "Draw" << nl;
            }
        }
    }
    return SH;
}