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
        ll psum[n + 5] = {};
        ll mx = 1;
        for (ll i = 1; i <= n; i++)
        {
            cin >> a[i];
            psum[i] = psum[i - 1] + a[i];
        }
        map<ll, ll> mp;
        for (ll i = n; i > 0; i--)
        {
            mp[psum[i]]++;
            mx = max(mx, mp[psum[i]]);
            if (a[i] == 0)
            {
                ans += mx;
                mp.clear();
                mx = 1;
            }
        }
        ans += mp[0];
        mp.clear();
        for (ll i = 1; i <= n; i++)
        {
            mp[a[i]]++;
        }
        sum = 0;
        count = 0;
        if (mp[0] == 0)
        {
            for (ll i = 1; i <= n; i++)
            {
                sum += a[i];
                if (sum == 0)
                {
                    count++;
                }
            }
            cout << count << nl;
        }
        else
            cout << ans << nl;
    }
    return SH;
}