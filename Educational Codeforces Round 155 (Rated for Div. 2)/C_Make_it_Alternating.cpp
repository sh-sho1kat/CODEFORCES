///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-09-24 21:10:19
 **/

#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define mod 998244353
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
        string s;
        cin >> s;
        vl v;
        ll cnt0 = 0, cnt1 = 0;
        for (ll i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
            {
                cnt0++;
            }
            else
            {
                if (cnt0 > 1)
                {
                    v.eb(cnt0);
                }
                cnt0 = 0;
            }
            if (s[i] == '1')
            {
                cnt1++;
            }
            else
            {
                if (cnt1 > 1)
                {
                    v.eb(cnt1);
                }
                cnt1 = 0;
            }
        }
        if (cnt0 > 1)
        {
            v.eb(cnt0);
        }
        if (cnt1 > 1)
        {
            v.eb(cnt1);
        }
        ll fact = 1;
        sort(v.begin(), v.end());
        ll j = 1;
        ll factorial = 1;
        for (auto u : v)
        {
            fact *= u;
            fact %= mod;
            sum += u;
        }
        while ((sum - v.size()) >= j)
        {
            factorial *= j;
            factorial %= mod;
            j++;
        }
        fact = fact * factorial;
        fact %= mod;
        cout << (sum - v.size()) << " " << fact << nl;
    }
    return SH;
}