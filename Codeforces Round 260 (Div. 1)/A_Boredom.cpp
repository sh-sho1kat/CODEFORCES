///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2024-01-02 00:23:22
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

ll dp[100005][1];

ll maxpoint(ll a[], ll n, ll pos, ll prev)
{
    if (pos == n)
        return 0;
    if (dp[pos][prev] != -1)
        return dp[pos][prev];
    ll nibo = 0, nibona = 0;
    if (prev == 0)
        nibo = maxpoint(a, n, pos + 1, 1) + a[pos] * pos;
    nibona = maxpoint(a, n, pos + 1, 0);
    return dp[pos][prev] = max(nibo, nibona);
}

int main()
{
    fastio;
    ll n;
    cin >> n;
    ll a[1000010] = {};
    ll mx = 0;
    for (ll i = 0; i < n; i++)
    {
        ll p;
        cin >> p;
        a[p]++;
        mx = max(p, mx);
    }
    memset(dp, -1, sizeof(dp));

    ll ans = maxpoint(a, mx + 1, 0, 0);
    cout << ans << nl;

    return SH;
}