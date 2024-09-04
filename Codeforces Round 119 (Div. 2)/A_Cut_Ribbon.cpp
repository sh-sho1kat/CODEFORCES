///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-05-15 01:58:58
 **/

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
#define dtob(p, n) bitset<p>(n).to_string()
#define btod(bin) stoi(bin, nullptr, 2)
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
ll ans = 0;
void ribbon(ll n, ll a, ll b, ll c, ll p, ll cnt)
{
    if (p == n)
    {
        ans = max(ans, cnt);
        return;
    }

    if (p > n)
        return;
    cnt++;
    ribbon(n, a, b, c, p + a, cnt);
    ribbon(n, a, b, c, p + b, cnt);
    ribbon(n, a, b, c, p + c, cnt);
    ribbon(n, a, b, c, p + a + b, cnt);
    ribbon(n, a, b, c, p + a + c, cnt);
    ribbon(n, a, b, c, p + b + c, cnt);
    ribbon(n, a, b, c, p + a + b + c, cnt);
}

int main()
{
    fastio;
    ll n, a, b, c;
    cin >> n >> a >> b >> c;
    // ribbon(n, a, b, c, 0, 0);
    for (ll i = 0; i <= n; i += a)
    {
        for (ll j = 0; j <= n; j += b)
        {
            if (((n - i - j) % c) == 0 && n >= (i + j))
            {
                // cout << i << " " << j << " " << n - i - j << nl;
                ans = max(ans, ((i / a) + (j / b) + (n - i - j) / c));
            }
        }
    }
    cout << ans << nl;
    return SH;
}