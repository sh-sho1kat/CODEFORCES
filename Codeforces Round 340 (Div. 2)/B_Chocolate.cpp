///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-08-09 02:55:18
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

int main()
{
    fastio;
    ll n;
    cin >> n;
    ll a[n + 5];
    ll fact = 1, cnt = 1, tmp = 0, mx = 0;
    for (ll i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (a[i] > mx)
        {
            mx = a[i];
            tmp = i;
        }
    }
    for (ll i = tmp; i <= n; i++)
    {
        if (a[i] == 1)
        {
            fact *= cnt;
            cnt = 1;
        }
        else
            cnt++;
    }
    if (tmp == 0)
        fact = 0;
    cout << fact << nl;
    return SH;
}