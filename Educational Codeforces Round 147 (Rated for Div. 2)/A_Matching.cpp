///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-06-29 18:34:16
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
        string s;
        cin >> s;
        for (ll i = 0; i < s.size(); i++)
        {
            if (s[i] == '?')
                cnt++;
        }
        for (ll i = 0; i < s.size(); i++)
        {
            if (s[i] == '?')
                ct++;
            else
                break;
        }
        ll k = 1;
        for (ll i = 1; i <= cnt; i++)
        {
            k *= 10;
        }
        ll p = 1;
        for (ll i = 1; i < cnt; i++)
        {
            p *= 10;
        }
        if (s[0] == '0')
            ans = 0;
        else if (s[0] == '?')
            ans = k - p;
        else
            ans = k;

        cout << ans << nl;
    }
    return SH;
}