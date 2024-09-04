//                        بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ

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
        bool flag = true, fun = false;
        ll n;
        cin >> n;
        ll fact = 0;
        ll i = 1, j = 1;
        // ll ssum = ((((n % mod * (n + 1) % mod) % mod) % mod * (2 * n + 1) % mod) % mod / 6);
        // ll nsum = 0;
        // j = 2;
        // i = 1;
        // // for (ll p = 1; p < n; j++)
        // // {
        // //     nsum += i;
        // //     i += j;
        // //     p++;
        // // }
        // nsum = (((n % mod * (((n % mod * n % mod) % mod) + 5) % mod)) % mod / 6) - n;
        // cout << nsum << " " << ssum << nl;

        // nsum = (nsum % mod * 2) % mod;
        // ans = ssum + nsum;
        // ans = (ans % mod * 2022) % mod;
        ans = (((((337 % mod * (4 * n - 1) % mod) % mod) % mod * n % mod) % mod) % mod * (n + 1) % mod) % mod;
        cout << ans << nl;
    }
    return SH;
}