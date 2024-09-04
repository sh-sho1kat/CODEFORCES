///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-12-05 20:53:28
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
        vector<char> v;
        ll cb = 0, cB = 0;
        for (ll i = s.size() - 1; i >= 0; i--)
        {
            if (s[i] == 'B')
                cB++;
            if (s[i] == 'b')
                cb++;
            if (s[i] >= 'A' && s[i] <= 'Z' && s[i] != 'B')
            {
                if (!cB)
                {
                    v.push_back(s[i]);
                }
                else
                {
                    cB--;
                }
            }
            if (s[i] >= 'a' && s[i] <= 'z' && s[i] != 'b' && s[i] != 'B')
            {
                if (!cb)
                {
                    v.push_back(s[i]);
                }
                else
                {
                    cb--;
                }
            }
        }
        for (ll i = v.size() - 1; i >= 0; i--)
            cout << v[i];
        cout << nl;
    }
    return SH;
}