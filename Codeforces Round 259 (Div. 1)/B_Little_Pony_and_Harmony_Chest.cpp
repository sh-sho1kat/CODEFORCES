#include <bits/stdc++.h>
using namespace std;

// 2025-05-03 13:08:05
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define mod 1000000007
#define inf (1LL << 62)
#define all(x) x.begin(), x.end()
#define eb push_back
#define ff first
#define ss second
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
#define dtob(bits, n) bitset<bits>(n).to_string()
#define btod(bin) stoll(bin, nullptr, 2)
#define ok cout << "Eureka" << nl
#define nl '\n'
#define SH 0
typedef long long ll;
typedef pair<ll, ll> pll;
typedef vector<ll> vl;
typedef vector<pll> vpll;

ll n;
ll a[105];
ll pd[65];
vl primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59};
ll dp[101][1 << 17];
ll ans[101][1 << 17];

ll func(ll pos, ll mask)
{
    if (pos >= n)
        return 0;
    if (dp[pos][mask] != -1)
        return dp[pos][mask];
    ll res = inf;
    for (ll i = 1; i <= 60; i++)
    {
        if ((pd[i] & mask) == 0)
        {
            ll tmp = func(pos + 1, mask | pd[i]) + abs(a[pos] - i);
            if (tmp < res)
            {
                ans[pos][mask] = i;
                res = tmp;
            }
        }
    }
    return dp[pos][mask] = res;
}

void print_path(ll pos, ll mask)
{
    if (pos >= n)
        return;
    cout << ans[pos][mask] << " ";
    print_path(pos + 1, mask | pd[ans[pos][mask]]);
}

int main()
{
    fastio;
    cin >> n;
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    memset(dp, -1, sizeof dp);
    for (ll i = 1; i <= 60; i++)
    {
        for (ll j = 0; j < 17; j++)
        {
            if (i % primes[j] == 0)
                pd[i] |= (1 << j);
        }
    }

    ll res = func(0, 0);
    print_path(0, 0);

    return SH;
}