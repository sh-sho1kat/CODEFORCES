#include <bits/stdc++.h>
using namespace std;

// 2025-06-08 22:27:18
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
        ll b[n + 5];
        for (ll i = 1; i <= n; i++)
            cin >> a[i];
        for (ll j = 1; j <= n; j++)
            cin >> b[j];
        map<ll, ll> mp;
        for (ll i = 1; i <= n; i++)
            mp[a[i]]++, mp[b[i]]++;
        a[n + 1] = inf;
        b[n + 1] = inf - 1;
        for (ll i = 1; i <= n; i++)
        {
            if (a[i] == b[i])
                res = i;
            if (a[i] == a[i + 1])
                res = i;
            if (b[i] == b[i + 1])
                res = i;
            mp[a[i]]--;
            mp[b[i]]--;
            mp[a[i + 1]]--;
            mp[b[i + 1]]--;
            if (mp[a[i]] or mp[b[i]])
                res = i;
            mp[a[i + 1]]++;
            mp[b[i + 1]]++;
        }
        cout << res << nl;
    }
    return SH;
}