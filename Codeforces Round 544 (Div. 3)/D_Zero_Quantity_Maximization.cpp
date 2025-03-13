#include <bits/stdc++.h>
using namespace std;

// 2024-12-18 18:19:53
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

int main()
{
    fastio;
    ll n;
    cin >> n;
    ll a[n + 5], b[n + 5];
    for (ll i = 1; i <= n; i++)
        cin >> a[i];

    for (ll i = 1; i <= n; i++)
        cin >> b[i];
    map<pll, ll> mp;
    ll res = 0;
    for (ll i = 1; i <= n; i++)
    {
        if (a[i] == 0 and b[i] == 0)
            res++;
        else if (a[i])
        {
            ll p = __gcd(a[i], b[i]);
            mp[{a[i] / p, b[i] / p}]++;
        }
    }
    ll mx = 0;
    for (auto u : mp)
    {
        mx = max(u.ss, mx);
    }
    res += mx;
    cout << res << nl;

    return SH;
}