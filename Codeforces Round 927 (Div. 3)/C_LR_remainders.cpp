///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2024-02-19 01:10:06
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
        ll n, m;
        cin >> n >> m;
        ll a[n + 5];
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        string s;
        cin >> s;
        ll l = 0, r = n - 1;
        vl v;
        for (ll i = 0; i < n; i++)
        {
            if (s[i] == 'L')
                v.eb(a[l++]);
            else
                v.eb(a[r--]);
        }
        ll fact = 1;
        for (ll i = n - 1; i >= 0; i--)
        {
            (fact *= v[i]) %= m;
            a[i] = fact;
        }
        for (ll i = 0; i < n; i++)
            cout << a[i] << " ";
        cout << nl;
    }
    return SH;
}