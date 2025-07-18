#include <bits/stdc++.h>
using namespace std;

// 2025-03-14 17:45:56
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
    ll a[n + 5];
    for (ll i = 1; i <= n; i++)
        cin >> a[i];
    if (n > m)
    {
        cout << 0 << nl;
        return 0;
    }
    ll fact = 1;
    for (ll i = 1; i <= n; i++)
    {
        for (ll j = i + 1; j <= n; j++)
        {
            fact *= (abs(a[i] - a[j]));
            fact %= m;
        }
    }
    cout << fact;
    return SH;
}