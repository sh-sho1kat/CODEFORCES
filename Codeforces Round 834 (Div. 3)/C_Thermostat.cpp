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
        bool flag = false;
        ll l, r, x;
        cin >> l >> r >> x;
        ll a, b;
        cin >> a >> b;
        if (a == b)
        {
            flag = true;
        }
        else
        {
            if (((b - a) >= x) || ((a - b) >= x))
            {
                ans = 1;
                flag = true;
            }
            else if (b > a)
            {
                ll t1 = b + x;
                ll t2 = a - x;
                ll t3 = b - x;
                ll t4 = a + x;
                if (r >= t1)
                {
                    ans = 2;
                    flag = true;
                }
                else if (t2 >= l)
                {
                    ans = 2;
                    flag = true;
                }
                else if ((t4 <= r) && t3 >= l)
                {
                    ans = 3;
                    flag = true;
                }
            }
            else
            {
                ll t1 = b + x;
                ll t2 = a - x;
                ll t3 = b - x;
                ll t4 = a + x;
                if (r >= t4)
                {
                    ans = 2;
                    flag = true;
                }
                else if (t3 >= l)
                {
                    ans = 2;
                    flag = true;
                }
                else if (t1 <= r && t2 >= l)
                {
                    ans = 3;
                    flag = true;
                }
            }
        }
        if (flag)
        {
            cout << ans << nl;
        }
        else
        {
            cout << "-1" << nl;
        }
    }
    return SH;
}