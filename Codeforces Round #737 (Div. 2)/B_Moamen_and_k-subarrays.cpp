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
        ll n, k;
        cin >> n >> k;
        // ll a[n + 5];
        // fr(0, n) cin >> a[i];
        // fr(1, n)
        // {
        //     if (a[i] >= a[i - 1])
        //     {
        //         count++;
        //     }
        // }
        // if ((n - count) <= k)
        //     yes;
        // else
        //     no;
        vector<pll> v;
        fr(0, n)
        {
            cin >> tmp;
            v.eb(make_pair(tmp, i));
        }
        sort(all(v));
        // for (ll i = 0; i < n; i++)
        // {
        //     cout << v[i].second << " ";
        // }
        fr(1, n)
        {
            if ((v[i].second - 1) == v[i - 1].second)
            {
                count++;
            }
        }
        res = n - count;
        // cout << nl << res << nl;
        if (res <= k)
            yes;
        else
            no;
        count = 0;
    }
    return SH;
}