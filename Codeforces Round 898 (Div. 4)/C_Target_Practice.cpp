///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-09-21 20:48:04
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
        char a[15][15];
        for (ll i = 1; i <= 10; i++)
        {
            for (ll j = 1; j <= 10; j++)
            {
                cin >> a[i][j];
            }
        }
        ll p1 = 0, p2 = 0, p3 = 0, p4 = 0, p5 = 0;
        for (ll i = 1; i <= 10; i++)
        {
            if (a[i][1] == 'X')
            {
                a[i][1] = '.';
                p1++;
            }
            if (a[i][10] == 'X')
            {
                a[i][10] = '.';
                p1++;
            }
            if (a[1][i] == 'X')
            {
                a[1][i] = '.';
                p1++;
            }
            if (a[10][i] == 'X')
            {
                a[10][i] = '.';
                p1++;
            }
        }

        for (ll i = 2; i <= 9; i++)
        {
            if (a[i][2] == 'X')
            {
                a[i][2] = '.';
                p1 += 2;
            }
            if (a[i][9] == 'X')
            {
                a[i][9] = '.';
                p1 += 2;
            }
            if (a[2][i] == 'X')
            {
                a[2][i] = '.';
                p1 += 2;
            }
            if (a[9][i] == 'X')
            {
                a[9][i] = '.';
                p1 += 2;
            }
        }
        for (ll i = 3; i <= 8; i++)
        {
            if (a[i][3] == 'X')
            {
                a[i][3] = '.';
                p1 += 3;
            }
            if (a[i][8] == 'X')
            {
                a[i][8] = '.';
                p1 += 3;
            }
            if (a[8][i] == 'X')
            {
                a[8][i] = '.';
                p1 += 3;
            }
            if (a[3][i] == 'X')
            {
                a[3][i] = '.';
                p1 += 3;
            }
        }

        for (ll i = 4; i <= 7; i++)
        {
            if (a[i][4] == 'X')
            {
                a[i][4] = '.';
                p1 += 4;
            }
            if (a[i][7] == 'X')
            {
                a[i][7] = '.';
                p1 += 4;
            }
            if (a[4][i] == 'X')
            {
                a[4][i] = '.';
                p1 += 4;
            }
            if (a[7][i] == 'X')
            {
                a[7][i] = '.';
                p1 += 4;
            }
        }

        for (ll i = 5; i <= 6; i++)
        {
            if (a[i][5] == 'X')
            {
                a[i][5] = '.';
                p1 += 5;
            }
            if (a[i][6] == 'X')
            {
                a[i][6] = '.';
                p1 += 5;
            }
            if (a[5][i] == 'X')
            {
                a[5][i] = '.';
                p1 += 5;
            }
            if (a[6][i] == 'X')
            {
                a[6][i] = '.';
                p1 += 5;
            }
        }

        cout << p1 + p2 + p3 + p4 + p5 << nl;
    }
    return SH;
}