///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-12-03 04:40:20
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
        ll arr[5][5];
        cnt = 1;
        for (ll i = 1; i <= 3; i++)
        {
            for (ll j = 1; j <= 3; j++)
            {
                arr[i][j] = cnt;
                if (cnt == a || cnt == b)
                    arr[i][j] = -1;
                if (cnt == c || cnt == d)
                    arr[i][j] = 0;
                cnt++;
            }
        }
        // for (ll i = 1; i <= 3; i++)
        // {
        //     for (ll j = 1; j <= 3; j++)
        //     {
        //         cout << arr[i][j] << " ";
        //     }
        //     cout << nl;
        // }
        ll cx1 = 0, cx2 = 0, cx3 = 0, cx4 = 0;
        ll co1 = 0, co2 = 0, co3 = 0, co4 = 0;
        for (ll i = 1; i <= 3; i++)
        {
            if (arr[2][i] == -1)
                cx1++;
            if (arr[2][i] == 0)
                co1++;
            if (arr[i][2] == -1)
                cx2++;
            if (arr[i][2] == 0)
                co2++;
            if (arr[i][i] == -1)
                cx3++;
            if (arr[i][i] == 0)
                co3++;
            if (arr[i][3 - i + 1] == -1)
                cx4++;
            if (arr[i][3 - i + 1] == 0)
                co4++;
        }
        if ((cx1 == 2 && co1 == 0) || (cx2 == 2 && co2 == 0) || (cx3 == 2 && co3 == 0) || (cx4 == 2 && co4 == 0))
            yes;
        else
            no;
    }
    return SH;
}