#include <bits/stdc++.h>
using namespace std;

// 2024-12-22 22:11:51
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
        ll n, m, k;
        cin >> n >> m >> k;
        ll a[m + 5];
        for (ll i = 1; i <= m; i++)
            cin >> a[i];
        map<ll, ll> mp;
        for (ll i = 1; i <= n; i++)
            mp[i] = 1;
        for (ll i = 1; i <= k; i++)
        {
            ll p;
            cin >> p;
            mp[p]--;
        }
        if (k <= n - 2)
        {
            for (ll i = 1; i <= m; i++)
                cout << 0;
            cout << nl;
        }
        else if (k == n)
        {
            for (ll i = 1; i <= m; i++)
                cout << 1;
            cout << nl;
        }
        else
        {
            for (ll i = 1; i <= m; i++)
                if (mp[a[i]])
                    cout << 1;
                else
                    cout << 0;
            cout << nl;
        }
    }
    return SH;
}