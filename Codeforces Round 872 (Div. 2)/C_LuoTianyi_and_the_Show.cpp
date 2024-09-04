///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-05-08 19:21:47
 **/

#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define mod 1000000007
#define all(x) x.begin(), x.end()
#define eb emplace_back
#define pf push_front
#define MP make_pair
#define ff first
#define ss second
#define fr(s, n) for (ll i = s; i < n; i++)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define dtob(p, n) bitset<p>(n).to_string()
#define btod(bin) stoi(bin, nullptr, 2)
#define nl '\n'
#define SH 0
typedef long long ll;
typedef pair<ll, ll> pll;
typedef vector<ll> vl;
typedef vector<pll> vpll;

#define ok cout << "Eureka" << nl
#define ap(arr, n)              \
    for (ll i = 1; i <= n; i++) \
        cout << arr[i] << " ";  \
    cout << nl;

int main()
{
    fastio;
    ll t;
    cin >> t;
    while (t--)
    {
        ll sum = 0, tmp = 0, res = 0, cnt = 0, ct = 0, ans = 0, mn = 0, mx = INT_MAX;
        bool flag = true, fun = false, f = false;
        ll n, m;
        cin >> n >> m;
        ll a[n + 5];
        for (ll i = 1; i <= n; i++)
            cin >> a[i];
        map<ll, ll> mp;
        for (ll i = 1; i <= n; i++)
        {
            mp[a[i]]++;
        }
        ll b[m + 5] = {};
        for (ll i = 1; i <= m; i++)
        {
            if (mp[i])
            {
                cnt++;
            }
            b[i] = cnt;
        }
        ll mxc = cnt;
        cnt = 0;
        for (ll i = 1; i <= m; i++)
        {
            if (mp[i])
            {
                ll left = min((mp[-1] + b[i]), i);
                ll right = min((mp[-2] + mxc - b[i]), (m - i));
                ans = max(ans, (left + right));
            }
        }

        for (ll i = m; i >= 1; i--)
        {
            if (mp[i])
                cnt++;
            else if (mp[-1])
            {
                cnt++;
                mp[-1]--;
            }
        }
        for (ll i = 1; i <= m; i++)
        {
            if (mp[i])
                ct++;
            else if (mp[-2])
            {
                ct++;
                mp[-2]--;
            }
        }
        ans = max({ans, cnt, ct});
        cout << ans << nl;
    }
    return SH;
}