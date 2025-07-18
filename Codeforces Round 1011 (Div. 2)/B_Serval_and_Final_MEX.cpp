#include <bits/stdc++.h>
using namespace std;

// 2025-03-25 12:30:13
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
        bool f1 = false;
        bool f2 = false;
        for (ll i = 2; i <= n; i++)
            if (a[i] == 0)
                f1 = true;
        for (ll i = 3; i <= n; i++)
            if (a[i] == 0)
                f2 = true;
        if (a[1])
        {
            if (f1)
            {
                cout << 2 << " " << nl;
                cout << 2 << " " << n << nl;
                cout << 1 << " " << 2 << nl;
            }
            else
            {
                cout << 1 << nl;
                cout << 1 << " " << n << nl;
            }
        }
        else
        {
            if (f2)
            {
                cout << 3 << nl;
                cout << 3 << " " << n << nl;
                cout << 1 << " " << 2 << nl;
                cout << 1 << " " << 2 << nl;
            }
            else
            {
                cout << 2 << nl;
                cout << 1 << " " << 2 << nl;
                cout << 1 << " " << n - 1 << nl;
            }
        }
    }
    return SH;
}