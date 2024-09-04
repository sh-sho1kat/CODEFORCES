///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2024-02-15 20:52:34
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

ll bs(ll a, ll tmp, ll k, ll res)
{
    ll low = tmp, high = 1e9;

    while (low <= high)
    {
        ll mid = (high + low) / 2;
        if (a - mid * k >= res - mid)
        {
            low = mid + 1;
            tmp = low;
        }
        else
        {
            high = mid - 1;
        }
    }
    return tmp;
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
        ll k, x, a;
        cin >> k >> x >> a;
        if (k == 1)
        {
            no;
            continue;
        }
        tmp = 1;
        res = a;
        sum = a - (k * tmp);
        for (ll i = 1; i <= x; i++)
        {
            if (res - tmp > sum)
            {
                res -= tmp;
            }
            else
            {
                tmp = bs(a, tmp, k, res);
                res -= tmp;
            }
            sum = a - (k * tmp);
            if (res <= 0)
            {
                flag = false;
                break;
            }
        }
        if (res * k > a && flag)
            yes;
        else
            no;
    }
    return SH;
}