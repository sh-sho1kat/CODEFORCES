#include <bits/stdc++.h>
using namespace std;

// 2025-04-13 22:35:43
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
        ll n, m, k;
        cin >> n >> m >> k;
        ll x = 1;
        ll xc = 0;
        ll y = 2;
        ll yc = 0;
        ll p = (n * m) / k;
        for (ll i = 1; i <= n; i++)
        {
            for (ll j = 1; j <= m; j++)
            {
                if (j & 1)
                {
                    cout << x << " ";
                    xc++;
                    if (xc >= p)
                    {
                        x += 2;
                        xc = 0;
                    }
                }
                else
                {
                    cout << y << " ";
                    yc++;
                    if (yc >= p)
                    {
                        y += 2;
                        yc = 0;
                    }
                }
            }
            cout << nl;
            swap(x, y);
            swap(xc, yc);
        }
    }
    return SH;
}