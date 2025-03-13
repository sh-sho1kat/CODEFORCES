#include <bits/stdc++.h>
using namespace std;

// 2025-01-01 20:03:54
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
        vpll v(n + 1);
        ll a[2 * n + 5] = {};
        map<ll, ll> mp;
        for (ll i = 1; i <= n; i++)
        {
            cin >> v[i].ff >> v[i].ss;
            if (v[i].ff == v[i].ss)
            {
                a[v[i].ff] = 1;
                mp[v[i].ff]++;
            }
        }
        for (ll i = 1; i <= 2 * n + 1; i++)
        {
            a[i] += a[i - 1];
        }
        for (ll i = 1; i <= n; i++)
        {
            ll x = v[i].ss - v[i].ff + 1;
            if (v[i].ff == v[i].ss)
            {
                if (mp[v[i].ff] > 1)
                    cout << 0;
                else if (mp[v[i].ff])
                    cout << 1;
            }
            else if (a[v[i].ss] - a[v[i].ff - 1] == x)
                cout << 0;
            else
                cout << 1;
        }
        cout << nl;
    }
    return SH;
}