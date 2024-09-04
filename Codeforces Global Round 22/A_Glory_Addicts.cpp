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
        vl v1;
        vl v2;
        vpll v;
        fr(0, n)
        {
            cin >> tmp;
            if (tmp)
                count++;
            v1.eb(tmp);
        }
        fr(0, n)
        {
            cin >> tmp;
            v2.eb(tmp);
        }
        fr(0, n)
        {
            v.eb(make_pair(v1[i], v2[i]));
        }
        sort(v.begin(), v.end());
        // for (auto u : v)
        //     cout << u.ff << " " << u.ss << nl;
        // cout << nl;

        if (2 * count > n)
        {
            sum += v[n - count].ss;
            for (ll i = n - 1; i >= count; i--)
            {
                sum += 2 * v[i].ss;
                sum += 2 * v[i - count].ss;
            }
            for (ll i = count - 1; i > n - count; i--)
            {
                sum += v[i].ss;
            }
        }
        else if (2 * count < n)
        {
            sum += v[0].ss;
            ll tt = count;
            // for (; i > count; i--)
            // {
            // }
            ll i = n - count - 1;
            while (tt--)
            {
                sum += 2 * v[i].ss;
                sum += 2 * v[i + count].ss;
                i--;
            }
            for (ll i = n - 2 * count - 1; i > 0; i--)
            {
                sum += v[i].ss;
            }
        }
        else if (2 * count == n)
        {
            if (v[0].ss < v[count].ss)
            {
                sum += v[0].ss;
                for (ll i = 1; i < n; i++)
                {
                    sum += 2 * v[i].ss;
                }
            }
            else
            {
                sum += v[count].ss;
                for (ll i = 0; i < n; i++)
                {
                    if (i == count)
                        continue;
                    sum += 2 * v[i].ss;
                }
            }
        }
        cout << sum << nl;
    }
    return SH;
}