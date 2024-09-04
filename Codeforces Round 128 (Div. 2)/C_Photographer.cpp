///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2024-02-07 01:32:08
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
    t = 1;
    while (t--)
    {
        ll sum = 0, tmp = 0, res = 0, cnt = 0, ct = 0, ans = 0, mn = LONG_MAX, mx = 0;
        bool flag = true, fun = false, f = false;
        ll n, m;
        cin >> n >> m;
        ll a, b;
        cin >> a >> b;
        vpll v;
        for (ll i = 1; i <= n; i++)
        {
            ll p, q;    
            cin >> p >> q;
            p *= a;
            q *= b;
            v.push_back({p + q, i});
        }
        sort(v.begin(), v.end());
        vl result;
        for (ll i = 0; i < n; i++)
        {
            if (v[i].ff + sum > m)
                break;
            sum += v[i].ff;
            result.eb(v[i].ss);
        }
        cout << result.size() << nl;
        for (auto u : result)
            cout << u << " ";
        cout << nl;
    }
    return SH;
}