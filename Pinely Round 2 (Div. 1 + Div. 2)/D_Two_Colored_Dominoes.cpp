///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-09-27 03:27:17
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
        ll n, m;
        cin >> n >> m;
        char a[n + 5][m + 5];
        for (ll i = 1; i <= n; i++)
        {
            for (ll j = 1; j <= m; j++)
            {
                cin >> a[i][j];
            }
        }
        for (ll i = 1; i <= n; i++)
        {
            cnt = 0;
            for (ll j = 1; j <= m; j++)
            {
                if (a[i][j] != '.')
                    cnt++;
            }
            if (cnt & 1)
                flag = false;
        }
        for (ll i = 1; i <= m; i++)
        {
            cnt = 0;
            for (ll j = 1; j <= n; j++)
            {
                if (a[j][i] != '.')
                    cnt++;
            }
            if (cnt & 1)
                flag = false;
        }
        if (flag)
        {
            for (ll i = 1; i <= m; i++)
            {
                cnt = 0, sum = 0, tmp = 0;
                ll tmpW = 0, tmpB = 0;
                for (ll j = 1; j <= n; j++)
                {
                    if (a[j][i] == 'R')
                    {
                        if (a[j][i - 1] == 'W')
                        {
                            a[j][i] = 'B';
                            tmpB++;
                        }
                        else
                        {
                            a[j][i] = 'W';
                            tmpW++;
                        }
                    }
                    else if (a[j][i] == 'L')
                    {
                        tmp++;
                    }
                }
                // cout << sum << " " << tmp << " " << tmpB << " " << tmpW << nl;
                sum = tmp + tmpB + tmpW;
                tmpB = (sum / 2) - tmpB;
                tmpW = (sum / 2) - tmpW;
                for (ll j = 1; j <= n; j++)
                {
                    if (a[j][i] == 'L')
                    {
                        if (tmpW)
                        {
                            a[j][i] = 'W';
                            tmpW--;
                        }
                        else
                        {
                            a[j][i] = 'B';
                            tmpB--;
                        }
                    }
                }
            }

            for (ll i = 1; i <= n; i++)
            {
                cnt = 0, sum = 0, tmp = 0;
                ll tmpW = 0, tmpB = 0;
                for (ll j = 1; j <= m; j++)
                {
                    if (a[i][j] == 'D')
                    {
                        if (a[i - 1][j] == 'W')
                        {
                            a[i][j] = 'B';
                            tmpB++;
                        }
                        else
                        {
                            a[i][j] = 'W';
                            tmpW++;
                        }
                    }
                    else if (a[i][j] == 'U')
                    {
                        tmp++;
                    }
                }
                sum = tmp + tmpB + tmpW;
                tmpB = (sum / 2) - tmpB;
                tmpW = (sum / 2) - tmpW;
                for (ll j = 1; j <= m; j++)
                {
                    if (a[i][j] == 'U')
                    {
                        if (tmpW)
                        {
                            a[i][j] = 'W';
                            tmpW--;
                        }
                        else
                        {
                            a[i][j] = 'B';
                            tmpB--;
                        }
                    }
                }
            }
            for (ll i = 1; i <= n; i++)
            {
                for (ll j = 1; j <= m; j++)
                {
                    cout << a[i][j];
                }
                cout << nl;
            }
        }
        else
            cout << -1 << nl;
    }
    return SH;
}