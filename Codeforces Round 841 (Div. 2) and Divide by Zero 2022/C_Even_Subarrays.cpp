#include <bits/stdc++.h>
using namespace std;

// 2025-04-12 15:41:25
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

const ll mxn = 4e5;

int main()
{
    fastio;
    vl v;
    for (ll i = 0; i * i <= mxn; i++)
        v.eb(i * i);
    ll t;
    cin >> t;
    while (t--)
    {
        ll sum = 0, tmp = 0, res = 0, cnt = 0, ct = 0, ans = 0, mn = LONG_MAX, mx = 0;
        bool flag = true, fun = false, f = false;
        ll n;
        cin >> n;
        ll a[n + 5] = {};
        for (ll i = 1; i <= n; i++)
            cin >> a[i];
        ll mp[4 * n + 5] = {};
        mp[0] = 1;
        res = (n * (n + 1)) / 2;
        for (ll i = 1; i <= n; i++)
        {
            a[i] ^= a[i - 1];
            for (auto u : v)
            {
                if (u <= 2 * n)
                    res -= mp[u ^ a[i]];
            }
            mp[a[i]]++;
        }
        cout << res << nl;
    }
    return SH;
}