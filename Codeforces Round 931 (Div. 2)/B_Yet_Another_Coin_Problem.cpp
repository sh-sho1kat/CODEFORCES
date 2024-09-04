///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2024-03-02 12:12:47
 **/

#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define mod 1000000007
#define inf (1LL << 62)
#define all(x) x.begin(), x.end()
#define eb emplace_back
#define ff first
#define ss second
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
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
        ll a[5] = {1, 3, 6, 10, 15};
        ll dp[20];
        dp[0] = 0;
        for (ll i = 1; i <= 15; i++)
            dp[i] = inf;
        for (ll i = 1; i <= 15; i++)
        {
            for (ll j = 0; j < 5; j++)
            {
                if (i >= a[j])
                    dp[i] = min(dp[i], dp[i - a[j]] + 1);
            }
        }
        if (n % 15 == 5 && n >= 15)
            cout << n / 15 + 1 << nl;
        else if (n % 15 == 8 && n >= 15)
            cout << n / 15 + 2 << nl;
        else
            cout << n / 15 + dp[n % 15] << nl;
    }
    return SH;
}