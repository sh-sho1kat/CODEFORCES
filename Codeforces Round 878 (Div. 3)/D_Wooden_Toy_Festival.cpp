///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-12-25 12:39:56
 **/

#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define mod 1000000007
#define inf (1LL << 62)
#define all(x) x.begin(), x.end()
#define eb emplace_back
#define ff first
#define ss second
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define dtob(p, n) bitset<p>(n).to_string()
#define btod(bin) stoi(bin, nullptr, 2)
#define ok cout << "Eureka" << nl
#define nl '\n'
#define SH 0
typedef long long ll;
typedef pair<ll, ll> pll;
typedef vector<ll> vl;
typedef vector<pll> vpll;

bool func(ll a[], ll n, ll dif)
{
    ll cnt = 0;
    ll tmp = a[0] + 2 * dif;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] > tmp)
        {
            cnt++;
            tmp = a[i] + 2 * dif;
        }
        if (cnt >= 3)
            return false;
    }
    return true;
}

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
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        ll low = 0, high = mod;
        while (low <= high)
        {
            ll mid = high - (high - low) / 2;
            if (func(a, n, mid))
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        cout << low << nl;
    }
    return SH;
}