#include <bits/stdc++.h>
using namespace std;

// 2024-12-13 11:59:02
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

int main()
{
    fastio;
    ll n, p, q;
    cin >> n >> p >> q;
    ll k = p + q;
    ll a[n + 5] = {}, b[n + 5] = {}, c[n + 5] = {};
    for (ll i = 1; i <= n; i++)
        cin >> a[i];
    for (ll i = 1; i <= n; i++)
        cin >> b[i];

    for (ll i = 1; i <= n + 1; i++)
        c[i] = abs(a[i] - b[i]);
    sort(c + 1, c + n + 1, greater<ll>());
    ll mx = c[1];
    ll idx = 1;
    ll idx2 = 0;
    // for (ll i = 1; i <= n + 1; i++)
    //     cout << c[i] << " ";
    // cout << nl;
    for (ll i = 2; i <= n + 1; i++)
    {
        ll tmp = (c[i - 1] - c[i]) * (i - 1);
        if (k >= tmp)
        {
            k -= tmp;
            idx = i;
            mx = c[i];
        }
        else
        {
            ll p = k / (i - 1);
            //(c[i - 1] - c[i]);
            ll rem = k % (i - 1);
            if (rem)
            {
                idx2 = i - 1 - rem;
                mx = c[i - 1] - p - 1;
            }
            else
                mx = c[i - 1] - p;
            idx = i - 1;
            k = 0;
            break;
        }
    }
    // cout << idx2 << " " << idx << " " << mx << nl;
    ll res = 0;
    for (ll i = 1; i <= idx2; i++)
        res += (mx + 1) * (mx + 1);
    for (ll i = idx2 + 1; i <= idx; i++)
        res += mx * mx;
    for (ll i = idx + 1; i <= n; i++)
        res += c[i] * c[i];
    if (k & 1)
        res = 1;
    cout << res << nl;
    return SH;
}