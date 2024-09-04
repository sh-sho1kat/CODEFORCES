///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-04-08 02:17:46
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
ll fib[100];
bool check(ll n, ll x, ll y)
{
    if (n == 1)
        return true;
    ll height = fib[n];
    ll width = fib[n + 1];
    if (y > width - height && y <= height)
        return false;
    if (y >= height)
        y = y - height;
    return check(n - 1, y, x);
}

int main()
{
    fib[0] = 1;
    fib[1] = 1;
    for (ll i = 2; i <= 50; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    fastio;
    ll t;
    cin >> t;
    while (t--)
    {
        ll sum = 0, tmp = 0, res = 0, cnt = 0, count = 0, ans = 0;
        bool flag = true, fun = false;
        ll n, a, b;
        cin >> n >> a >> b;
        (check(n, a, b)) ? yes : no;
    }
    return SH;
}