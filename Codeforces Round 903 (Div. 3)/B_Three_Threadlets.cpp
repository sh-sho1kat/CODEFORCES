///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-10-16 11:44:54
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
        ll a[5];
        cin >> a[0] >> a[1] >> a[2];
        sort(a, a + 3);
        ll p = a[0], q = a[1], r = a[2];
        if (q % p || r % p)
            no;
        else
        {
            if (p == q)
            {
                if (r / p <= 4)
                    yes;
                else
                    no;
            }
            else if (q == r)
            {
                if (q / p <= 2)
                    yes;
                else
                    no;
            }
            else if (q < r)
            {
                if (r / p <= 3 && q / p <= 2)
                    yes;
                else
                    no;
            }
            else
                no;
        }
    }
    return SH;
}