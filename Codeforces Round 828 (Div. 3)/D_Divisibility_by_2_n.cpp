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
    for (ll i = 1; i < n; i++) \
        cout << arr[i] << " "; \
    cout << nl;

ll get2(ll p)
{
    ll cnt = 0;
    while (p % 2 == 0)
    {
        p /= 2;
        cnt++;
    }
    return cnt;
}
ll s[2000000 + 5];
int main()
{
    fastio;
    ll t;
    cin >> t;
    for (ll i = 1; i <= 2000000; i++)
    {
        s[i] = get2(i);
    }
    while (t--)
    {
        ll sum = 0, tmp = 0, res = 0, cnt = 0, count = 0, ans = 0;
        bool flag = true;
        ll n;
        cin >> n;
        ll a[n + 5];
        for (ll i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        for (ll i = 1; i <= n; i++)
        {
            count += get2(a[i]);
            // cout << count << " ";
        }
        vl tm;
        for (ll i = 1; i <= n; i++)
        {
            tm.eb(s[i]);
            // cout << s[i] << " ";
        }
        sort(tm.begin(), tm.end(), greater<ll>());
        // for (auto u : tm)
        // {
        //     cout << u << " ";
        // }
        // cout << nl;
        ll count2 = 0;
        fr(1, n + 1)
        {
            count2 += s[i];
        }
        // cout << count << " " << count2 << " " << n << nl;
        ll sum1 = 0;
        ll desire = n - count;
        ll count1 = 0;
        if ((count + count2) < n)
        {
            cout << "-1" << nl;
        }
        else
        {
            for (auto u : tm)
            {

                if (sum1 >= desire)
                {
                    break;
                }
                else
                {
                    count1++;
                }
                sum1 += u;
            }
            cout << count1 << nl;
        }
    }
    return SH;
}