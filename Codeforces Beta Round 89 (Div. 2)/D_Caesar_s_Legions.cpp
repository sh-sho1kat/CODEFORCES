///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2024-01-03 12:54:56
 **/

#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define mod 100000000
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

ll k1, k2;

ll dp[105][105][15][15];

ll solve(ll a, ll b, ll p, ll q)
{
    if (a == 0 && b == 0)
        return 1;
    if (dp[a][b][p][q] != -1)
        return dp[a][b][p][q];
    ll way1 = 0, way2 = 0;
    if (a > 0 && p < k1)
        way1 = solve(a - 1, b, p + 1, 0);
    if (b > 0 && q < k2)
        way2 = solve(a, b - 1, 0, q + 1);

    return dp[a][b][p][q] = (way1 + way2) % mod;
}

int main()
{
    fastio;
    ll a, b;
    cin >> a >> b >> k1 >> k2;
    memset(dp, -1, sizeof(dp));
    ll ans = solve(a, b, 0, 0);
    cout << ans << nl;
    return SH;
}