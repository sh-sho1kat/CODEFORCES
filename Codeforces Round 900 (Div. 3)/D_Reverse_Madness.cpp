///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-09-27 01:18:16
 **/

#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define mod 1000000007
#define inf 1e18
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
        string s;
        cin >> s;
        ll a[k + 5], b[k + 5];
        ll c[n + 5] = {}, d[n + 5] = {};
        for (ll i = 1; i <= k; i++)
            cin >> a[i];
        for (ll i = 1; i <= k; i++)
            cin >> b[i];
        ll q;
        cin >> q;
        ll arr[q + 5];
        for (ll i = 0; i < q; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + q);
        ll qq = 0;
        for (ll i = 1; i <= k; i++)
        {
            for (ll j = 1; 2 * j <= (b[i] - a[i] + 1); j++)
            {
                c[a[i] + j - 1] = b[i] - j + 1;
            }
            while (arr[qq] >= a[i] && arr[qq] <= b[i] && qq < q)
            {
                ll x = arr[qq];
                ll y = b[i] + a[i] - x;
                if (x > y)
                    swap(x, y);
                d[x]++;
                d[y]--;
                qq++;
            }
        }
        for (ll i = 1; i <= n; i++)
            d[i] += d[i - 1];

        for (ll i = 1; i <= n; i++)
        {
            if (c[i] && d[i])
            {
                if (d[i] & 1)
                    swap(s[i - 1], s[c[i] - 1]);
            }
        }
        cout << s << nl;
    }
    return SH;
}