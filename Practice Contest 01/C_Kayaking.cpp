///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-11-10 10:14:10
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
#define dtob(p, n) bitset<p>(n).to_string()
#define btod(bin) stoi(bin, nullptr, 2)
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
    n *= 2;
    ll a[n + 5];
    for (ll i = 1; i <= n; i++)
        cin >> a[i];
    sort(a + 1, a + n + 1);
    ll ans = 0;
    ll res = inf;
    for (ll i = 1; i <= n; i += 2)
    {
        for (ll j = i + 1; j <= n; j += 2)
        {
            ans = 0;
            for (ll k = 1; k < n; k += 2)
            {
                if (k == i)
                    k++;
                if (k == j)
                    k++;
                if (k >= n)
                    break;
                ans += a[k + 1] - a[k];
            }
            res = min(res, ans);
        }
    }
    cout << res << nl;
    return SH;
}