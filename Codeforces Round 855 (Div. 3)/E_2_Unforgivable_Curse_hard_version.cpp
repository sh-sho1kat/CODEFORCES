///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-06-28 00:12:16
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
        ll n, k;
        cin >> n >> k;
        string s1, s2;
        cin >> s1 >> s2;
        map<char, ll> mp1, mp2;
        for (ll i = 0; i < n; i++)
        {
            mp1[s1[i]]++;
            mp2[s2[i]]++;
        }
        for (char i = 'a'; i <= 'z'; i++)
        {
            if (mp1[i] != mp2[i])
                flag = false;
        }
        if (flag)
        {
            for (ll i = 0; i < n; i++)
            {
                if ((i + k >= n) && (i - k < 0))
                {
                    if (s1[i] != s2[i])
                        flag = false;
                }
            }
        }
        flag ? yes : no;
    }
    return SH;
}