#include <bits/stdc++.h>
using namespace std;

// 2025-07-01 22:19:35
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define mod 1000000007
#define inf (1LL << 62)
#define all(x) x.begin(), x.end()
#define eb push_back
#define ff first
#define ss second
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
#define dtob(bits, n) bitset<bits>(n).to_string()
#define btod(bin) stoll(bin, nullptr, 2)
#define ok cout << "Eureka" << nl
#define nl '\n'
#define SH 0
typedef long long ll;
typedef pair<ll, ll> pll;
typedef vector<ll> vl;
typedef vector<pll> vpll;

int main()
{
    fastio;
    ll t;
    cin >> t;
    while (t--)
    {
        ll sum = 0, tmp = 0, res = 0, cnt = 0, ct = 0, ans = 0, mn = LONG_MAX, mx = 0;
        bool flag = true, fun = false, f = false;
        ll n;
        cin >> n;
        ll a[n + 5];
        for (ll i = 1; i <= n; i++)
            cin >> a[i];
        ll arr[n + 5] = {};
        map<ll, ll> mp;
        for (ll i = 1; i <= n; i++)
            mp[a[i]]++;
        ll mex;
        for (ll i = 0; i <= n + 1; i++)
            if (!mp[i])
            {
                mex = i;
                break;
            }
        ll extra = 0;
        arr[0] = 1;
        for (ll i = 0; i < mex; i++)
        {
            cnt += mp[i];
            ll rem = n - cnt;
            if (mp[i])
                extra += mp[i] - 1;
            arr[mp[i]] += 1;
            arr[extra + n - cnt + 1] -= 1;
        }
        for (ll i = 1; i <= n; i++)
            arr[i] += arr[i - 1];
        for (ll i = 0; i <= n; i++)
            cout << arr[i] << " ";
        cout << nl;
    }
    return SH;
}