///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-11-09 22:13:14
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

ll a[100005];
ll dp[100005][5];

ll rest(ll length, ll pos, ll prev)
{
    if (pos >= length)
        return 0;
    if (dp[pos][prev] != -1)
        return dp[pos][prev];
    if (a[pos] == 0)
        dp[pos][prev] = rest(length, pos + 1, 0) + 1;
    else if (a[pos] == 1)
    {
        if (a[pos] == prev)
            dp[pos][prev] = rest(length, pos + 1, 0) + 1;
        else
            dp[pos][prev] = rest(length, pos + 1, 1);
    }
    else if (a[pos] == 2)
    {
        if (a[pos] == prev)
            dp[pos][prev] = rest(length, pos + 1, 0) + 1;
        else
            dp[pos][prev] = rest(length, pos + 1, 2);
    }
    else if (a[pos] == 3)
    {
        if (prev == 1)
            dp[pos][prev] = rest(length, pos + 1, 2);
        else if (prev == 2)
            dp[pos][prev] = rest(length, pos + 1, 1);
        else
            dp[pos][prev] = min(rest(length, pos + 1, 2), rest(length, pos + 1, 1));
    }
    return dp[pos][prev];
}

int main()
{
    fastio;
    ll n;
    cin >> n;
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    memset(dp, -1, sizeof dp);
    ll ans = rest(n, 0, 0);
    cout << ans << nl;
    return SH;
}