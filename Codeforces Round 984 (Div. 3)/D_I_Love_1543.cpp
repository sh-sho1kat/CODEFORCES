#include <bits/stdc++.h>
using namespace std;

// 2024-11-09 10:10:29
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
        {
            for (ll j = 1; j <= m; j++)
                cin >> a[i][j];
        }
        ll len = min(n, m);
        len /= 2;
        for (ll i = 1; i <= len; i++)
        {
            vector<char> v;
            for (ll j = i; j <= m - i + 1; j++)
                v.push_back(a[i][j]);

            for (ll j = i + 1; j <= n - i; j++)
                v.push_back(a[j][m - i + 1]);

            for (ll j = m - i + 1; j >= i; j--)
                v.push_back(a[n - i + 1][j]);

            for (ll j = n - i; j > i; j--)
                v.push_back(a[j][i]);
            v.push_back(v[0]);
            v.push_back(v[1]);
            v.push_back(v[2]);

            for (ll i = 0; i < v.size() - 3; i++)
            {
                if (v[i] == '1' and v[i + 1] == '5' and v[i + 2] == '4' and v[i + 3] == '3')
                    cnt++;
            }
        }
        cout << cnt << nl;
    }
    return SH;
}