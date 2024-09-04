///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2024-02-09 01:19:53
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
        ll a[n + 5];
        for (ll i = 1; i <= n; i++)
            cin >> a[i];
        ll leftdst[n + 5] = {}, rightdst[n + 5] = {};
        leftdst[1] = 1;
        leftdst[n] = 0;
        rightdst[1] = 0, rightdst[n] = 1;
        for (ll i = 2; i < n; i++)
        {
            if (a[i] - a[i - 1] > a[i + 1] - a[i])
                leftdst[i] = 1;
            else
                leftdst[i] = a[i + 1] - a[i];
            leftdst[i] += leftdst[i - 1];
        }
        for (ll i = n - 1; i > 1; i--)
        {
            if (a[i] - a[i - 1] < a[i + 1] - a[i])
                rightdst[i] = 1;
            else
                rightdst[i] = a[i] - a[i - 1];
            rightdst[i] += rightdst[i + 1];
        }
        ll q;
        cin >> q;
        while (q--)
        {
            ll l, r;
            cin >> l >> r;
            if (l <= r)
            {
                cout << leftdst[r - 1] - leftdst[l - 1] << nl;
            }
            else
            {
                cout << rightdst[r + 1] - rightdst[l + 1] << nl;
            }
        }
    }
    return SH;
}