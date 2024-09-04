///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2024-03-15 23:53:15
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
        ll n;
        cin >> n;
        vl a(n);
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        if (is_sorted(a.begin(), a.end()))
            fun = true;
        for (ll tt = 1; tt <= 10; tt++)
        {
            vl v;
            f = false;
            for (ll i = 1; i < a.size(); i++)
            {
                if (a[i] < a[i - 1])
                {
                    ll p = a[i - 1];
                    for (ll j = 0; j < i - 1; j++)
                    {
                        v.eb(a[j]);
                    }
                    v.eb(p / 10);
                    v.eb(p % 10);
                    for (ll j = i; j < a.size(); j++)
                    {
                        v.eb(a[j]);
                    }
                    f = true;
                    break;
                }
            }
            if (!f)
                v = a;
            if (is_sorted(v.begin(), v.end()))
                fun = true;
            a = v;
        }
        fun ? yes : no;
    }
    return SH;
}