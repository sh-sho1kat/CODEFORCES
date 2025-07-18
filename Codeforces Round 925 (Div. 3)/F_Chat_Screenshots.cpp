#include <bits/stdc++.h>
using namespace std;

// 2025-04-05 13:59:52
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
        ll n, k;
        cin >> n >> k;
        ll a[k + 5][n + 5] = {};

        for (ll i = 1; i <= k; i++)
        {
            for (ll j = 1; j <= n; j++)
                cin >> a[i][j];
        }
        ll ar[n + 5] = {};
        for (ll i = 2; i <= n; i++)
            ar[i] = a[1][i];
        ll p = a[1][1];
        ll prev, next;
        for (ll i = 2; i <= n; i++)
            if (a[2][i] == p)
                prev = a[2][i - 1], next = a[2][i + 1];
        if (prev == a[2][1])
        {
            ar[1] = p;
        }
        else
        {
            for (ll i = 2; i <= n; i++)
            {
                ar[i - 1] = ar[i];
                if (ar[i] == prev)
                {
                    ar[i] = p;
                    break;
                }
            }
        }
        f = false;
    arekbar:
        flag = true;
        for (ll i = 1; i <= k; i++)
        {
            tmp = a[i][1];
            ll idx = 1;
            for (ll j = 2; j <= n; j++)
            {
                if (ar[idx] == tmp)
                    idx++;
                if (ar[idx++] != a[i][j])
                    flag = false;
            }
        }
        if (flag)
            f = true;
        for (ll i = 2; i <= n; i++)
        {
            if (ar[i] == a[2][1] and ar[i - 1] == a[1][1])
            {
                swap(ar[i], ar[i - 1]);
                goto arekbar;
            }
        }
        if (k == 1 or n <= 2)
            yes;
        else if (f)
            yes;
        else
            no;
    }
    return SH;
}