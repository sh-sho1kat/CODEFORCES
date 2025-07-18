#include <bits/stdc++.h>
using namespace std;

// 2025-03-23 11:49:55
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
        ll n, m;
        cin >> n >> m;
        char a[n + 5][m + 5];
        for (ll i = 1; i <= n; i++)
            for (ll j = 1; j <= m; j++)
                cin >> a[i][j];
        f = true;
        for (ll i = 1; i <= n; i++)
        {
            for (ll j = 1; j <= m; j++)
            {
                if (a[i][j] == '1')
                {
                    flag = false;
                    fun = true;
                    for (ll k = 1; k <= i; k++)
                    {
                        if (a[k][j] != '1')
                            fun = false;
                    }
                    if (fun)
                        flag = true;
                    fun = true;
                    for (ll k = 1; k <= j; k++)
                    {
                        if (a[i][k] != '1')
                            fun = false;
                    }
                    if (fun)
                        flag = true;
                    if (!flag)
                        f = false;
                }
            }
        }
        f ? yes : no;
    }
    return SH;
}