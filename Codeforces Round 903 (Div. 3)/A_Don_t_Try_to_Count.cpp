///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-10-16 11:07:40
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
    ll t;
    cin >> t;
    while (t--)
    {
        ll sum = 0, tmp = 0, res = 0, cnt = 0, ct = 0, ans = 0, mn = LONG_MAX, mx = 0;
        bool flag = true, fun = false, f = false;
        ll n, m;
        cin >> n >> m;
        string a, b;
        cin >> a >> b;
        while (n < m)
        {
            a += a;
            n *= 2;
            cnt++;
        }
        // cout << cnt << nl;
        // cout << a << nl;
        // cout << b << nl;
        if (a.find(b) < n)
        {
            cout << cnt << nl;
        }
        else
        {
            a += a;
            n *= 2;
            cnt++;
            if (a.find(b) < n)
            {
                cout << cnt << nl;
            }
            else
                cout << -1 << nl;
        }
    }
    return SH;
}