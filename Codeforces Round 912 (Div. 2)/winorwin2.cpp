///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-12-02 00:47:56
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
    t = 1;
    while (t--)
    {
        ll sum = 0, tmp = 0, res = 0, cnt = 0, ct = 0, ans = 0, mn = LONG_MAX, mx = 0;
        bool flag = true, fun = false, f = false;
        ll a, b, c, d;
        cin >> a >> b >> c >> d;

        if (b == 6 and c != 4 && d != 4)
            yes;
        else if (b == 4 and c != 6 && d != 6)
            yes;
        else if (b == 2 and c != 8 && d != 8)
            yes;
        else if (b == 8 and c != 2 && d != 2)
            yes;
        else if (b == 1 and c != 9 && d != 9)
            yes;
        else if (b == 9 and c != 1 && d != 1)
            yes;
        else if (b == 3 and c != 7 && d != 7)
            yes;
        else if (b == 7 and c != 3 && d != 3)
            yes;
        else
            no;
    }
    return SH;
}