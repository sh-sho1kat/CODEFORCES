#include <bits/stdc++.h>
using namespace std;

// 2025-05-17 20:57:24
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

bool cmp(const pair<ll, pll> &p1, const pair<ll, pll> &p2)
{
    if (p1.ff < p2.ff)
        return true;
    if (p1.ff == p2.ff)
    {
        ll ct1 = 0;
        if (p1.ss.ff % 2 == 0)
            ct1++;
        if (p1.ss.ss % 2 == 0)
            ct1++;

        ll ct2 = 0;
        if (p2.ss.ff % 2 == 0)
            ct2++;
        if (p2.ss.ss % 2 == 0)
            ct2++;
        return ct1 <= ct2;
    }
    return false;
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
        ll n, m, a, b;
        cin >> n >> m >> a >> b;
        ll a1 = (n - a) * m;
        ll a2 = (a - 1) * m;
        ll a3 = (n * (m - b));
        ll a4 = n * (b - 1);
        vector<pair<ll, pll>> v;
        v.eb({a1, {a, m}});
        v.eb({a2, {n - a + 1, m}});
        v.eb({a3, {n, b}});
        v.eb({a4, {n, m - b + 1}});
        res = inf;
        for (ll i = 0; i <= 3; i++)
        {
            cnt = 1;
            ll xpos = v[i].ss.ff;
            ll ypos = v[i].ss.ss;
            while (xpos > 1 or ypos > 1)
            {
                // if (xpos > ypos)
                // {
                //     xpos = (xpos + 1) / 2;
                //     cnt++;
                // }
                // else
                // {
                //     ypos = (ypos + 1) / 2;
                //     cnt++;
                // }
                if (xpos % 2 == 0 and xpos > 1)
                {
                    xpos = (xpos + 1) / 2;
                    cnt++;
                }
                else if (ypos % 2 == 0 and ypos > 1)
                {
                    ypos = (ypos + 1) / 2;
                    cnt++;
                }
                else if (xpos > 1)
                {
                    xpos = (xpos + 1) / 2;
                    cnt++;
                }
                else if (ypos > 1)
                {
                    ypos = (ypos + 1) / 2;
                    cnt++;
                }
                // cout << xpos << " " << ypos << nl;
            }
            res = min(res, cnt);
        }

        cout << res << nl;
    }
    return SH;
}