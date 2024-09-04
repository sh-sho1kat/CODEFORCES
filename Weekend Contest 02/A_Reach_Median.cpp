///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-03-02 16:21:03
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
    ll n, s;
    cin >> n >> s;
    ll a[n + 5];
    fr(0, n) cin >> a[i];
    sort(a, a + n);
    // ap(a, n);
    ll sum = 0;
    for (ll i = n / 2; i < n; i++)
    {
        if (a[i] < s)
            sum += s - a[i];
    }
    for (ll i = 0; i <= n / 2; i++)
    {
        if (a[i] > s)
            sum += a[i] - s;
    }
    cout << sum << nl;

    return SH;
}