///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-07-18 23:01:11
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
        char s[5][5];
        for (ll i = 0; i < 3; i++)
        {
            for (ll j = 0; j < 3; j++)
            {
                cin >> s[i][j];
            }
        }
        vector<char> v;
        v.eb('+');
        v.eb('X');
        v.eb('O');
        string answer = "DRAW";
        for (auto p : v)
        {
            for (ll i = 0; i < 3; i++)
            {
                for (ll j = 0; j < 3; j++)
                {
                    if (s[i][j] == p)
                        cnt++;
                }
                if (cnt == 3)
                    answer = p;
                cnt = 0;
                for (ll j = 0; j < 3; j++)
                {
                    if (s[j][i] == p)
                        cnt++;
                }
                if (cnt == 3)
                    answer = p;
                cnt = 0;
            }
            if ((s[0][0] == p && s[1][1] == p && s[2][2] == p) || (s[0][2] == p && s[1][1] == p && s[2][0] == p))
                answer = p;
        }

        cout << answer << nl;
    }
    return SH;
}