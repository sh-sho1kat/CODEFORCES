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

ll last_occurence(ll a[], ll n, ll x)
{
    ll ans = -1;
    ll l = 0, r = n - 1, mid;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (a[mid] <= x)
        {
            ans = mid;
            l = mid + 1;
        }
        else if (a[mid] > x)
            r = mid - 1;
    }
    return ans;
}

int main()
{
    fastio;
    ll t;
    cin >> t;
    while (t--)
    {
        ll sum = 0, tmp = 0, res = 0, cnt = 0, count = 0, ans = 0;
        bool flag = true;
        ll q, n;
        cin >> n >> q;
        // vector<ll> v1(m + 1), v2(n + 1), v3(m + 1), v4(m + 1);
        // for (ll i = 1; i <= m; i++)
        // {
        //     cin >> v1[i];
        //     v3[i] = v3[i - 1] + v1[i];
        //     v4[i] = max(v1[i], v1[i - 1]);
        // }
        // for (ll i = 1; i <= n; i++)
        // {
        //     cin >> v2[i];
        // }
        // // ap(v3, m + 1);
        // // ap(v4, m + 1);
        // for (ll i = 1; i <= n; i++)
        // {
        //     cout << v3[upper_bound(v4.begin(), v4.end(), v2[i]) - v4.begin() - 1] << " ";
        // }
        // cout << nl;
        ll a[n + 5] = {};
        ll b[n + 5] = {};
        for (ll i = 1; i <= n; i++)
        {
            cin >> a[i];
            b[i] = b[i - 1] + a[i];
            a[i] = max(a[i], a[i - 1]);
        }
        // ap(a, n + 1);
        // ap(b, n + 1);
        while (q--)
        {
            ll p;
            cin >> p;
            ll index = last_occurence(a, n + 1, p);
            cout << b[index] << " ";
        }
        cout << nl;
    }
    return SH;
}