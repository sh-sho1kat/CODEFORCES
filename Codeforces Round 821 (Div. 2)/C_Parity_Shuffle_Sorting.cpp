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
        ll n;
        cin >> n;
        ll a[n + 5];
        fr(0, n) cin >> a[i];
        // ll l, r;
        // l = 0;
        // r = n - 1;
        // while (l < r)
        // {
        //     if (a[l] > a[r])
        //     {
        //         if ((a[l] + a[r]) & 1)
        //         {
        //             a[r] = a[l];
        //             cout << l + 1 << " " << r + 1 << nl;
        //             // cout << a[l] << " " << a[r] << nl;
        //             r--;
        //         }
        //         else
        //         {
        //             a[l] = a[r];
        //             cout << l + 1 << " " << r + 1 << nl;
        //             // cout << a[l] << " " << a[r] << nl;
        //             l++;
        //         }
        //     }
        //     else
        //     {
        //         l++;
        //     }
        // }
        // ap(a, n);
        // cout << nl;
        // vpll v;
        // for (ll i = 1; i < n; i++)
        // {
        //     if ((a[0] + a[i]) & 1)
        //     {
        //         a[i] = a[0];
        //         count++;
        //         v.eb(make_pair(1, i + 1));
        //     }
        // }
        // for (ll i = n - 2; i >= 0; i--)
        // {
        //     if ((a[n - 1] + a[i]) % 2 == 0)
        //     {
        //         a[i] = a[n - 1];
        //         count++;
        //         v.eb(make_pair(i + 1, n));
        //     }
        // }
        // cout << count << nl;
        // for (auto u : v)
        //     cout << u.ff << " " << u.ss << nl;
        // // ap(a, n);

        vpll v;
        if ((a[0] + a[n - 1]) & 1)
        {
            a[n - 1] = a[0];
            count++;
            v.eb(make_pair(1, n));
            for (ll i = 1; i < n; i++)
            {
                if ((a[0] != a[i]) && ((a[0] + a[i]) & 1))
                {
                    a[i] = a[0];
                    count++;
                    v.eb(make_pair(1, i + 1));
                }
            }
            for (ll i = n - 2; i >= 0; i--)
            {
                if (((a[n - 1] + a[i]) % 2 == 0) && a[n - 1] != a[i])
                {
                    a[i] = a[n - 1];
                    count++;
                    v.eb(make_pair(i + 1, n));
                }
            }
        }
        else
        {
            a[0] = a[n - 1];
            count++;
            v.eb(make_pair(1, n));
            for (ll i = 1; i < n; i++)
            {
                if ((a[0] != a[i]) && ((a[0] + a[i]) & 1))
                {
                    a[i] = a[0];
                    count++;
                    v.eb(make_pair(1, i + 1));
                }
            }
            for (ll i = n - 2; i >= 0; i--)
            {
                if (((a[n - 1] + a[i]) % 2 == 0) && a[n - 1] != a[i])
                {
                    a[i] = a[n - 1];
                    count++;
                    v.eb(make_pair(i + 1, n));
                }
            }
        }
        if (n == 1)
        {
            cout << "0" << nl;
            continue;
        }
        cout << count << nl;
        for (auto u : v)
            cout << u.ff << " " << u.ss << nl;
        // ap(a, n);
    }
    return SH;
}