#include <bits/stdc++.h>
using namespace std;

// 2025-01-19 20:47:50
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
        ll a[n + 5][m + 5];
        for (ll i = 1; i <= n; i++)
            for (ll j = 1; j <= m; j++)
                cin >> a[i][j];
        for (ll i = 1; i <= n; i++)
            a[i][0] = i;
        for (ll i = 1; i <= n; i++)
        {
            for (ll j = 1; j <= m; j++)
            {
                for (ll k = j + 1; k <= m; k++)
                {
                    if (a[i][j] > a[i][k])
                        swap(a[i][j], a[i][k]);
                }
            }
        }
        for (ll i = 1; i <= n; i++)
        {
            for (ll j = i + 1; j <= n; j++)
            {
                if (a[i][1] > a[j][1])
                {
                    for (ll k = 0; k <= m; k++)
                    {
                        swap(a[i][k], a[j][k]);
                    }
                }
            }
        }
        ll idx = 1;
        for (ll i = 1; i <= n; i++)
        {
            if (a[i][0] == 1)
                idx = i;
        }
        for (ll i = 1; i <= m; i++)
        {
            for (ll j = i + 1; j <= m; j++)
            {
                if (a[idx][i] > a[idx][j])
                {
                    for (ll k = 1; k <= n; k++)
                    {
                        swap(a[k][i], a[k][j]);
                    }
                }
            }
        }
        tmp = -1;
        for (ll i = 1; i <= m; i++)
        {
            for (ll j = 1; j <= n; j++)
            {
                if (a[j][i] < tmp)
                    flag = false;
                tmp = a[j][i];
            }
        }
        if (flag)
        {
            for (ll i = 1; i <= n; i++)
                cout << a[i][0] << " ";
            cout << nl;
        }
        else
            cout << -1 << nl;
    }
    return SH;
}