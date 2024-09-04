#include <bits/stdc++.h>
using namespace std;

// 2024-04-10 15:51:16
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define mod 1000000007
#define inf (1LL << 62)
#define all(x) x.begin(), x.end()
#define eb emplace_back
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
        ll n, k;
        cin >> n >> k;
        ll a[n + 5];
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        tmp = (k + 1) / 2;
        for (ll i = 0; i < n; i++)
        {
            if (a[i] <= tmp)
            {
                cnt++;
                tmp -= a[i];
                a[i] = inf;
            }
            else
            {
                a[i] -= tmp;
                break;
            }
        }
        tmp = k / 2;
        for (ll i = n - 1; i >= 0; i--)
        {
            if (a[i] <= tmp)
            {
                cnt++;
                tmp -= a[i];
            }
            else
                break;
        }
        cout << cnt << nl;
    }
    return SH;
}