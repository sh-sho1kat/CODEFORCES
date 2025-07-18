#include <bits/stdc++.h>
using namespace std;

// 2025-06-26 03:04:53
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
        ll sum = 0, tmp = 0, res = 0, cnt = 0, ct = 0, ans = 0;
        bool flag = true, fun = false, f = false;
        ll n;
        cin >> n;
        ll a[n + 5];
        for (ll i = 1; i <= n; i++)
            cin >> a[i];
        sort(a + 1, a + n + 1);
        ll freq[200005] = {};
        for (ll i = 1; i <= n; i++)
            freq[a[i]]++;
        for (ll i = 1; i <= 200005; i++)
            freq[i] += freq[i - 1];
        for (ll i = 1; i < n - 1; i++)
        {
            for (ll j = i + 1; j <= n; j++)
            {
                ll mx = a[j];
                ll mn = a[i];
                ll l = mx - mn + 1;
                ll r = mx + mn - 1;
                l = max(l, (a[n] - (mx + mn) + 1));
                if (r >= l)
                {
                    sum = freq[r] - freq[l - 1];
                    if (mx >= l and mx <= r)
                        sum--;
                    if (mn >= l and mn <= r)
                        sum--;
                    // cout << i << " " << j << " " << sum << nl;
                    // cout << l << " " << r << nl;
                    res += sum;
                }
            }
        }
        ll mx = a[n];
        ll mn = a[n - 1];
        ll l = mx - mn + 1;
        ll r = a[n - 2];
        if (r >= l)
        {
            sum = freq[r] - freq[l - 1];
            if (mx >= l and mx <= r)
                sum--;
            if (mn >= l and mn <= r)
                sum--;
            res += sum;
        }
        res /= 3;
        cout << res << nl;
    }
    return SH;
}