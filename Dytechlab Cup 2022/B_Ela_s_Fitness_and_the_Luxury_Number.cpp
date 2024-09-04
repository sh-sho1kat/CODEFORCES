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
        ll l, r;
        cin >> l >> r;
        ll lb = sqrtl(l);
        ll ub = sqrtl(r);
        res = (ub - lb - 1) * 3;
        unsigned long long a, b, c;
        a = lb * lb;
        if (l == a)
        {
            res += 3;
        }
        else if ((l <= a + lb) && l > a)
        {
            res += 2;
        }
        else if ((l <= a + 2 * lb) && (l > a + lb))
        {
            res++;
        }

        a = ub * ub;
        if ((r < a + ub) && (r >= a))
        {
            res++;
        }
        else if ((r < a + 2 * ub) && (r >= a + ub))
        {
            res += 2;
        }
        else if (r == a + 2 * ub)
        {
            res += 3;
        }
        cout << res << nl;
    }
    return SH;
}