#include <bits/stdc++.h>
using namespace std;

// 2025-06-02 21:01:07
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

ll a, b, c;

void adapt()
{
    vl v = {a, b, c};
    sort(all(v));
    a = v[0], b = v[1], c = v[2];
}

int main()
{
    fastio;
    cin >> a >> b >> c;
    adapt();
    ll res = 0;
    if (c >= (a + b) * 2)
        res = a + b;
    else
        res = (a + b + c) / 3;

    cout << res << nl;
    return SH;
}