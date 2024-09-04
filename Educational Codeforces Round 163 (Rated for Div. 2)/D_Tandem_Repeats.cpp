///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2024-03-17 12:20:26
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
#define dtob(bits, n) bitset<bits>(n).to_string()
#define btod(bin) stoll(bin, nullptr, 2)
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
        string s;
        cin >> s;
        ll len = s.size();
        for (int lth = len / 2; lth >= 1; lth--)
        {
            for (int i = 0; i + 2 * lth - 1 < len; i++)
            {
                flag = true;
                for (int j = i; j < i + lth; j++)
                {
                    if (s[j] != '?' && s[j + lth] != '?' && s[j] != s[j + lth])
                    {
                        flag = false;
                        break;
                    }
                }
                if (flag)
                {
                    res = lth;
                    break;
                }
            }
            if (res)
                break;
        }
        cout << 2 * res << nl;
    }
    return SH;
}