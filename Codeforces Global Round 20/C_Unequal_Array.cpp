#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define mod 1000000007
#define all(x) x.begin(), x.end()
#define eb emplace_back
#define pf push_front
#define fr(s, n) for (ll i = s; i < n; i++)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define nl '\n'
#define SH 0
typedef long long ll;
typedef pair<ll, ll> pll;
typedef vector<ll> vl;

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
        ll temp = n - 1;
        ll a[n + 5];
        fr(0, n) cin >> a[i];
        fr(1, n)
        {
            if (a[i] == a[i - 1])
            {
                tmp = i;
                break;
            }
        }
        for (ll i = n - 2; i >= 0; i--)
        {
            if (a[i] == a[i + 1])
            {
                temp = i;
                break;
            }
        }
        if (tmp == 0 || tmp > temp)
            cout << "0" << nl;
        else if (tmp == temp)
        {
            cout << "1" << nl;
        }
        else
            cout << temp - tmp << nl;
    }
    return SH;
}