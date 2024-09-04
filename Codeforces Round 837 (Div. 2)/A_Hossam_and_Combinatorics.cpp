//                        بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ

#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define mod 1000000007
#define all(x) x.begin(), x.end()
#define eb emplace_back
#define pf push_front
#define mp make_pair
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
        bool flag = true;
        ll n;
        cin >> n;
        vl a;
        for (ll i = 0; i < n; i++)
        {
            ll p;
            cin >> p;
            a.eb(p);
        }
        ll mx = 0;
        ll mn = LONG_LONG_MAX;
        // // cout << mn << nl;
        // for (ll i = 0; i < n; i++)
        // {
        //     mx = max(mx, a[i]);
        //     mn = min(mn, a[i]);
        // }
        sort(all(a));
        mx = a[n - 1];
        mn = a[0];
        ll mxc = 0, mnc = 0;
        for (ll i = 0; i < n; i++)
        {
            if (a[i] == mx)
                mxc++;
            if (a[i] == mn)
                mnc++;
        }
        ll answ = 2 * mxc * mnc;
        if (mx == mn)
            answ = n * (n - 1);
        cout << answ << nl;
    }
    return SH;
}