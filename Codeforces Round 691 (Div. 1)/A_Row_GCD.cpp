#include <bits/stdc++.h>
using namespace std;

// 2025-03-14 12:02:27
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
    ll n, m;
    cin >> n >> m;
    ll a[n + 5], b[m + 5];
    for (ll i = 1; i <= n; i++)
        cin >> a[i];
    for (ll i = 1; i <= m; i++)
        cin >> b[i];
    ll gc = a[n] - a[1];
    for (ll i = 2; i <= n; i++)
        gc = __gcd(gc, a[i - 1] - a[i]);
    for (ll i = 1; i <= m; i++)
        cout << abs(__gcd(a[1] + b[i], gc)) << " ";
    cout << nl;

    return SH;
}