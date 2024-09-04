///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2024-03-28 14:21:27
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

ll subarray_sum(ll a[], ll start, ll end)
{
    // pass n-1
    ll ans = 0, mx = 0;
    for (ll i = start; i <= end; i++)
    {
        mx = max(mx + a[i], a[i]);
        ans = max(ans, mx);
        mx = max(ll(0), mx);
    }
    return ans;
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
        ll n, k;
        cin >> n >> k;
        ll a[n + 5];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            res += a[i];
        }
        sum = subarray_sum(a, 0, n - 1);
        while (k--)
        {
            (res += sum) %= mod;
            (sum *= 2) %= mod;
        }
        res = (res + mod) % mod;
        cout << res << nl;
    }
    return SH;
}