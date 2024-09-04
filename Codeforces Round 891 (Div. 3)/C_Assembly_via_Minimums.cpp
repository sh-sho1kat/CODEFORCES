///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-08-07 21:20:10
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
        ll n;
        cin >> n;
        vl v;
        map<ll, ll> mp;
        vpll vs;
        for (ll i = 0; 2 * i < (n * (n - 1)); i++)
        {
            ll p;
            cin >> p;
            v.eb(p);
            mp[p]++;
        }
        sort(v.begin(), v.end(), greater<ll>());
        for (auto u : mp)
        {
            vs.push_back({u.ff, u.ss});
        }
        sort(vs.begin(), vs.end(), greater<pll>());
        // for (auto u : vs)
        //     cout << u.ff << " " << u.ss << nl;
        vl a;
        for (auto u : vs)
        {
            if (u.ss == 1)
            {
                a.eb(u.ff);
                a.eb(u.ff);
                cnt = 2;
            }
            else
            {
                ll tt = 0;
                while (tt <= u.ss)
                {
                    if (tt == u.ss)
                        break;
                    a.eb(u.ff);
                    tt += cnt;
                    cnt++;
                }
            }
        }
        for (auto u : a)
            cout << u << " ";
        cout << nl;
    }
    return SH;
}