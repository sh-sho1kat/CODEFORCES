///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2024-02-18 18:17:03
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
        ll n;
        cin >> n;
        char ch;
        cin >> ch;
        vector<pair<ll, char>> v, v1, v2, v3;
        for (ll i = 1; i <= 2 * n; i++)
        {
            ll p;
            char q;
            cin >> p >> q;
            if (q != ch)
                v.push_back({p, q});
            else
                v2.push_back({p, q});
        }
        sort(v.begin(), v.end());
        sort(v2.begin(), v2.end());
        for (ll i = 0; i < v.size(); i++)
        {
            for (ll j = 0; j < v.size(); j++)
            {
                // cout << v[i].ff << " " << v[j].ff << nl;
                if ((v[i].ss == v[j].ss) && (v[i].ff != v[j].ff) && v[i].ff != 0 && v[j].ff != 0)
                {
                    v1.push_back({min(v[i].ff, v[j].ff), v[i].ss});
                    v1.push_back({max(v[i].ff, v[j].ff), v[i].ss});
                    v[i].ff = 0;
                    v[j].ff = 0;
                }
            }
        }
        for (ll i = 0; i < v.size(); i++)
        {
            if (v[i].ff != 0)
            {
                cnt++;
                v3.push_back({v[i].ff, v[i].ss});
            }
        }
        if (cnt > v2.size())
        {
            cout << "IMPOSSIBLE" << nl;
            continue;
        }
        for (ll i = 0; i < v1.size(); i += 2)
        {
            cout << v1[i].ff << v1[i].ss << " " << v1[i + 1].ff << v1[i + 1].ss << nl;
        }
        for (ll i = 0; i < v3.size(); i++)
        {
            cout << v3[i].ff << v3[i].ss << " " << v2[i].ff << v2[i].ss << nl;
            tmp++;
        }
        for (ll i = tmp; i < v2.size(); i += 2)
        {
            cout << v2[i].ff << v2[i].ss << " " << v2[i + 1].ff << v2[i + 1].ss << nl;
        }
    }
    return SH;
}