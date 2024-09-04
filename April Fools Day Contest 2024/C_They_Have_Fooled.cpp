#include <bits/stdc++.h>
using namespace std;

// 2024-04-05 00:11:32
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
    ll n;
    cin >> n;
    if (n == 0)
        cout << 10 << nl;
    else if (n == 1)
        cout << 10 << nl;
    else if (n == 2)
        cout << 8 << nl;
    else if (n == 3)
        cout << 9 << nl;
    else if (n == 4)
        cout << 8 << nl;
    else if (n == 5)
        cout << 7 << nl;
    else if (n == 6)
        cout << 7 << nl;
    else if (n == 7)
        cout << 7 << nl;
    else if (n == 8)
        cout << 7 << nl;
    else if (n == 9)
        cout << 0 << nl;
    else if (n == 10)
        cout << 9 << nl;
    else if (n == 11)
        cout << 6 << nl;
    else if (n == 12)
        cout << 8 << nl;

    return SH;
}