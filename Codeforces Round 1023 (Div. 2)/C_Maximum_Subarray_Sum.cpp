#include <bits/stdc++.h>
using namespace std;

// 2025-05-05 21:26:39
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

ll subarray_sum(ll a[], ll start, ll end)
{
    // pass n-1
    ll ans = -inf, mx = -inf;
    for (ll i = start; i <= end; i++)
    {
        mx = max(mx + a[i], a[i]);
        ans = max(ans, mx);
        mx = max(ll(0), mx);
    }
    return ans;
}

ll sum1(ll a[], ll start, ll end)
{
    // pass n-1
    ll ans = -inf, mx = 0;
    for (ll i = start; i <= end; i++)
    {
        mx += a[i];
        ans = max(ans, mx);
    }
    return ans;
}

ll sum2(ll a[], ll start, ll end)
{
    // pass n-1
    ll ans = -inf, mx = 0;
    for (ll i = end; i >= start; i--)
    {
        mx += a[i];
        ans = max(ans, mx);
    }
    return ans;
}

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
        string s;
        cin >> s;
        ll a[n + 5] = {};
        for (ll i = 1; i <= n; i++)
            cin >> a[i];
        s = "1" + s;
        for (ll i = 1; i <= n; i++)
        {
            if (s[i - 1] == '0' and s[i] == '0')
                s[i - 1] = '1';
        }
        ll pre[n + 5] = {};
        ll post[n + 5] = {};
        ll l = 1;
        ll r = 1;
        for (ll i = 1; i <= n; i++)
        {
            if (s[i] == '0')
            {
                r = i - 1;
                pre[i] = sum2(a, l, r);
                if (pre[i] == -inf)
                    pre[i] = 0;
                l = i + 1;
            }
        }
        l = n;
        r = n;
        for (ll i = n; i >= 1; i--)
        {
            if (s[i] == '0')
            {
                l = i + 1;
                post[i] = sum1(a, l, r);
                if (post[i] == -inf)
                    post[i] = 0;
                r = i - 1;
            }
        }
        sum = -inf;
        for (ll i = 1; i <= n; i++)
        {
            if (s[i] == '0')
            {
                // cout << pre[i] << " " << post[i] << nl;
                if (sum > pre[i])
                    pre[i] = sum;
                if (pre[i] <= 0 and post[i] <= 0)
                {
                    a[i] = k;
                }
                else if (pre[i] > 0 and post[i] <= 0)
                {
                    a[i] = k - pre[i];
                }
                else if (post[i] > 0 and pre[i] <= 0)
                {
                    a[i] = k - post[i];
                }
                else
                {
                    a[i] = k - pre[i] - post[i];
                }
                sum = pre[i] + post[i] + a[i];
                sum = max(sum, post[i] + a[i]);
            }
        }
        ll p = subarray_sum(a, 1, n);
        // cout << p << nl;
        // for (ll i = 1; i <= n; i++)
        //     cout << a[i] << " ";
        // cout << nl;
        if (p == k)
        {
            yes;
            for (ll i = 1; i <= n; i++)
                cout << a[i] << " ";
            cout << nl;
        }
        else
            no;
    }
    return SH;
}