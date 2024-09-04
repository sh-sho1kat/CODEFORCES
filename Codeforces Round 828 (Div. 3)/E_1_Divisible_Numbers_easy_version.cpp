#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define mod 1000000007
#define all(x) x.begin(), x.end()
#define eb emplace_back
#define pf push_front
#define mp make_pair
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
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        ll x, y;
        x = -1, y = -1;
        ll fact = a * b;
        ll f2 = c * d;
        for (ll i = fact * 2; i <= f2; i += fact)
        { 
            for (ll j = a + 1; j <= c; j++)
            {
                if ((i % j == 0) && (i / j > b) && (i / j) <= d)
                {
                    x = j;
                    y = i / j;
                    flag = false;
                    break;
                }
            }
            if (flag == false)
            {
                break;
            }
        }
        cout << x << " " << y << endl;
    }
    return SH;
}