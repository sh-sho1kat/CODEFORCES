#include <bits/stdc++.h>
using namespace std;

// 2024-12-24 20:58:07
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
        ll n, d;
        cin >> n >> d;
        if (n == 2)
        {
            if (d == 1 or d == 2 or d == 4 or d == 8)
                cout << 1 << nl;
            else if (d == 3 or d == 6)
                cout << "1 3" << nl;
            else if (d == 5)
                cout << "1 5" << nl;
            else if (d == 7)
                cout << "1 7" << nl;
            else
                cout << "1 3 9" << nl;
        }
        else if (n == 3 or n == 4 or n == 5)
        {
            cout << "1 3 ";
            if (d == 5)
                cout << "5" << nl;
            cout << 7;
            if (d == 3 or d == 6 or d == 9)
                cout << " 9";
            cout << nl;
        }
        else
        {
            if (d == 5)
                cout << "1 3 5 7 9" << nl;
            else
                cout << "1 3 7 9" << nl;
        }
    }
    return SH;
}