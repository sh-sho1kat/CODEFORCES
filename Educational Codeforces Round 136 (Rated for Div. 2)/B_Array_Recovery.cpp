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
        fr(0, n)
        {
            cin >> a[i];
        }
        ll b[n + 5] = {};
        ans = -1;
        b[0] = a[0];
        for (ll i = 1; i < n; i++)
        {
            ll s1 = b[i - 1] + a[i];
            ll s2 = b[i - 1] - a[i];
            if (s2 < 0 || s2 == s1)
            {
                b[i] = s1;
            }
            else
            {
                flag = false;
            }
        }
        if (flag)
        {
            ap(b, n);
        }
        else
        {
            cout << ans << nl;
        }
    }
    return SH;
}