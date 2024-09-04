///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-12-09 22:15:48
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
        bool flag = true, fun = false;
        ll a, b, x, y;
        cin >> a >> b;
        ll c, d;
        cin >> c >> d;
        ll e, f;
        cin >> e >> f;
        ll dx[] = {1, 1, -1, -1};
        ll dy[] = {1, -1, 1, -1};
        map<pll, ll> mp;
        for (ll i = 0; i < 4; i++)
        {
            x = c + dx[i] * a;
            y = d + dy[i] * b;
            mp[{x, y}]++;
            x = e + dx[i] * a;
            y = f + dy[i] * b;
            mp[{x, y}]++;
            if (a != b)
            {
                x = c + dx[i] * b;
                y = d + dy[i] * a;
                mp[{x, y}]++;
                x = e + dx[i] * b;
                y = f + dy[i] * a;
                mp[{x, y}]++;
            }
        }
        for (auto u : mp)
        {
            u.ss--;
            ans += u.ss;
        }
        cout << ans << nl;
    }

    vector<vector<ll>> v[4];
    vl v1 = {1, 2, 3};
    v[0].push_back(v1);
    for (auto u : v[0])
    {
        for (auto c : u)
            cout << c << " ";
    }
    return SH;
}