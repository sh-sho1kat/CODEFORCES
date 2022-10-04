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
        ll n, q;
        cin >> n >> q;
        ll a[n + 5];
        fr(1, n + 1) cin >> a[i];
        map<ll, ll> mp;
        map<ll, ll> mp2;
        fr(1, n + 1) mp[a[i]] = i;
        fr(1, n + 1)
        {
            if (mp2[a[i]] != 0)
                continue;
            mp2[a[i]] = i;
        }
        while (q--)
        {
            ll l, r;
            cin >> l >> r;
            ll mn = min(mp[l], mp2[l]);
            ll mx = max(mp[r], mp2[r]);
            if (mp[l] == 0 || mp[r] == 0)
                no;
            else if (mn <= mx)
                yes;
            else
                no;
        }
    }
    return SH;
}