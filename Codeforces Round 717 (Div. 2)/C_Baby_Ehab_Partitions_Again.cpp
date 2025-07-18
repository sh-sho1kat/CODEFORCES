#include <bits/stdc++.h>
using namespace std;

// 2025-03-29 17:17:38
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
ll dp[200005][105];
ll gc;
ll sum;

ll func(ll pos, ll tot)
{
    if (pos > n)
    {
        if (tot * 2 == sum)
            return true;
        return false;
    }
    if (dp[tot][pos] != -1)
        return dp[tot][pos];
    bool res = false;
    res = func(pos + 1, tot + a[pos]) | func(pos + 1, tot);
    return dp[tot][pos] = res;
}
int main()
{
    fastio;
    cin >> n;
    for (ll i = 1; i <= n; i++)
    {
        cin >> a[i];
        sum += a[i];
        gc = __gcd(gc, a[i]);
    }
    memset(dp, -1, sizeof dp);
    if (func(1, 0))
    {
        cout << 1 << nl;
        ll tmp = 0;
        for (ll i = 1; i <= n; i++)
        {
            a[i] /= gc;
            if (a[i] & 1)
                tmp = i;
        }
        cout << tmp << nl;
    }
    else
        cout << 0 << nl;
    return SH;
}