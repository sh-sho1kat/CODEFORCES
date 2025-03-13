#include <bits/stdc++.h>
using namespace std;

// 2024-10-25 00:16:04
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
    ll t;
    cin >> t;
    while (t--)
    {
        ll sum = 0, tmp = 0, res = 0, cnt = 0, ct = 0, ans = 0, mn = LONG_MAX, mx = 0;
        bool flag = true, fun = false, f = false;
        ll n, k;
        cin >> n >> k;
        n %= mod;
        ll a = 0, b = 1;
        ll fib = 1;
        cnt = 1;
        while (fib % k)
        {
            ++cnt;
            fib = a + b;
            fib %= k;
            a = b;
            b = fib;
        }
        cout << (cnt * n) % mod << nl;
    }
    return SH;
}

// Pisano Period;

// The Pisano period is the period with which the sequence of Fibonacci numbers taken modulo
// n repeats. In other words, it’s the length of the cycle in the sequence of Fibonacci numbers
// when considered under modular arithmetic.
// For example, the Fibonacci sequence modulo 3 (Fibonacci numbers taken modulo 3) is:
// 0,1,1,2,0,2,2,1,0,1,1,2,0,2,2,1,…

// The repeating pattern here is
// 0,1,1,2,0,2,2,1, which has a length of 8. Therefore, the Pisano period for
// n=3 is 8.