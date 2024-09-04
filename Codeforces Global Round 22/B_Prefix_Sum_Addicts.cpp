/****************************************************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ ******************************************************/

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-02-13 15:06:42
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
        ll n, k;
        cin >> n >> k;
        ll a[n + 5];
        fr(0, k) cin >> a[i];
        vl v;
        for (ll i = 1; i < k; i++)
        {
            v.eb(a[i] - a[i - 1]);
        }
        if (n == 1)
        {
            flag = true;
        }
        else if (is_sorted(v.begin(), v.end()))
        {
            fun = true;
        }
        if (fun)
        {
            ll p = n - k + 1;
            ll q = v[0];
            if (a[0] < 0)
            {
                flag = true;
            }
            if (v[0] == 0)
            {
                if (a[0] <= 0)
                {
                    flag = true;
                }
            }
            else
            {
                ll z = a[0] / q;
                if (a[0] % q)
                    z++;
                if (z <= p)
                {
                    flag = true;
                }
            }
        }
        flag ? yes : no;
    }
    return SH;
}