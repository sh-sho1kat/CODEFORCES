#include <bits/stdc++.h>
using namespace std;

// 2024-09-10 02:23:07
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define mod 1000000007
#define inf (1LL << 62)
#define all(x) x.begin(), x.end()
#define eb emplace_back
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

ll getsum(ll l, ll r)
{
    ll sum = ((r - l) * (r - l + 1)) / 2;
    sum += (r - l + 1) * l;
    return sum;
}

int main()
{
    fastio;
    ll t;
    cin >> t;
    while (t--)
    {
        ll sum = 0, tmp = 0, res = 0, cnt = 0, ct = 0, ans = inf, mn = LONG_MAX, mx = 0;
        bool flag = true, fun = false, f = false;
        ll n, k;
        cin >> n >> k;
        ll lo = k, hi = n + k - 1;
        while (lo <= hi)
        {
            ll mid = (lo + hi) / 2;
            ll sum1 = getsum(k, mid);
            ll sum2 = getsum(mid + 1, k + n - 1);
            ans = min(ans, abs(sum1 - sum2));
            if (sum1 < sum2)
                lo = mid + 1;
            else if (sum1 > sum2)
                hi = mid - 1;
            else
            {
                ans = 0;
                break;
            }
        }
        cout << ans << nl;
    }
    return SH;
}