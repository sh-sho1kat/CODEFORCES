#include <bits/stdc++.h>
using namespace std;

// 2025-02-08 23:48:08
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define mod 1000000007
#define inf (1LL << 62)
#define all(x) x.begin(), x.end()
#define eb push_back
#define ff first
#define ss second
#define yes cout << "Yes" << nl
#define no cout << "No" << nl
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
        vl v1, v2;
        for (ll i = 1; i <= n; i++)
        {
            ll p;
            cin >> p;
            if (p > 0)
                v1.eb(p);
            else
                v2.eb(p);
        }
        sort(all(v1), greater<ll>());
        sort(all(v2));
        if (v1.size() == 0 and v2[0] == 0)
        {
            no;
            continue;
        }
        yes;
        vl v;
        sum = 0;
        ll len = 0;
        ll pos = 0;
        mx = v1[0] - v2[0];
        while (len < v1.size())
        {
            if (sum + v1[len] >= mx)
            {
                v.eb(v2[pos]);
                sum += v2[pos];
                pos++;
            }
            else
            {
                v.eb(v1[len]);
                sum += v1[len];
                len++;
            }
        }
        while (pos < v2.size())
        {
            v.eb(v2[pos]);
            pos++;
        }
        for (auto u : v)
            cout << u << " ";
        cout << nl;
    }
    return SH;
}