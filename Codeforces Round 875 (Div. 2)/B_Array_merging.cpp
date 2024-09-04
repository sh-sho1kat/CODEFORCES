///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-05-29 06:37:51
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
        ll sum = 0, tmp = 0, res = 0, cnt = 1, ct = 0, ans = 0, mn = 0, mx = INT_MAX;
        bool flag = true, fun = false, f = false;
        ll n;
        cin >> n;
        ll a[n + 5];
        ll b[n + 5];
        for (ll i = 1; i <= n; i++)
            cin >> a[i];
        for (ll i = 1; i <= n; i++)
            cin >> b[i];
        if (n == 1)
        {
            if (a[1] == b[1])
                cout << 2 << nl;
            else
                cout << 1 << nl;
            continue;
        }
        map<ll, ll> mp1, mp2;
        for (ll i = 2; i <= n; i++)
        {
            if (a[i] != a[i - 1])
            {
                mp1[a[i - 1]] = max(cnt, mp1[a[i - 1]]);
                cnt = 1;
            }
            else
                cnt++;
        }
        mp1[a[n]] = max(cnt, mp1[a[n]]);
        cnt = 1;
        for (ll i = 2; i <= n; i++)
        {
            if (b[i] != b[i - 1])
            {
                mp2[b[i - 1]] = max(cnt, mp2[b[i - 1]]);
                cnt = 1;
            }
            else
                cnt++;
        }
        mp2[b[n]] = max(cnt, mp2[b[n]]);
        for (ll i = 1; i <= 2 * n; i++)
        {
            ans = max(ans, mp1[i] + mp2[i]);
        }
        cout << ans << nl;
    }
    return SH;
}