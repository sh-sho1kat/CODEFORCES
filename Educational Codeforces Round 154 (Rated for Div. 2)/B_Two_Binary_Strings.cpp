///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-08-31 21:07:15
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
        string s1, s2;
        cin >> s1 >> s2;
        flag = false;
        f = true;
        ll tmp1 = 0;
        for (ll i = 0; i < s1.size(); i++)
        {
            if (s1[i] != s2[i])
            {
                flag = true;
            }
            if (s1[i] == '1' && s2[i] == '1' && !flag)
            {
                fun = true;
            }
            if (s1[i] == '0' && s2[i] == '0' && flag)
            {
                tmp = i;
                flag = false;
            }
        }
        if (fun || !flag)
        {
            yes;
        }
        else
            no;
    }
    return SH;
}