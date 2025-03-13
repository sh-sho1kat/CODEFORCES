#include <bits/stdc++.h>
using namespace std;

// 2024-12-15 01:25:09
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
    ll n;
    cin >> n;
    ll a[n + 5];
    for (ll i = 1; i<=n; i++)
        cin >> a[i];
    sort(a + 1, a + n + 1);
    ll sum = 0;
    for (ll i = 1; i < n; i++)
        sum += a[i];
    if ((sum + a[n]) % 2)
        no;
    else if (sum < a[n])
        no;
    else
        yes;
    return SH;
}