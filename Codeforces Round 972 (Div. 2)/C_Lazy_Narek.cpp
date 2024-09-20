#include <bits/stdc++.h>
using namespace std;

// 2024-09-16 10:46:28
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

ll n, m;
char v[1005][1005];
string s = "narek";
ll dp[1005][10];

ll func(ll pos, ll prepos)
{

    if (pos == n)
    {
        return -prepos;
    }
    if (dp[pos][prepos] != -inf)
        return dp[pos][prepos];
    ll res1 = 0, res2 = 0;
    ll cur = prepos;
    for (ll i = 0; i < m; i++)
    {
        if (v[pos][i] == s[cur])
        {
            cur++;
        }
        else if (v[pos][i] == 'n' or v[pos][i] == 'a' or v[pos][i] == 'r' or v[pos][i] == 'e' or v[pos][i] == 'k')
            res2++;
        if (cur == 5)
        {
            res1 += 5;
            cur = 0;
        }
    }
    ll nibo = res1 - res2;
    ll nibona = 0;
    return dp[pos][prepos] = max(nibo + func(pos + 1, cur), nibona + func(pos + 1, prepos));
}

int main()
{
    fastio;
    ll t;
    cin >> t;
    while (t--)
    {
        ll sum = 0, tmp = 0, res = 0, cnt = 0, ct = 0, ans = 0, mn = LONG_MAX, mx = 0;
        bool flag = true, fun = false, f = false;
        cin >> n >> m;
        for (ll i = 0; i <= n; i++)
        {
            for (ll j = 0; j <= 5; j++)
                dp[i][j] = -inf;
        }
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < m; j++)
                cin >> v[i][j];
        }
        ll result = func(0, 0);
        cout << result << nl;
    }
    return SH;
}