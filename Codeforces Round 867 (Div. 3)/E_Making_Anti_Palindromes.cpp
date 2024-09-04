///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-04-25 02:14:11
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
    ll t;
    cin >> t;
    while (t--)
    {
        ll sum = 0, tmp = 0, res = 0, cnt = 0, count = 0, ans = 0;
        bool flag = false, fun = false, f = 0;
        ll n;
        cin >> n;
        string s;
        cin >> s;
        if (n & 1)
        {
            cout << -1 << nl;
            continue;
        }
        map<char, ll> mp, same;
        for (ll i = 0; i < n; i++)
        {
            mp[s[i]]++;
        }
        for (auto u : mp)
        {
            if (u.ss > n / 2)
            {
                flag = true;
                break;
            }
        }
        if (flag)
        {
            cout << -1 << nl;
            continue;
        }
        ll l = 0, r = n - 1, mx = 0;
        while (l < r)
        {
            if (s[l] == s[r])
            {
                cnt++;
                same[s[l]]++;
                mx = max(mx, same[s[l]]);
            }
            l++;
            r--;
        }
        mx > (cnt / 2) ? cout << mx << nl : cout << (cnt + 1) / 2 << nl;
    }
    return SH;
}