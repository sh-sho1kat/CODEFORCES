///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-10-01 21:20:09
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
    ll n, k;
    cin >> n >> k;
    ll a[n + 5];
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    ll ans = 0;
    ll l = 0, r = 0;
    ll sum = 0;
    while (r < n)
    {
        if (sum <= k)
        {
            sum += a[r];
            r++;
        }
        while (sum > k)
        {
            sum -= a[l];
            l++;
        }
        ans = max(ans, (r - l));
    }
    cout << ans << nl;
    return SH;
}