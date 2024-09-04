///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-03-08 07:34:36
 **/

#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define mod 1000000007
#define all(x) x.begin(), x.end()
#define eb emplace_back
#define pf push_front
#define MP make_pair
#define ff first
#define ss second
#define fr(s, n) for (ll i = s; i < n; i++)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define dtob(p, n) bitset<p>(n).to_string()
#define btod(bin) stoi(bin, nullptr, 2)
#define nl '\n'
#define SH 0
typedef long long ll;
typedef pair<ll, ll> pll;
typedef vector<ll> vl;
typedef vector<pll> vpll;

#define ok cout << "Eureka" << nl
#define ap(arr, n)             \
    for (ll i = 0; i < n; i++) \
        cout << arr[i] << " "; \
    cout << nl;

int main()
{
    fastio;
    ll n, sm;
    cin >> n >> sm;
    if (sm == 0 && n > 1 || sm > 9 * n)
    {
        cout << -1 << " " << -1 << nl;
        return SH;
    }
    ll a[n + 5] = {0};
    ll b[n + 5] = {0};
    ll t = sm;
    ll d = 9;
    for (ll i = n - 1; i >= 0; i--)
    {
        ll p = min(t, (ll)9);
        a[i] = p;
        t -= p;
    }
    for (ll i = 0; i < n; i++)
    {
        if (a[i] != 0)
        {
            a[i]--;
            a[0]++;
            break;
        }
    }
    t = sm;
    for (ll i = 0; i < n; i++)
    {
        ll p = min(d, t);
        b[i] = p;
        t -= p;
    }
    for (ll i = 0; i < n; i++)
        cout << a[i];
    cout << " ";
    for (ll i = 0; i < n; i++)
        cout << b[i];
    cout << nl;

    return SH;
}