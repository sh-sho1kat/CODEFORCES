#include <bits/stdc++.h>
using namespace std;

// 2025-04-08 21:46:49
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
        ll lo = 1, hi = n;
        while (lo <= hi)
        {
            ll mid = (lo + hi) >> 1;
            ll p = k;
            ll i = 1;
            while (p > 0 and i <= n)
            {
                set<ll> st;
                flag = false;
                while (i <= n)
                {
                    if (a[i] < mid)
                        st.insert(a[i]);
                    i++;
                    if (st.size() >= mid)
                    {
                        flag = true;
                        break;
                    }
                }
                if (flag)
                    p--;
            }
            if (p <= 0)
            {
                res = mid;
                lo = mid + 1;
            }
            else
            {
                hi = mid - 1;
            }
        }
        cout << res << nl;
    }
    return SH;
}