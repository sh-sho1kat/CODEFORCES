///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-10-09 20:57:17
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
        bool flag = true, fun = false, fl = false;
        ll a, b, c, d, e, f;
        cin >> a >> b >> c >> d >> e >> f;
        double lc1, lc2, lb1, lb2, len1, len2, len3, dst;
        lc1 = sqrtl(c * c + d * d * 1.0);
        lc2 = sqrtl(e * e + f * f * 1.0);

        lb1 = sqrtl(((a - c) * (a - c)) + ((b - d) * (b - d) * 1.0));
        lb2 = sqrtl(((a - e) * (a - e)) + ((b - f) * (b - f) * 1.0));
        dst = sqrtl(((c - e) * (c - e)) + ((d - f) * (d - f) * 1.0));
        dst /= 2;

        // cout << lc1 << " " << lc2 << " " << lb1 << " " << lb2 << " " << dst << nl;
        double result;
        if (lc1 <= lc2 && lb1 <= lb2)
        {
            result = max(lc1, lb1);
            cout << fixed << setprecision(10) << result << nl;
        }
        else if (lc1 >= lc2 && lb1 >= lb2)
        {
            result = max(lc2, lb2);
            cout << fixed << setprecision(10) << result << nl;
        }
        else
        {
            len1 = min(lc1, lc2);
            len2 = min(lb1, lb2);
            len3 = max(len1, len2);
            if (len3 >= dst)
                cout << fixed << setprecision(10) << len3 << nl;
            else
                cout << fixed << setprecision(10) << dst << nl;
        }
    }
    return SH;
}