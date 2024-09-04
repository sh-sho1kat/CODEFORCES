///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-06-24 20:27:01
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
        ll n, x;
        cin >> n >> x;
        ll a[n + 5], b[n + 5], c[n + 5];
        for (ll i = 0; i < n; i++) cin >> a[i];
        for (ll i = 0; i < n; i++) cin >> b[i];
        for (ll i = 0; i < n; i++) cin >> c[i];
        string nx = dtob(32, x);
        string match;
        for (ll i = 0; i < 32; i++)
            match.push_back('0');
        for (ll j = 0; j < n; j++)
        {
            string p = dtob(32, a[j]);
            flag = true;
            for (ll i = 0; i < 32; i++)
            {
                if (nx[i] == '0' && p[i] == '1')
                    flag = false;
            }
            if (flag)
            {
                for (ll i = 0; i < 32; i++)
                {
                    if (match[i] == '0')
                    {
                        match[i] = p[i];
                    }
                }
            }
            else
                break;
        }

        for (ll j = 0; j < n; j++)
        {
            string p = dtob(32, b[j]);
            flag = true;
            for (ll i = 0; i < 32; i++)
            {
                if (nx[i] == '0' && p[i] == '1')
                    flag = false;
            }
            if (flag)
            {
                for (ll i = 0; i < 32; i++)
                {
                    if (match[i] == '0')
                    {
                        match[i] = p[i];
                    }
                }
            }
            else
                break;
        }

        for (ll j = 0; j < n; j++)
        {
            string p = dtob(32, c[j]);
            flag = true;
            for (ll i = 0; i < 32; i++)
            {
                if (nx[i] == '0' && p[i] == '1')
                    flag = false;
            }
            if (flag)
            {
                for (ll i = 0; i < 32; i++)
                {
                    if (match[i] == '0')
                    {
                        match[i] = p[i];
                    }
                }
            }
            else
                break;
        }
        ll tt = btod(match);
        if (tt == x)
            yes;
        else
            no;
    }
    return SH;
}