///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-09-30 22:04:58
 **/

#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define mod 1000000007
#define inf 1e18
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
        ll n, k;
        cin >> n >> k;
        n %= k;
        if (n == 0)
            cout << 0 << nl;
        else if (k & 1)
        {
            cout << -1 << nl;
        }
        else
        {
            ll p = k;
            ans = 0;
            cnt = 0;
            while (p % 2 == 0)
            {
                p /= 2;
                cnt++;
                if (n == p)
                {
                    for (ll i = 1; i <= cnt; i++)
                    {
                        ans += p;
                        p *= 2;
                    }
                    fun = true;
                    break;
                }
                else if (n > p)
                {
                    n %= p;
                    for (ll i = 1; i <= cnt; i++)
                    {
                        ans += p;
                        p *= 2;
                    }
                    p = k;
                    cnt = 0;
                }
            }
            if (fun)
            {
                cout << ans << nl;
            }
            else
            {
                cout << -1 << nl;
            }
        }
    }
    return SH;
}