///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-11-08 21:49:00
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
        ll b[n + 5];
        map<ll, ll> mp;
        for (ll i = 1; i <= n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }
        for (auto u : mp)
        {
            if (u.ss >= 2)
                cnt++;
        }
        if (cnt < 2)
        {
            cout << -1 << nl;
            continue;
        }
        for (ll i = 1; i <= n; i++)
            b[i] = 1;
        for (auto u : mp)
        {
            if (u.ss >= 2)
            {
                for (ll i = 1; i <= n; i++)
                {
                    if (a[i] == u.ff)
                    {
                        a[i] = -1;
                        break;
                    }
                }
                for (ll i = 1; i <= n; i++)
                {
                    if (a[i] == u.ff)
                    {
                        b[i] = 2;
                    }
                }
                mp[u.ff] = 1;
                break;
            }
        }
        for (auto u : mp)
        {
            if (u.ss >= 2)
            {
                for (ll i = 1; i <= n; i++)
                {
                    if (a[i] == u.ff)
                    {
                        a[i] = -1;
                        break;
                    }
                }
                for (ll i = 1; i <= n; i++)
                {
                    if (a[i] == u.ff)
                    {
                        b[i] = 3;
                    }
                }
                mp[u.ff] = 1;
                break;
            }
        }
        for (ll i = 1; i <= n; i++)
            cout << b[i] << " ";
        cout << nl;
    }
    return SH;
}