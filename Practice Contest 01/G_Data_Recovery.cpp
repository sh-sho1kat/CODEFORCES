///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-11-10 10:39:51
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
#define yes cout << "Correct" << endl
#define no cout << "Incorrect" << endl
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
    ll n, m, mx, mn;
    cin >> n >> m >> mn >> mx;
    ll a[m + 5];
    for (ll i = 0; i < m; i++)
        cin >> a[i];
    sort(a, a + m);
    if (a[0] == mn && a[m - 1] == mx)
        yes;
    else if (a[0] == mn && a[m - 1] <= mx && m < n)
        yes;
    else if (a[0] >= mn && a[m - 1] == mx && m < n)
        yes;
    else if (a[0] >= mn && a[m - 1] <= mx && (n - m) >= 2)
        yes;
    else
        no;
    return SH;
}