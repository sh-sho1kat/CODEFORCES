///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-09-18 14:36:44
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
        ll n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        if (k & 1)
        {
            string a, b;
            for (ll i = 0; i < s.size(); i++)
            {
                if (i & 1)
                    a.push_back(s[i]);
                else
                    b.push_back(s[i]);
            }
            sort(all(a));
            sort(all(b));
            ll j = 0, k = 0;
            for (ll i = 0; i < n; i++)
            {
                if (i & 1)
                {
                    s[i] = a[j];
                    j++;
                }
                else
                {
                    s[i] = b[k];
                    k++;
                }
            }
        }
        else
        {
            sort(s.begin(), s.end());
        }
        cout << s << nl;
    }
    return SH;
}