#include <bits/stdc++.h>
using namespace std;

// 2025-03-16 01:48:25
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

int main()
{
    fastio;
    ll t;
    cin >> t;
    while (t--)
    {
        ll sum = 0, tmp = 0, res = 0, cnt = 0, ct = 0, ans = 0, mn = LONG_MAX, mx = 0;
        bool flag = true, fun = false, f = false;
        ll x, n, m, N, M;
        cin >> x >> N >> M;
        ll lo, hi;
        tmp = x;
        n = N, m = M;
        while (n or m)
        {
            if (m > 0)
            {
                tmp = (tmp + 1) / 2;
                m--;
                if (tmp <= 1)
                {
                    if (n > 0)
                        tmp = 0;
                    break;
                }
            }
            else if (n > 0)
            {
                tmp /= 2;
                n--;
                if (tmp <= 0)
                    break;
            }
            else
                break;
        }
        lo = tmp;
        tmp = x;
        n = N, m = M;
        while (n or m)
        {

            if (n > 0)
            {
                tmp /= 2;
                n--;
                if (tmp <= 0)
                    break;
            }
            else if (m > 0)
            {
                tmp = (tmp + 1) / 2;
                m--;
                if (tmp <= 1)
                    break;
            }
            else
                break;
        }
        hi = tmp;
        cout << lo << " " << hi << nl;
    }
    return SH;
}