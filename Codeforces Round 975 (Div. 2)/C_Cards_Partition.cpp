#include <bits/stdc++.h>
using namespace std;

// 2024-09-28 00:18:09
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

ll n, k;
ll a[200005];

// bool is_valid(ll sz)
// {
//     ll tot = sz * a[n];
//     ll sum = 0, need = 0;
//     for (ll i = 1; i <= n - sz; i++)
//         sum += a[i];
//     for (ll i = n - sz + 1; i <= n; i++)
//         need += (a[n] - a[i]);
//     cout << sz << " " << need << " " << sum << nl;
//     if (need >= sum)
//     {
//         if (k >= (need - sum))
//             return true;
//         return false;
//     }
//     else
//     {
//         sum -= need;
//         ll p = sum % sz;
//         if (k >= sz - p)
//             return true;
//         return false;
//     }
// }

int main()
{
    fastio;
    ll t;
    cin >> t;
    while (t--)
    {
        ll sum = 0, tmp = 0, res = 1, cnt = 0, ct = 0, ans = 0, mn = LONG_MAX, mx = 0;
        bool flag = true, fun = false, f = false;
        cin >> n >> k;
        for (ll i = 1; i <= n; i++)
            cin >> a[i];
        sort(a + 1, a + n + 1);
        ll available[n + 5] = {};
        ll need[n + 5] = {};
        for (ll i = 1; i <= n; i++)
            available[i] += a[i] + available[i - 1];
        for (ll i = n; i >= 0; i--)
        {
            tmp = a[n] - a[i];
            need[i] = tmp;
            need[i] += need[i + 1];
        }
        ll sz = n;
        while (sz > 0)
        {
            ll dorker = need[n - sz + 1];
            ll ase = available[n - sz];
            // cout << dorker << " " << ase << nl;
            if (dorker >= ase)
            {
                if (k >= (dorker - ase))
                    break;
            }
            else
            {
                ase -= dorker;
                ll p = ase % sz;
                if (k >= sz - p or p == 0)
                    break;
            }
            sz--;
        }
        cout << sz << nl;
    }
    return SH;
}