///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-05-14 21:46:30
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
        ll sum = 0, tmp = 0, res = 0, cnt = 0, ct = 0, ans = 0, mn = 0, mx = INT_MAX;
        bool flag = true, fun = false, f = false;
        ll n;
        cin >> n;
        ll a[n + 5];
        ll b[n + 5];
        for (ll i = 1; i <= n; i++)
            cin >> a[i];
        for (ll j = 1; j <= n; j++)
            cin >> b[j];
        sort(b + 1, b + n + 1);
        sort(a + 1, a + n + 1);
        ll k = 1;
        for (ll i = 1; i <= n; i++)
        {
            while (b[i] >= a[k] && k <= n)
            {
                k++;
            }
            b[i] = n - k + 1;
        }
        k = 0;
        ans = 1;
        for (ll i = n; i >= 1; i--)
        {
            ans = (ans * (b[i] - k)) % mod;
            k++;
        }
        cout << ans << nl;
        // ok;
    }
    return SH;
}