///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2024-03-22 14:45:28
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

ll search_pos(ll val, ll pos, ll arr[], ll n)
{
    ll lo = pos, hi = n + 1;
    while (lo < hi)
    {
        ll mid = (hi + lo) >> 1;
        if (arr[mid] - arr[pos] <= val)
        {
            lo = mid + 1;
        }
        else
        {
            hi = mid;
        }
    }
    return lo;
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
        ll a[n + 5], b[n + 5], freq[n + 5] = {}, pref[n + 5] = {}, result[n + 5] = {};
        for (ll i = 1; i <= n; i++)
            cin >> a[i];
        for (ll i = 1; i <= n; i++)
            cin >> b[i];
        for (ll i = 1; i <= n; i++)
            pref[i] += b[i] + pref[i - 1];
        for (ll i = 1; i <= n; i++)
        {
            ll idx = search_pos(a[i], i - 1, pref, n);
            tmp = a[i] - pref[idx - 1] + pref[i - 1];
            result[idx] += tmp;
            freq[i]++;
            freq[idx]--;
        }
        for (ll i = 1; i <= n; i++)
        {
            freq[i] += freq[i - 1];
            result[i] += freq[i] * b[i];
            cout << result[i] << " ";
        }
        cout << nl;
    }
    return SH;
}