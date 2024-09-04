///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-12-04 19:32:47
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
    ll t;
    cin >> t;
    while (t--)
    {
        ll sum = 0, tmp = 0, res = 0, cnt = 0, ct = 0, ans = 0, mn = LONG_MAX, mx = 0;
        bool flag = true, fun = false, f = false;
        ll n;
        cin >> n;
        ll foc, fic;
        if (n % 4 == 0)
        {
            foc = n / 4;
            fic = 0;
        }
        else if (n % 4 == 1)
        {
            foc = n / 4 - 1;
            fic = 1;
        }
        else if (n % 4 == 2)
        {
            foc = n / 4 - 2;
            fic = 2;
        }
        else
        {
            foc = n / 4 - 3;
            fic = 3;
        }

        for (ll i = 0; i < foc; i++)
            cout << "4 ";
        for (ll i = 0; i < fic; i++)
            cout << "5 ";
        cout << nl;
    }
    return SH;
}