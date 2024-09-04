///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2024-01-26 11:42:11
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

ll a[2005];
ll n;
ll result;

ll maxpotion(ll pos, ll cnt)
{
    if (pos == n)
    {
        result = max(result, cnt);
        return 0;
    }
    ll sum = 0, sum1 = inf, sum2 = inf;
    sum1 = maxpotion(pos + 1, cnt);
    if (sum1 + a[pos] >= 0)
        sum2 = maxpotion(pos + 1, cnt + 1) + a[pos];
    sum = min(sum1, sum2);
    return sum;
}

int main()
{
    fastio;
    cin >> n;
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    ll ans = maxpotion(0, 0);
    cout << result << nl;

    return SH;
}