///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-07-29 12:06:41
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
        ll n;
        cin >> n;
        ll a[n + 5];
        for (ll i = 0; i < n - 1; i++)
            cin >> a[i];
        map<ll, ll> mp;
        mp[a[0]]++;
        ll tmp1 = 0;
        for (ll i = 1; i < n - 1; i++)
        {
            mp[a[i] - a[i - 1]]++;
        }
        for (ll i = 1; i <= n; i++)
        {
            if (mp[i] == 0 && cnt < 2)
            {
                sum += i;
                cnt++;
            }
            if (mp[i] > 1)
            {
                tmp = i;
                tmp1 += mp[i] - 1;
                flag = false;
            }
        }
        for (auto u : mp)
        {
            if (u.ff > n)
            {
                tmp = u.ff;
                tmp1++;
                flag = false;
            }
        }
        // cout << sum << " " << tmp << nl;
        if (flag)
            sum = tmp;
        if (tmp1 > 1)
            sum = -1;
        (sum == tmp) ? yes : no;
    }
    return SH;
}