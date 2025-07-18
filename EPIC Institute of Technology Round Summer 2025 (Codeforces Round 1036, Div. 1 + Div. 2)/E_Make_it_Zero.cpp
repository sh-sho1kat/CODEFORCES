#include <bits/stdc++.h>
using namespace std;

// 2025-07-06 22:10:44
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define mod 1000000007
#define inf (1LL << 62)
#define all(x) x.begin(), x.end()
#define eb push_back
#define ff first
#define ss second
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
#define dtob(bits, n) bitset<bits>(n).to_string()
#define btod(bin) stoll(bin, nullptr, 2)
#define ok cout << "Eureka" << nl
#define nl '\n'
#define SH 0
typedef long long ll;
typedef pair<ll, ll> pll;
typedef vector<ll> vl;
typedef vector<pll> vpll;

ll arr[20][50005];

int main()
{
    fastio;
    ll t;
    cin >> t;
    while (t--)
    {
        ll sum = 0, tmp = 0, res = 0, cnt = 0, ct = 0, ans = 0, mn = LONG_MAX, mx = 0;
        bool flag = true, fun = false, f = false;
        ll n;
        cin >> n;
        ll a[n + 5];
        for (ll i = 1; i <= n; i++)
            cin >> a[i];
        ll k = 0;
        for (ll i = 0; i <= 63; i++)
        {
            cnt = 0;
            for (ll j = 1; j <= n; j++)
            {
                if (a[j] >= (1LL << i))
                    cnt++;
            }
            for (ll j = 1; j <= n; j++)
            {
                cout << a[j] << " ";
            }
            cout << nl;
            if (cnt & 1)
            {
                cout << i << " " << cnt << nl;
                flag = false;
                break;
            }
            else if (cnt)
            {
                k++;
                for (ll j = 1; j <= n; j++)
                {
                    if (a[j] >= (1LL << i))
                    {
                        a[j] -= (1LL << i);
                        arr[k][j] = (1LL << i);
                    }
                }
            }
        }
        if (flag)
        {
            cout << k << nl;
            for (ll i = 1; i <= k; i++)
            {
                for (ll j = 1; j <= n; j++)
                {
                    cout << arr[i][j] << " ";
                    arr[i][j] = 0;
                }
                cout << nl;
            }
        }
        else
            cout << -1 << nl;
    }
    return SH;
}