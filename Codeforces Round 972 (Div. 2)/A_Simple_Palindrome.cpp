#include <bits/stdc++.h>
using namespace std;

// 2024-09-14 20:43:04
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
        ll n;
        cin >> n;
        ll a[10] = {};
        ll p = n / 5;
        ll rem = n % 5;
        for (ll i = 0; i < 5; i++)
            a[i] = p;
        for (ll i = 0; i < rem; i++)
            a[i]++;
        string s = "aeiou";
        for (ll i = 0; i < 5; i++)
        {
            for (ll j = 0; j < a[i]; j++)
                cout << s[i];
        }
        cout << nl;
    }
    return SH;
}