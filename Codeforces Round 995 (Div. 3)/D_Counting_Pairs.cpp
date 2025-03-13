#include <bits/stdc++.h>
using namespace std;

// 2024-12-22 22:29:00
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
        ll n, a, b;
        cin >> n >> a >> b;
        vl ar(n);
        for (ll i = 0; i < n; i++)
            cin >> ar[i], sum += ar[i];
        sort(all(ar));
        ll lo = sum - b;
        ll hi = sum - a;
        for (ll i = 0; i < n; i++)
        {
            if (ar[i] < hi)
            {
                ll p = max(0LL, lo - ar[i]);
                ll q = hi - ar[i];
                res += upper_bound(ar.begin(), ar.begin() + i, q) - upper_bound(ar.begin(), ar.begin() + i, p - 1);
            }
        }
        cout << res << nl;
    }
    return SH;
}