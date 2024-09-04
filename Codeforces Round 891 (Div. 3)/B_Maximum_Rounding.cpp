///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-08-07 20:52:51
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
        string s, p;
        cin >> p;
        s = "0";
        s += p;
        tmp = s.size();
        for (ll i = s.size() - 1; i >= 0; i--)
        {
            // cout << s[i] - '0' << nl;
            if ((s[i] - '0') >= 5)
            {
                cnt++;
                s[i] = '0';
                tmp = i;
            }
            else
            {
                if (cnt)
                {
                    ll tt = s[i] - '0';
                    tt++;
                    char ttt = tt + '0';
                    s[i] = ttt;
                    if (tt >= 5)
                    {
                        cnt++;
                        tmp = i;
                    }
                    else
                        cnt = 0;
                }
            }
        }
        for (ll i = tmp; i < s.size(); i++)
        {
            s[i] = '0';
        }
        if (s[0] == '0')
            s.erase(s.begin());
        cout << s << nl;
    }
    return SH;
}