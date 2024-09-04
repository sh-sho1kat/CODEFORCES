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
        sort(a, a + n);
        // ans = (n + 1) / 2;
        // tmp = ans;
        // if (n & 1)
        // {
        //     for (ll i = n - 1; i >= 0; i--)
        //     {
        //         if (a[i] > tmp)
        //         {
        //             ans--;
        //         }
        //         if (tmp > 1)
        //         {
        //             tmp--;
        //         }
        //     }
        // }
        // else
        // {
        //     for (ll i = n - 2; i >= 0; i--)
        //     {
        //         if (a[i] > tmp)
        //         {
        //             ans--;
        //         }
        //         if (tmp > 1)
        //         {
        //             tmp--;
        //         }
        //     }
        // }

        // if (ans > 0)
        // {
        //     cout << ans << nl;
        // }
        // else
        // {
        //     cout << "0" << nl;
        // }
        map<ll, ll> mp;
        fr(0, n)
        {
            mp[a[i]]++;
        }
        // for (auto u : mp)
        // {
        //     cout << u.ss << " ";
        // }
        // cout << nl;
        for (ll i = 1; i <= 100; i++)
        {
            mp[i] += mp[i - 1];
        }

        // for (ll i = 1; i < 10; i++)
        // {
        //     cout << mp[i] << " ";
        // }
        // cout << nl;

        ans = 0;
        tmp = ans;
        ll end = ans + 1;
        for (ll j = 1; j * 2 <= n + 1; j++)
        {
            flag = true;
            tmp = ans + 1;
            end = ans + 1;
            for (ll i = 1; i <= end; i++)
            {
                if (mp[i] < tmp)
                {
                    flag = false;
                }
                else
                {
                    tmp++;
                }
            }
            if (flag)
                ans++;
        }
        cout << ans << endl;
    }
    return SH;
}