///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2024-02-29 20:12:47
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
    ll n;
    cin >> n;
    ll a[n + 5];
    ll cnt = 0;
    for (ll i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (a[i] == 1)
            cnt++;
    }

    ll mn = inf;
    for (ll i = 1; i <= n; i++)
    {
        ll gcd = a[i];
        for (ll j = i + 1; j <= n; j++)
        {
            gcd = __gcd(gcd, a[j]);
            if (gcd == 1)
            {
                mn = min(mn, j - i);
                break;
            }
        }
    }
    if (cnt)
        cout << n - cnt << nl;
    else if (mn == inf)
        cout << -1 << nl;
    else
        cout << n - 1 + mn << nl;
    return SH;
}