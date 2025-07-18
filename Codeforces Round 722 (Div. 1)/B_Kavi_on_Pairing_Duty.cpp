#include <bits/stdc++.h>
using namespace std;

// 2025-04-18 01:12:57
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define mod 998244353
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

const int N = 1e6 + 5;
ll BIT[N];

ll LeftmostSetBit(ll pos)
{
    return pos & -pos;
}

void update(ll pos, ll val)
{
    while (pos <= N)
    {
        BIT[pos] += val % mod;
        pos += LeftmostSetBit(pos);
    }
}

ll query(ll pos)
{
    ll sum = 0;
    while (pos > 0)
    {
        sum += BIT[pos];
        sum %= mod;
        pos -= LeftmostSetBit(pos);
    }
    return sum % mod;
}

void reset()
{
    for (ll i = 0; i < N; i++)
        BIT[i] = 0;
}

int main()
{
    fastio;
    ll n;
    cin >> n;
    ll dp[n + 5];
    dp[1] = 1;
    ll a[n + 5] = {};
    ll p = n * 2;
    for (ll i = 2; i <= p; i += 2)
    {
        for (ll j = i; j <= p; j += i)
        {
            a[j / 2]++;
        }
    }
    update(1, 1);
    for (ll i = 2; i <= n; i++)
    {
        dp[i] = a[i];
        dp[i] += query(i - 1);
        dp[i] %= mod;
        update(i, dp[i]);
    }
    cout << dp[n] << nl;
    return SH;
}