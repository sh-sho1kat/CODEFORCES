#include <bits/stdc++.h>
using namespace std;

// 2025-05-02 23:35:52
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

ll n, m;
string s;
ll dp[1 << 18][101];

ll func(ll mask, ll rem)
{
    ll pos = __builtin_popcount(mask);
    if (pos >= n)
        return !rem;
    ll &res = dp[mask][rem];
    if (res != -1)
        return res;
    res++;
    char ch = '#';
    if (pos == 0)
        ch = '0';
    ll chk = 0;
    for (ll i = 0; i < n; i++)
        if (s[i] != ch and !((mask >> i) & 1) and !((chk >> (s[i] - '0') & 1)))
            res += func(mask | (1 << i), ((s[i] - '0') + (10 * rem) % m) % m), chk |= (1 << (s[i] - '0'));
    return res;
}

int main()
{
    fastio;
    cin >> s >> m;
    n = s.size();
    memset(dp, -1, sizeof dp);
    ll res = func(0, 0);
    cout << res << nl;

    return SH;
}