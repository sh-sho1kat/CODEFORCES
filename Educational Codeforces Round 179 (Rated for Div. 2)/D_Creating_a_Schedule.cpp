#include <bits/stdc++.h>
using namespace std;

// 2025-06-03 21:51:27
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

        ll n, m;
        cin >> n >> m;
        ll a[m + 5];
        for (ll i = 1; i <= m; i++)
            cin >> a[i];
        sort(a + 1, a + m + 1);
        ll p = 1, q = m;
        for (ll i = 1; i <= n / 2; i++)
        {
            for (ll j = 1; j <= 6; j += 2)
                cout << a[p] << " " << a[q] << " ";
            cout << nl;
            for (ll j = 1; j <= 6; j += 2)
                cout << a[q] << " " << a[p] << " ";
            cout << nl;
            p++;
            q--;
        }
        if (n & 1)
        {
            for (ll i = 1; i <= 6; i += 2)
                cout << a[p] << " " << a[q] << " ";
            cout << nl;
        }
    }
    return SH;
}