/************************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ ***************************/

/**
 *         author: Shefat Hossen Shoikat
 *         date  : 2023-01-29 16:55:48
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
        bool flag = false, fun = false;
        ll n, m;
        cin >> n >> m;
        ll a[n + 5];
        fr(0, n) cin >> a[i];
        // sort(a, a + n);
        fr(0, n)
        {
            sum += a[i];
        }
        ll cnt1 = 1;
        ll cnt2 = 1;
        for (ll i = 0; i < n; i++)
        {
            if ((sum - a[i]) % m)
            {
                fun = true;
                break;
            }
            else
                cnt1++;
        }
        for (ll i = n - 1; i >= 0; i--)
        {
            if ((sum - a[i]) % m)
            {
                flag = true;
                break;
            }
            else
                cnt2++;
        }
        if (sum % m != 0)
            cout << n << nl;
        else if (fun)
            cout << max(cnt1, max((n - cnt1), max(cnt2, (n - cnt2)))) << nl;
        else
            cout << -1 << nl;
    }
    return SH;
}