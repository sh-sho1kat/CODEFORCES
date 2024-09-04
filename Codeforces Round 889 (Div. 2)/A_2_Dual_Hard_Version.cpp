///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-07-31 02:51:49
 **/

#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define mod 1000000007
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
        ll mxn = -50, mnn = 50;
        for (ll i = 1; i <= n; i++)
        {
            if (a[i] >= mxn)
            {
                mxn = a[i];
                mx = i;
            }
            if (a[i] <= mnn)
            {
                mnn = a[i];
                mn = i;
            }
        }
        ll ct1 = 0;
        ll ct2 = 0;
        for (ll i = 1; i <= n; i++)
        {
            if (a[i] >= 0)
                ct1++;
            else
                ct2++;
        }
        vpll v;

        if (mxn >= 0 && mnn >= 0)
        {
            for (ll i = 1; i < n; i++)
            {
                v.push_back({i + 1, i});
            }
        }
        else if (mxn < 0 && mnn < 0)
        {
            for (ll i = n - 1; i > 0; i--)
            {
                v.push_back({i, i + 1});
            }
        }
        else
        {
            for (ll i = 1; i <= 5; i++)
            {
                if (ct1 > 12)
                {
                    v.push_back({mx, mx});
                    mxn += mxn;
                }
                else if (ct1 < 8)
                {
                    v.push_back({mn, mn});
                    mnn += mnn;
                }
            }
            if (abs(mxn) > abs(mnn))
            {
                for (ll i = 1; i <= n; i++)
                {
                    if (a[i] < 0)
                        v.push_back({i, mx});
                }
                for (ll i = 1; i < n; i++)
                {
                    v.push_back({i + 1, i});
                }
            }
            else
            {
                for (ll i = 1; i <= n; i++)
                {
                    if (a[i] > 0)
                        v.push_back({i, mn});
                }
                for (ll i = n - 1; i > 0; i--)
                {
                    v.push_back({i, i + 1});
                }
            }
        }
        cout << v.size() << nl;
        for (auto u : v)
        {
            cout << u.ff << " " << u.ss << nl;
        }
    }
    return SH;
}