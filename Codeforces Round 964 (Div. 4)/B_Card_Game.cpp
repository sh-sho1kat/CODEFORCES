#include <bits/stdc++.h>
using namespace std;

// 2024-08-11 12:57:29
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
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        if (b > a)
            swap(a, b);
        if (d > c)
            swap(c, d);
        if (a == b and b == c and c == d and d == a)
            res = 0;
        else if (a >= c and b >= c)
            res = 4;
        else if (a > c and b >= d)
            res = 2;
        else if (a >= c and b > d)
            res = 2;
        cout << res << nl;
    }
    return SH;
}