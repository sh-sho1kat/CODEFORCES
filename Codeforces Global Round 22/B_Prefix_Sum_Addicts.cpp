#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define mod 1000000007
#define all(x) x.begin(), x.end()
#define eb emplace_back
#define pf push_front
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
        ll n, k;
        cin >> n >> k;
        ll a[k + 5];
        fr(0, k) cin >> a[i];
        res = a[k - 1] - a[k - 2];
        for (ll i = k - 2; i > 0; i--)
        {
            tmp = a[i] - a[i - 1];
            if (tmp <= res)
            {
                res = tmp;
            }
            else
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            if (n == k)
            {
                if (a[0] > res)
                {
                    flag = false;
                }
            }
            else
            {
                if (a[0] < 0)
                {
                    flag = false;
                }
            }
        }
        flag ? yes : no;
    }
    return SH;
}