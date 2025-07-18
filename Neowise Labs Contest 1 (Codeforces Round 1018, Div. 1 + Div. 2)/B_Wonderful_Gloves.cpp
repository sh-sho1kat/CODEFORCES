#include <bits/stdc++.h>
using namespace std;

// 2025-04-19 14:57:53
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
    ll t;
    cin >> t;
    while (t--)
    {
        ll sum = 0, tmp = 0, res = 0, cnt = 0, ct = 0, ans = 0, mn = LONG_MAX, mx = 0;
        bool flag = true, fun = false, f = false;
        ll n, k;
        cin >> n >> k;
        ll a[n + 5];
        for (ll i = 1; i <= n; i++)
            cin >> a[i];
        ll b[n + 5];
        for (ll i = 1; i <= n; i++)
            cin >> b[i];
        vl v;
        for (ll i = 1; i <= n; i++)
        {
            sum += max(a[i], b[i]);
            v.eb(min(a[i], b[i]));
        }
        sort(all(v), greater<ll>());
        for (ll i = 0; i < k - 1; i++)
            sum += v[i];
        sum++;
        cout << sum << nl;
    }
    return SH;
}