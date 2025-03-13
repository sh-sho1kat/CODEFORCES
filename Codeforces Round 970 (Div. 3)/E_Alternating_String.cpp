#include <bits/stdc++.h>
using namespace std;

// 2024-11-30 02:52:47
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
        ll n;
        cin >> n;
        string s;
        cin >> s;
        s = "#" + s;
        ll a[30][n + 5];
        res = inf;
        for (ll i = 1; i <= 26; i++)
        {
            a[i][n + 2] = 0;
            a[i][n + 1] = 0;
            for (ll j = n; j >= 1; j--)
            {
                a[i][j] = 0;
                if ((s[j] - 'a') + 1 != i)
                    a[i][j]++;
                a[i][j] += a[i][j + 2];
            }
        }

        for (ll i = 1; i <= 26; i++)
        {
            for (ll j = 1; j <= 26; j++)
            {
                if (n & 1)
                {
                    ll c1 = 0, c2 = 0;
                    for (ll k = 1; k <= n; k++)
                    {
                        if (k & 1)
                        {
                            res = min(res, (c1 + c2 + a[i][k + 1] + a[j][k + 2] + 1));
                            if (s[k] - 'a' + 1 != i)
                                c1++;
                        }
                        else
                        {
                            res = min(res, (c1 + c2 + a[i][k + 2] + a[j][k + 1] + 1));
                            if (s[k] - 'a' + 1 != j)
                                c2++;
                        }
                    }
                }
                else
                {
                    res = min(res, a[i][1] + a[j][2]);
                }
            }
        }
        cout << res << nl;
    }
    return SH;
}