///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-08-24 20:37:26
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
        ll m, n;
        cin >> m >> n;
        char a[m + 5][n + 5];
        for (ll i = 1; i <= m; i++)
        {
            for (ll j = 1; j <= n; j++)
                cin >> a[i][j];
        }
        string s = "vika";
        ll k = 0;
        for (ll i = 1; i <= n; i++)
        {
            flag = false;
            for (ll j = 1; j <= m; j++)
            {
                // cout << a[j][i];
                if (a[j][i] == s[k])
                {
                    k++;
                    flag = true;
                    break;
                }
            }
            if (k > 3)
                fun = true;
            // cout << nl;
        }
        fun ? yes : no;
    }
    return SH;
}