#include <bits/stdc++.h>
using namespace std;

// 2025-04-05 21:04:18
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
        ll a[n + 5], b[n + 5];
        for (ll i = 1; i <= n; i++)
            cin >> a[i];
        for (ll i = 1; i <= n; i++)
            cin >> b[i];
        map<pll, ll> mp;

        vpll v;
        for (ll i = 1; i <= n; i++)
        {
            if (a[i] == b[i])
            {
                tmp = a[i];
                cnt++;
            }
            if (mp[{b[i], a[i]}] == 0 and a[i] != b[i])
                v.eb({a[i], b[i]});
            mp[{a[i], b[i]}] = i;
        }
        sort(all(v));
        flag = true;
        vpll rs;
        if (cnt)
        {
            ll p = tmp;
            ll q = tmp;
            ll pos = mp[{p, q}];
            if (pos != (n + 1) / 2)
            {
                rs.eb({(n + 1) / 2, pos});
                mp[{p, q}] = (n + 1) / 2;
                mp[{a[(n + 1) / 2], b[(n + 1) / 2]}] = pos;
                swap(a[(n + 1) / 2], a[pos]);
                swap(b[(n + 1) / 2], b[pos]);
            }
        }
        // for (ll j = 1; j <= n; j++)
        //     cout << a[j] << " ";
        // cout << nl;
        // for (ll j = 1; j <= n; j++)
        //     cout << b[j] << " ";
        // cout << nl;
        // cout << mp[{2, 3}] << " " << mp[{1, 4}] << nl;
        for (ll i = 0; i < v.size(); i++)
        {
            ll p = v[i].ff;
            ll q = v[i].ss;
            if (mp[{q, p}] == 0)
            {
                flag = false;
                break;
            }
            // cout << i << "-->" << nl;
            // cout << p << " " << q << " " << mp[{p, q}] << nl;
            if (mp[{p, q}] != i + 1)
            {
                ll pos = mp[{p, q}];
                rs.eb({i + 1, pos});
                mp[{p, q}] = i + 1;
                mp[{a[i + 1], b[i + 1]}] = pos;
                swap(a[i + 1], a[pos]);
                swap(b[i + 1], b[pos]);
            }
            if (mp[{q, p}] != n - i)
            {
                ll pos = mp[{q, p}];
                rs.eb({n - i, pos});
                mp[{q, p}] = n - i;
                mp[{a[n - i], b[n - i]}] = pos;
                swap(a[n - i], a[pos]);
                swap(b[n - i], b[pos]);
            }
            // cout << mp[{p, q}] << " " << mp[{q, p}] << nl;
            // for (ll j = 1; j <= n; j++)
            //     cout << a[j] << " ";
            // cout << nl;
            // for (ll j = 1; j <= n; j++)
            //     cout << b[j] << " ";
            // cout << nl;
        }
        if (n % 2 == 0)
        {
            if (cnt)
            {
                flag = false;
            }
        }
        else
        {
            if (cnt > 1)
                flag = false;
        }
        if (flag)
        {
            cout << rs.size() << nl;
            for (auto u : rs)
                cout << u.ff << " " << u.ss << nl;
        }
        else
            cout << -1 << nl;
    }
    return SH;
}