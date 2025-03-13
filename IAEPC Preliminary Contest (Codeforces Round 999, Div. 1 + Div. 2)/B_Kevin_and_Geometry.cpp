#include <bits/stdc++.h>
using namespace std;

// 2025-01-20 20:44:53
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
        ll n;
        cin >> n;
        ll a[n + 5];
        for (ll i = 1; i <= n; i++)
            cin >> a[i];
        sort(a + 1, a + n + 1);
        vector<pair<ll, pair<ll, ll>>> df;
        for (ll i = 2;i<=n;i++)
        {
            if (a[i] == a[i - 1])
            {
                df.eb({a[i] - a[i - 1], {a[i], a[i - 1]}});
                if (i - 2 > 0 and i < n)
                    df.eb({a[i + 1] - a[i - 2], {a[i + 1], a[i - 2]}});
                for (ll j = i + 1; j < n; j++)
                    df.eb({a[j + 1] - a[j], {a[j + 1], a[j]}});
                for (ll j = 1; j < i - 2; j++)
                    df.eb({a[j + 1] - a[j], {a[j + 1], a[j]}});
                break;
            }
        }
        sort(all(df));
        ll p, q, r, s;
        if (df.size() and df[0].ff == 0)
        {
            for (ll i = 1; i < df.size(); i++)
            {
                if ((df[i].ss.ff - df[i].ss.ss) < 2 * df[0].ss.ff)
                {
                    fun = true;
                    p = df[0].ss.ff;
                    q = df[0].ss.ss;
                    r = df[i].ss.ff;
                    s = df[i].ss.ss;
                }
            }
        }
        if (fun)
            cout << p << " " << q << " " << r << " " << s << nl;
        else
            cout << -1 << nl;
    }
    return SH;
}