#include <bits/stdc++.h>
using namespace std;

// 2024-04-08 11:32:13
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define mod 1000000007
#define inf (1LL << 62)
#define all(x) x.begin(), x.end()
#define eb emplace_back
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

int main()
{
    fastio;
    ll t;
    cin >> t;
    while (t--)
    {
        ll sum = 0, tmp = 0, res = 0, cnt = 0, ct = 0, ans = 0, mn = LONG_MAX, mx = 0;
        bool flag = true, fun = false, f = false;
        ll n, k;
        cin >> n >> k;
        ll a[n + 5];
        for (ll i = 1; i <= n; i++)
            cin >> a[i];
        a[0] = inf;
        swap(a[1], a[k]);
        for (ll i = 2; i <= n; i++)
        {
            if (a[i] < a[1])
                cnt++;
            else
                break;
        }
        ans = cnt;
        cnt = 0;
        swap(a[1], a[k]);
        for (ll i = 1; i < k; i++)
        {
            if (a[i] > a[k])
            {
                swap(a[i], a[k]);
                if (a[i - 1] < a[i])
                    cnt++;
                for (ll j = i + 1; j <= n; j++)
                {
                    if (a[j] < a[i])
                        cnt++;
                    else
                        break;
                }
                ans = max(ans, cnt);
                break;
            }
        }
        cout << ans << nl;
    }
    return SH;
}