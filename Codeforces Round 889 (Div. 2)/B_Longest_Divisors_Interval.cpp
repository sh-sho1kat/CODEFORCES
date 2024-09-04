///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-07-29 20:51:42
 **/

#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define mod 1000000007
#define all(x) x.begin(), x.end()
#define eb emplace_back
#define ff first
#define ss second
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define dtob(p, n) bitset<p>(n).to_string()
#define btod(bin) stoi(bin, nullptr, 2)
#define ok cout << "Eureka" << nl
#define nl '\n'
#define SH 0
typedef long long ll;
typedef pair<ll, ll> pll;
typedef vector<ll> vl;
typedef vector<pll> vpll;

#define prime 10000000
bitset<prime + 5> checker;
vector<ll> Primes;
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
        map<ll, ll> mp;
        for (ll i = 1; i <= 50; i++)
        {
            if (n % i == 0)
            {
                mp[i]++;
            }
        }
        for (ll i = 1; i <= 50; i++)
        {
            if (mp[i] == 0)
            {
                ans = max(ans, cnt);
                cnt = 0;
            }
            else
                cnt++;
        }
        cout << ans << nl;
    }
    return SH;
}
