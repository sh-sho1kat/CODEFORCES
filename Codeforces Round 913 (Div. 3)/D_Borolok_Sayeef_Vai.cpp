///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-12-14 13:10:08
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
        double a, b, c, d;
        cin >> a >> b >> c >> d;
        if (c > 90)
            c -= 90;
        else
            c = 90 - c;
        if (d > 90)
            d -= 90;
        else
            d = 90 - d;
        double alpha = acos(-1) * c / 180;
        double beta = acos(-1) * d / 180;
        // cout << alpha << " " << beta << " " << nl;
        double len = a * (sin(alpha) + sin(beta)) / sin(alpha + beta);
        if (c == 0 || d == 0)
            len = a;
        double result = a + b + b + len;
        cout << fixed << setprecision(4) << result << nl;
    }
    return SH;
}