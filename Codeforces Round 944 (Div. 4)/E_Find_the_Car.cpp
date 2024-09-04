#include <bits/stdc++.h>
using namespace std;

// 2024-05-10 21:18:46
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

bool cmp(const pair<ll, ll> &p1, const pair<ll, ll> &p2)
{
    return p1.second < p2.second;
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
        ll n, k, q;
        cin >> n >> k >> q;
        ll a[k + 5] = {}, b[k + 5] = {};
        for (ll i = 1; i <= k; i++)
            cin >> a[i];
        for (ll i = 1; i <= k; i++)
            cin >> b[i];
        vector<pair<ll, ll>> v;
        for (ll i = 1; i <= q; i++)
        {
            ll d;
            cin >> d;
            v.push_back({d, i});
        }
        sort(v.begin(), v.end());
        ll pos = 0;
        for (ll i = 0; i < q; i++)
        {
            ll d = v[i].ff;
            while (d > a[pos])
            {
                pos++;
            }
            if (d == 0)
            {
                v[i].ff = 0;
                continue;
            }
            // cout << pos << nl;
            // cout << a[pos] << " " << a[pos - 1] << nl;
            // cout << b[pos] << " " << b[pos - 1] << nl;
            ll time = ((d - a[pos - 1]) * (b[pos] - b[pos - 1])) / (a[pos] - a[pos - 1]);
            time += b[pos - 1];
            // cout << time << nl;
            // ok;
            v[i].ff = time;
        }
        sort(v.begin(), v.end(), cmp);
        for (auto u : v)
            cout << u.ff << " ";
        cout << nl;
    }
    return SH;
}