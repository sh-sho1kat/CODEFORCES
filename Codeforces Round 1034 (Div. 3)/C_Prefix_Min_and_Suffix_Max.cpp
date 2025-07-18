#include <bits/stdc++.h>
using namespace std;

// 2025-07-01 14:54:31
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
        ll arr[n + 5] = {};
        tmp = a[1];
        arr[1] = 1;
        arr[n] = 1;
        ll pmx[n + 5] = {};
        ll pmn[n + 5] = {};
        ll smx[n + 5] = {};
        ll smn[n + 5] = {};

        pmx[1] = pmn[1] = a[1];
        smx[n] = smn[n] = a[n];

        for (ll i = 2; i <= n; i++)
        {
            pmx[i] = pmx[i - 1];
            if (a[i] > pmx[i])
                pmx[i] = a[i];

            pmn[i] = pmn[i - 1];
            if (a[i] < pmn[i])
                pmn[i] = a[i];
        }

        for (ll i = n - 1; i >= 1; i--)
        {
            smx[i] = smx[i + 1];
            if (a[i] > smx[i])
                smx[i] = a[i];

            smn[i] = smn[i + 1];
            if (a[i] < smn[i])
                smn[i] = a[i];
        }

        for (ll i = 2; i < n; i++)
        {
            if (pmn[i - 1] >= a[i])
                arr[i] = 1;
            else if (smx[i + 1] <= a[i])
                arr[i] = 1;
        }
        for (ll i = 1; i <= n; i++)
            cout << arr[i];
        cout << nl;
    }
    return SH;
}