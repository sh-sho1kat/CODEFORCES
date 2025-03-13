#include <bits/stdc++.h>
using namespace std;

// 2025-03-11 11:53:22
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

ll pref[10][200005];

int main()
{
    fastio;
    ll n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    s = "#" + s;

    vector<string> v = {"abc", "acb", "bac", "bca", "cab", "cba"};

    for (ll i = 0; i < 6; i++)
    {
        string p = v[i];
        for (ll j = 1; j <= n; j += 3)
        {
            if (s[j] != p[0] and j <= n)
                pref[i][j] = 1;
            if (s[j + 1] != p[1] and j + 1 <= n)
                pref[i][j + 1] = 1;
            if (s[j + 2] != p[2] and j + 2 <= n)
                pref[i][j + 2] = 1;
        }
        for (ll j = 1; j <= n; j++)
            pref[i][j] += pref[i][j - 1];
    }
    while (q--)
    {
        ll l, r;
        cin >> l >> r;
        ll res = inf;
        for (ll i = 0; i < 6; i++)
        {
            ll tmp = pref[i][r] - pref[i][l - 1];
            res = min(res, tmp);
        }
        cout << res << nl;
    }
    return SH;
}