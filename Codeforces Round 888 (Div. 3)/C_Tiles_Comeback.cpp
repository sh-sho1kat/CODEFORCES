///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-07-29 02:37:51
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
    ll t;
    cin >> t;
    while (t--)
    {
        ll sum = 0, tmp = 0, res = 0, cnt = 0, ct = 0, ans = 0, mn = LONG_MAX, mx = 0;
        bool flag = true, fun = false, f = false;
        ll n, k;
        cin >> n >> k;
        ll a[n + 5];
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        map<ll, ll> mp;
        for (ll i = 0; i < n; i++)
            mp[a[i]]++;
        if (a[0] == a[n - 1])
        {
            if (mp[a[0]] >= k)
                fun = true;
        }
        for (ll i = 0; i < n; i++)
        {
            if (a[i] == a[0])
                cnt++;
            if (cnt == k)
            {
                f = true;
                tmp = i;
                break;
            }
        }
        cnt = 0;
        for (ll i = tmp; i < n; i++)
        {
            if (a[i] == a[n - 1])
                cnt++;
            if ((cnt == k) && f)
            {
                fun = true;
                break;
            }
        }
        fun ? yes : no;
    }
    return SH;
}