#include <bits/stdc++.h>
using namespace std;

// 2025-01-12 20:55:59
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
        ll a[n + 5], b[n + 5], def[n + 5];
        for (ll i = 1; i <= n; i++)
            cin >> a[i];
        for (ll i = 1; i <= n; i++)
            cin >> b[i];
        for (ll i = 1; i <= n; i++)
            def[i] = b[i] - a[i];
        sort(def + 1, def + n + 1, greater<ll>());
        if (def[1] <= 0)
            yes;
        else if (def[1] > 0 and def[2] > 0)
            no;
        else
        {
            flag = true;
            for (ll i = 2; i <= n; i++)
            {
                if (abs(def[i]) < def[1])
                    flag = false;
            }
            flag ? yes : no;
        }
    }
    return SH;
}