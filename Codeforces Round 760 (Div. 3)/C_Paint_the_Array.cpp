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
        ll n;
        cin >> n;
        ll a[n + 5];
        fr(0, n) cin >> a[i];
        ll g1 = a[1];
        ll g0 = a[0];
        bool f1 = true;
        bool f2 = true;
        for (ll i = 0; i < n; i++)
        {
            if (i & 1)
                g1 = __gcd(a[i], g1);
            else
                g0 = __gcd(g0, a[i]);
        }
        for (ll i = 0; i < n; i += 2)
        {
            if (a[i] % g1 == 0)
            {
                f1 = false;
            }
        }
        for (ll i = 1; i < n; i += 2)
        {
            if (a[i] % g0 == 0)
            {
                f2 = false;
            }
        }
        if (f1 == true)
        {
            cout << g1 << nl;
        }
        else if (f2 == true)
        {
            cout << g0 << nl;
        }
        else
            cout << 0 << nl;
    }
    return SH;
}