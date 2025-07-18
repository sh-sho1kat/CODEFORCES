#include <bits/stdc++.h>
using namespace std;

// 2025-06-26 02:30:01
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
        bool flag = false, fun = false, f = false;
        ll n;
        cin >> n;
        ll a[n + 5];
        for (ll i = 1; i <= n; i++)
            cin >> a[i];
        if (n == 2)
        {
            if (abs(a[2] - a[1]) <= 1)
                cout << 0 << nl;
            else
                cout << -1 << nl;
        }
        else
        {
            for (ll i = 2; i <= n; i++)
            {
                if (abs(a[i] - a[i - 1]) <= 1)
                    fun = true;
            }
            if (fun)
                cout << 0 << nl;
            else
            {
                for (ll i = 2; i < n; i++)
                {
                    if ((a[i] > a[i - 1] and a[i] > a[i + 1]) or (a[i] < a[i - 1] and a[i] < a[i + 1]))
                        flag = true;
                }
                if (flag)
                    cout << 1 << nl;
                else
                    cout << -1 << nl;
            }
        }
    }
    return SH;
}