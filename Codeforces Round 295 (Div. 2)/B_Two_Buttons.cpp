///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-09-29 23:14:45
 **/

#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define mod 1000000007
#define inf 1e18
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
    ll n, m;
    cin >> n >> m;
    if (n >= m)
    {
        cout << n - m << nl;
    }
    else
    {
        ll cnt = 0;
        while (1)
        {
            if (n >= m)
                break;
            if (m % 2)
            {
                m++;
                cnt++;
            }
            else if (m % 2 == 0)
            {
                m /= 2;
                cnt++;
            }
        }
        cout << n - m + cnt << nl;
    }
    return SH;
}