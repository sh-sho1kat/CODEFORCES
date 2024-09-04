///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-06-03 21:04:18
 **/

#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define mod 1000000007
#define all(x) x.begin(), x.end()
#define eb emplace_back
#define pf push_front
#define MP make_pair
#define ff first
#define ss second
#define fr(s, n) for (ll i = s; i < n; i++)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define dtob(p, n) bitset<p>(n).to_string()
#define btod(bin) stoi(bin, nullptr, 2)
#define nl '\n'
#define SH 0
typedef long long ll;
typedef pair<ll, ll> pll;
typedef vector<ll> vl;
typedef vector<pll> vpll;

#define ok cout << "Eureka" << nl
#define ap(arr, n)             \
    for (ll i = 0; i < n; i++) \
        cout << arr[i] << " "; \
    cout << nl;

bool cmp(const pair<ll, ll> &p1, const pair<ll, ll> &p2)
{
    if (p1.ff == p2.ff)
        return p1.ss > p2.ss;
    return p1.ff <= p2.ff;
}

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
        vpll v;
        for (ll i = 1; i <= n; i++)
        {
            ll a, b;
            cin >> a >> b;
            v.push_back({a, b});
        }
        sort(v.begin(), v.end(), cmp);

        // for (auto u : v)
        //     cout << u.ff << " " << u.ss << nl;
        // cout << nl;
        ll on = 0;
        ll br = 0;
        map<ll, ll> mp;
        for (ll i = 0; i < n; i++)
        {

            if (v[i].ff == on)
            {
                continue;
            }
            // cout << 1 << " " << v[i].ff << " " << on << " " << nl;
            tmp = on;
            on -= mp[on];
            mp[tmp] = 0;
            // cout << 2 << " " << v[i].ff << " " << on << " " << nl;
            if (v[i].ff > on)
            {
                // ok;
                sum += v[i].ss;
                on++;
                mp[v[i].ff]++;
            }
            // cout << 3 << " " << v[i].ff << " " << on << " " << nl;
            // cout << i << " " << sum << nl;
        }
        cout << sum << nl;
        // cout << nl;
    }
    return SH;
}