///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2024-01-07 15:13:00
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

const ll N = 1e5 + 5;
ll a[N];
ll b[N];
ll dp[N][2];

ll func(ll pos, ll prev, ll n)
{
    if (pos == n + 1)
        return 0;
    if (dp[pos][prev] != -1)
        return dp[pos][prev];
    ll num = 0;
    if (prev)
    {
        if (a[pos - 1] < a[pos] - b[pos])
            num = func(pos + 1, 1, n) + 1;
        else if (a[pos] + b[pos] < a[pos + 1])
            num = func(pos + 1, 0, n) + 1;
        else
            num = func(pos + 1, 1, n);
    }
    else
    {
        if (a[pos - 1] + b[pos - 1] < a[pos] - b[pos])
            num = func(pos + 1, 1, n) + 1;
        else if (a[pos] + b[pos] < a[pos + 1])
            num = func(pos + 1, 0, n) + 1;
        else
            num = func(pos + 1, 1, n);
    }
    return dp[pos][prev] = num;
}

int main()
{
    fastio;
    ll n;
    cin >> n;
    memset(dp, -1, sizeof(dp));
    for (ll i = 1; i <= n; i++)
        cin >> a[i] >> b[i];
    a[0] = -inf;
    a[n + 1] = inf;

    ll ans = func(1, 1, n);
    cout << ans << nl;

    return SH;
}