#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define mod 1000000007
#define all(x) x.begin(), x.end()
#define eb emplace_back
#define pf push_front
#define fr(s, n) for (ll i = s; i < n; i++)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define nl '\n'
#define SH 0
typedef long long ll;
typedef pair<ll, ll> pll;
typedef vector<ll> vl;

#define ok cout << "Eureka" << nl
#define ap(arr, n)             \
    for (ll i = 0; i < n; i++) \
        cout << arr[i] << " "; \
    cout << nl;

int main()
{
    fastio;
    ll t;
    cin >> t;
    while (t--)
    {
        ll sum = 0, tmp = 0, res = 0, cnt = 0, count = 0, ans = 0;
        bool flag = true;
        ll n;
        cin >> n;
        char a[n + 5][n + 5];
        for (ll i = 1; i <= n; i++)
        {
            for (ll j = 1; j <= n; j++)
            {
                cin >> a[i][j];
            }
        }
        // for (ll i = 1; i <= n; i++)
        // {
        //     for (ll j = 1; j <= n; j++)
        //     {
        //         cout << a[i][j];
        //     }
        //     cout << nl;
        // }
        ll p = n;
        for (ll i = 1; i <= n / 2; i++)
        {
            for (ll j = i; j < p; j++)
            {
                // cout << i << " " << j << " " << p << nl;
                if (a[i][j] == '0')
                    cnt++;
                if (a[j][p] == '0')
                    cnt++;
                if (a[p][p + i - j] == '0')
                    cnt++;
                if (a[p + i - j][i] == '0')
                    cnt++;
                sum += min(cnt, (4 - cnt));
                // cout << cnt << " ";
                cnt = 0;
            }
            p--;
        }
        cout << sum << nl;
    }
    return SH;
}