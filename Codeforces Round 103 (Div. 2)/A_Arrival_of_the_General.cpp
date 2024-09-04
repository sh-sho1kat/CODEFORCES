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
    ll t = 1;
    // cin>>t;
    while (t--)
    {
        ll sum = 0, tmp = 0, res = 0, cnt = 0, count = 0, ans = 0;
        bool flag = true;
        ll n;
        cin >> n;
        ll a[n + 5];
        fr(0, n) cin >> a[i];
        ll mx = 0;
        ll mn = INT_MAX;
        ll tmp1, tmp2;
        for (ll i = 0; i < n; i++)
        {
            if (a[i] <= mn)
            {
                tmp1 = i;
                mn = a[i];
            }
        }
        for (ll i = n - 1; i >= 0; i--)
        {
            if (a[i] >= mx)
            {
                mx = a[i];
                tmp2 = i;
            }
        }
        if (tmp1 > tmp2)
        {
            res = tmp2 + n - tmp1 - 1;
        }
        else if (tmp1 < tmp2)
        {
            res = tmp2 + n - tmp1 - 2;
        }
        else
            res = 0;

        cout << res;
    }
    return SH;
}