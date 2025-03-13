#include <bits/stdc++.h>
using namespace std;

// 2024-12-24 21:41:35
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
    ll ans = 0, mx = 0;
    for (ll i = start; i <= end; i++)
    {
        mx = max(mx + a[i], a[i]);
        ans = max(ans, mx);
        mx = max(ll(0), mx);
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
        ll n;
        cin >> n;
        ll a[n + 5];
        for (ll i = 1; i <= n; i++)
            cin >> a[i];
        ll b[n + 5];
        for (ll i = 1; i <= n; i++)
            b[i] = -a[i];
        set<ll> st;
        ll idx = 0;
        for (ll i = 1; i <= n; i++)
            if (a[i] != -1 and a[i] != 1)
                idx = i;
        if (!idx)
        {
            ll mxsum = subarray_sum(a, 1, n);
            ll mnsum = subarray_sum(b, 1, n);
            mnsum *= -1;
            for (ll i = mnsum; i <= mxsum; i++)
                st.insert(i);
        }
        else
        {
            ll mxsum1 = subarray_sum(a, 1, idx - 1);
            ll mxsum2 = subarray_sum(a, idx + 1, n);
            ll mnsum1 = subarray_sum(b, 1, idx - 1);
            ll mnsum2 = subarray_sum(b, idx + 1, n);
            mx = max(mxsum1, mxsum2);
            mn = max(mnsum1, mnsum2);
            mn *= -1;
            for (ll i = 0; i <= mx; i++)
                st.insert(i);
            for (ll i = mn; i <= 0; i++)
                st.insert(i);
            sum = 0;
            mxsum1 = mxsum2 = mnsum1 = mnsum2 = 0;
            for (ll i = idx - 1; i >= 1; i--)
            {
                sum += a[i];
                mxsum1 = max(sum, mxsum1);
            }
            sum = 0;
            for (ll i = idx + 1; i <= n; i++)
            {
                sum += a[i];
                mxsum2 = max(sum, mxsum2);
            }
            sum = 0;
            for (ll i = idx - 1; i >= 1; i--)
            {
                sum += b[i];
                mnsum1 = max(sum, mnsum1);
            }
            sum = 0;
            for (ll i = idx + 1; i <= n; i++)
            {
                sum += b[i];
                mnsum2 = max(sum, mnsum2);
            }
            for (ll i = a[idx]; i <= a[idx] + mxsum1 + mxsum2; i++)
                st.insert(i);
            for (ll i = a[idx] - mnsum1 - mnsum2; i <= a[idx]; i++)
                st.insert(i);
        }
        cout << st.size() << nl;
        for (auto u : st)
            cout << u << " ";
        cout << nl;
    }
    return SH;
}