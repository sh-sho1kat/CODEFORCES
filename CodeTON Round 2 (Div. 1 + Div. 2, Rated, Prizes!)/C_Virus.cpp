///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-02-26 02:29:05
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
        ll p, n;
        cin >> p >> n;
        ll a[n + 5];
        fr(0, n) cin >> a[i];
        sort(a, a + n);
        vl v;
        for (ll i = 1; i < n; i++)
        {
            v.eb(a[i] - a[i - 1] - 1);
        }
        v.eb(p - a[n - 1] + a[0] - 1);
        sort(all(v), greater<ll>());
        // ap(v, v.size());
        ll tt = 0;
        for (ll i = 0; i < v.size(); i++)
        {
            ll ttt = v[i] - tt - 1;
            if (ttt > 0)
                sum += ttt;
            else if (ttt == 0)
                sum += ttt + 1;
            else
                break;
            tt += 4;
        }
        cout << p - sum << nl;
    }
    return SH;
}