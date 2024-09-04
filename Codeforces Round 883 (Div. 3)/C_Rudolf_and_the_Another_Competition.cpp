///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2024-02-24 22:15:17
 **/

#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define mod 1000000007
#define inf (1LL << 62)
#define all(x) x.begin(), x.end()
#define eb emplace_back
#define ff first
#define ss second
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define dtob(p, n) bitset<p>(n).to_string()
#define btod(bin) stoi(bin, nullptr, 2)
#define ok cout << "Eureka" << nl
#define nl '\n'
#define SH 0
typedef long long ll;
typedef pair<ll, ll> pll;
typedef vector<ll> vl;
typedef vector<pll> vpll;

bool cmp(const pair<pair<ll, ll>, ll> &p1, const pair<pair<ll, ll>, ll> &p2)
{
    if (p1.ff.ff == p2.ff.ff)
    {
        if (p1.ff.ss == p2.ff.ss)
            return p1.ss <= p2.ss;
        return p1.ff.ss < p2.ff.ss;
    }
    return p1.ff.ff > p2.ff.ff;
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
        ll n, m, h;
        cin >> n >> m >> h;
        vector<pair<pair<ll, ll>, ll>> v;
        for (ll i = 1; i <= n; i++)
        {
            ll a[m + 5];
            for (ll j = 0; j < m; j++)
                cin >> a[j];
            sort(a, a + m);
            ll penalty = 0;
            ll sum = 0;
            cnt = 0;
            for (ll j = 0; j < m; j++)
            {
                if (sum + a[j] > h)
                    break;
                penalty += (sum + a[j]);
                sum += a[j];
                cnt++;
            }
            v.push_back({{cnt, penalty}, i});
        }
        sort(v.begin(), v.end(), cmp);
        for (ll i = 0; i < n; i++)
        {
            if (v[i].ss == 1)
                cout << i + 1 << nl;
        }
    }
    return SH;
}