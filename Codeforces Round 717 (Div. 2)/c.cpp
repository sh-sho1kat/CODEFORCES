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
bool dp[200005];
ll gc;
ll sum;
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
    dp[0] = 1;
    for (ll i = 1; i <= n; i++)
    {
        for (ll j = 200000; j >= 0; j--)
            if (j >= a[i])
                dp[j] |= dp[j - a[i]];
    }
    if (sum & 1)
        cout << 0 << nl;
    else
    {
        if (!dp[sum >> 1])
            cout << 0 << nl;
        else
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
    }
    return SH;
}