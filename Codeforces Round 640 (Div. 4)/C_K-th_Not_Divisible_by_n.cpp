//                        بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ

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

ll binary_search(ll left, ll right, ll n)
{
    if (left > right)
        return 0;
    if ((left % n) == 0)
    {
        return 1;
    }
    if ((left % n) > (right % n))
    {
        return 1;
    }
    return 0;
}

int main()
{
    fastio;
    ll t;
    cin >> t;
    while (t--)
    {
        ll sum = 0, tmp = 0, res = 0, cnt = 0, count = 0, ans = 0;
        bool flag = true, fun = false;
        ll n, k;
        cin >> n >> k;
        ans = k;
        while (k > 0)
        {
            // ans += k;
            ll div = k / n;
            ll right = ans + div;
            ll left = ans + ((div / n) * n) + 1;
            ans += div;
            // cout << ans << " " << left << " " << right << nl;
            if (binary_search(left, right, n))
            {
                ans++;
            }
            k = div;
        }
        cout << ans << nl;
    }
    return SH;
}