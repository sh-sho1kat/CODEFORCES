#include <bits/stdc++.h>
using namespace std;

// 2024-11-30 20:58:51
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

// int a[1005][1005];
ll n, m;

ll func(ll x, ll y, vector<vector<int>>&a)
{
    ll val = 0;
    if (x < 1 or x > n or y < 1 or y > m)
        return -1;
    if (a[x][y] == -1)
        return -1;
    if (a[x][y] == 2)
        val = 1;
    else if (a[x][y] == 5)
        val = func(x - 1, y,a);
    else if (a[x][y] == 6)
        val = func(x + 1, y,a);
    else if (a[x][y] == 7)
        val = func(x, y - 1,a);
    else if (a[x][y] == 8)
        val = func(x, y + 1,a);
    if (val == -1)
        a[x][y] = -1;
    if (val == 1)
        a[x][y] = 1;
    return a[x][y];
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
        cin >> n >> m;
        vector<vector<int>> a(n+5, vector<int>(m+5));
        for (ll i = 1; i <= n; i++)
        {
            for (ll j = 1; j <= m; j++)
            {
                char ch;
                cin >> ch;
                if (ch == 'U')
                    a[i][j] = 5;
                else if (ch == 'D')
                    a[i][j] = 6;
                else if (ch == 'L')
                    a[i][j] = 7;
                else if (ch == 'R')
                    a[i][j] = 8;
                else
                    a[i][j] = 2;
            }
        }

        for (ll i = 1; i <= n; i++)
        {
            for (ll j = 1; j <= m; j++)
            {
                if (a[i][j] == 5 or a[i][j] == 6 or a[i][j] == 7 or a[i][j] == 8)
                {
                    res = func(i, j,a);
                }
            }
        }
        for (ll i = 1; i <= n; i++)
        {
            for (ll j = 1; j <= m; j++)
            {
                if (a[i][j] == 1)
                    cnt++;
                if (a[i][j] == 2)
                {
                    if (a[i + 1][j] == 1 or a[i - 1][j] == 1 or a[i][j + 1] == 1 or a[i][j - 1] == 1)
                        cnt++;
                    else if (a[i + 1][j] == 2 or a[i - 1][j] == 2 or a[i][j + 1] == 2 or a[i][j - 1] == 2)
                        cnt++;
                }
            }
        }
        cout << cnt << nl;
    }
    return SH;
}