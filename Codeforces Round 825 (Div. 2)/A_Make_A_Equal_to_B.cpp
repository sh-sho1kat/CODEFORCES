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
        ll a[n + 5];
        ll b[n + 5];
        fr(0, n) cin >> a[i];
        fr(0, n) cin >> b[i];
        ll a0 = 0, b0 = 0, a1 = 0, b1 = 0;
        ll f1 = 0, f2 = 0;
        fr(0, n)
        {
            if (a[i])
                a1++;
            else
                a0++;
        }
        fr(0, n)
        {
            if (b[i])
                b1++;
            else
                b0++;
        }
        if (b1 > a1)
        {
            res = b1 - a1;
            flag = false;
        }
        else if (a1 > b1)
        {
            res = b0 - a0;
        }
        else
        {
            fr(0, n)
            {
                if (a[i] != b[i])
                {
                    sum = 1;
                    break;
                }
            }
        }
        if (flag == false)
        {
            for (ll i = 0; i < n; i++)
            {
                if (a[i] == 1 && b[i] == 0)
                {
                    f1 = 1;
                }
            }
            if (f1)
            {
                res += 1;
            }
        }
        else
        {
            fr(0, n)
            {
                if (a[i] == 0 && b[i] == 1)
                {
                    f2 = 1;
                }
            }
            if (f2 == 1)
            {
                res += 1;
            }
        }
        if (sum)
            res = 1;
        else if (sum == 2)
        {
            res = 0;
        }
        cout << res << nl;
    }
    return SH;
}