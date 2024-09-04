///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2024-04-02 14:46:59
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
        ll n, k, y;
        cin >> n >> k >> y;
        map<ll, ll> mp;
        for (ll i = 0; i < k; i++)
        {
            ll p;
            cin >> p;
            mp[p]++;
        }
        ans = k - 2;
        for (auto u : mp)
        {
            if (!mp[u.ff - 1] and mp[u.ff - 2])
                ans++;
        }
        if (!mp[n] and mp[n - 1] and mp[1])
            ans++;
        if (!mp[1] and mp[n] and mp[2])
            ans++;
        cout << ans << nl;
    }
    return SH;
}