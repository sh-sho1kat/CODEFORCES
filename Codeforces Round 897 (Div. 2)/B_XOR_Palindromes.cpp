///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-09-12 02:36:14
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
        ll n;
        cin >> n;
        string s;
        cin >> s;
        ll l = 0, r = n - 1;
        while (l < r)
        {
            if (s[l] == s[r])
                cnt += 2;
            else
                sum++;
            l++;
            r--;
        }
        for (ll i = 0; i < n; i++)
            s[i] = '0';
        s += '0';
        if (n & 1)
        {
            for (ll i = sum; i <= sum + cnt + 1; i++)
            {
                s[i] = '1';
            }
        }
        else
        {
            for (ll i = sum; i <= sum + cnt; i += 2)
            {
                s[i] = '1';
            }
        }
        cout << s << nl;
    }
    return SH;
}