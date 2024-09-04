///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-12-18 20:53:19
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
        ll n = s.size();
        if (n == 1)
        {
            cout << 1 << nl;
            continue;
        }
        ll cz = 0, co = 0;
        for (ll i = 0; i < n; i++)
        {
            if (s[i] == '1')
                co++;
            else
                cz++;
        }
        if (cz < co)
        {
            for (ll i = 0; i < n; i++)
            {
                if (s[i] == '1')
                {
                    if (cz == 0)
                    {
                        tmp = i - 1;
                        break;
                    }
                    cz--;
                }
                tmp = i;
            }
        }
        else
        {
            for (ll i = 0; i < n; i++)
            {
                if (s[i] == '0')
                {
                    if (co == 0)
                    {
                        tmp = i - 1;
                        break;
                    }
                    co--;
                }
                tmp = i;
            }
        }
        cout << n - tmp - 1 << nl;
        // cout << tmp << nl;
    }
    return SH;
}