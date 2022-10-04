#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define mod 1000000007
#define all(x) x.begin(), x.end()
#define eb emplace_back
#define pf push_front
#define ff first
#define ss second
#define fr(s, n) for (ll i = s; i < n; i++)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define nl '\n'
#define SH 0
typedef long long ll;
typedef pair<ll, ll> pll;
typedef vector<ll> vl;
typedef vector<pll> vpll;

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
        ll n, x, y;
        cin >> n >> x >> y;
        if ((x != 0 && y != 0) || (x == 0 && y == 0))
        {
            cout << "-1" << nl;
        }
        else
        {
            res = max(x, y);
            // cout << res;
            if (res == 1)
            {
                for (ll i = 2; i <= n; i++)
                {
                    cout << i << " ";
                }
                cout << nl;
            }
            else if ((n % res) == 1)
            {
                for (ll i = 1; i <= res; i++)
                {
                    cout << 1 << " ";
                }
                tmp = 2 + res;
                for (ll i = tmp; i <= n; i += res)
                {
                    for (ll j = 1; j <= res; j++)
                    {
                        cout << i << " ";
                    }
                }
                cout << nl;
            }
            else
            {
                cout << "-1" << nl;
            }
        }
    }
    return SH;
}