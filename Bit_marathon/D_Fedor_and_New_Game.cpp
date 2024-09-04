///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-11-14 09:05:09
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
    ll n, m, k;
    cin >> n >> m >> k;
    ll a[m + 5];
    for (ll i = 0; i <= m; i++)
        cin >> a[i];
    string bin = dtob(32, a[m]);
    ll ans = 0;
    for (ll i = 0; i < m; i++)
    {
        string bit = dtob(32, a[i]);
        ll cnt = 0;
        for (ll j = 0; j < bit.size(); j++)
        {
            if (bit[j] != bin[j])
                cnt++;
        }
        if (cnt <= k)
            ans++;
    }
    cout << ans << nl;
    return SH;
}