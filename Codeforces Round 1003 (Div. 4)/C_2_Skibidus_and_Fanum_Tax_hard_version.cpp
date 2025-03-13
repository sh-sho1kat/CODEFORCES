#include <bits/stdc++.h>
using namespace std;

// 2025-02-09 21:59:28
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
        ll n, m;
        cin >> n >> m;
        ll a[n + 5];
        set<ll> st;
        for (ll i = 1; i <= n; i++)
            cin >> a[i];
        for (ll i = 1; i <= m; i++)
        {
            ll p;
            cin >> p;
            mx = max(mx, p);
            st.insert(p);
        }
        if (mx - a[n] > a[n])
            a[n] = mx - a[n];
        for (ll i = n - 1; i >= 1; i--)
        {
            if (a[i] > a[i + 1])
            {
                ll val = a[i] + a[i + 1];
                ll val1 = *(--st.upper_bound(val));
                ll val2 = *(st.upper_bound(val));
                if (val2 == *(st.begin()))
                {
                    flag = false;
                    break;
                }
                else
                    a[i] = val1 - a[i];
            }
            else if (a[i] < a[i + 1])
            {
                ll val = a[i] + a[i + 1];
                ll val1 = *(--st.upper_bound(val));
                ll val2 = *(st.upper_bound(val));
                if (val2 != *(st.begin()))
                {
                    if (val2 - a[i] > a[i])
                        a[i] = val2 - a[i];
                }
            }
        }
        flag ? yes : no;
    }
    return SH;
}