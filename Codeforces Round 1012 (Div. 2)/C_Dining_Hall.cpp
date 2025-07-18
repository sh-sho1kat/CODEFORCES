#include <bits/stdc++.h>
using namespace std;

// 2025-03-23 12:17:43
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
typedef int ll;
typedef pair<ll, ll> pll;
typedef vector<ll> vl;
typedef vector<pll> vpll;

bool cmp(const pair<ll, ll> &p1, const pair<ll, ll> &p2)
{
    ll dst1 = p1.ff + p1.ss;
    ll dst2 = p2.ff + p2.ss;
    if (dst1 % 3 == 1)
        dst1 += 2;
    if (dst2 % 3 == 1)
        dst2 += 2;
    if (dst1 < dst2)
        return true;
    if (dst1 == dst2)
    {
        if (p1.ff < p2.ff)
            return true;
        else if (p1.ff == p2.ff)
            return p1.ss <= p2.ss;
        else
            return false;
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
        ll n;
        cin >> n;
        ll a[n + 5];
        for (ll i = 1; i <= n; i++)
            cin >> a[i];
        map<pair<ll, ll>, ll> mp;
        vpll v;
        vpll vf;
        for (ll i = 0; i <= n; i++)
        {
            ll dst = i * 3 + 1;
            dst++;
            for (ll j = 1; j <= dst; j += 3)
            {
                vf.eb({j, dst - j});
            }
            if (vf.size() >= n)
                break;
        }
        for (ll i = 0; i <= n; i++)
        {
            ll dst = i * 3 + 1;
            dst++;
            for (ll j = 1; j <= dst; j += 3)
            {
                v.eb({j, dst - j});
                v.eb({j, dst - j + 1});
                v.eb({j + 1, dst - j});
                if (i and dst > (j + 2))
                    v.eb({j + 1, dst - j - 2});
            }
            if (v.size() >= n)
                break;
        }
        sort(all(v), cmp);
        sort(all(vf), cmp);
        vpll rs;
        ll zero = 0, one = 0;
        for (ll i = 1; i <= n; i++)
        {
            if (a[i])
            {
                while (mp[v[one]] == 1)
                    one++;
                mp[v[one]] = 1;
                rs.eb(v[one]);
            }
            else
            {
                while (mp[vf[zero]] == 1)
                {
                    zero++;
                }
                mp[vf[zero]] = 1;
                rs.eb(vf[zero]);
            }
        }
        for (auto u : rs)
            cout << u.ff << " " << u.ss << nl;
    }
    return SH;
}