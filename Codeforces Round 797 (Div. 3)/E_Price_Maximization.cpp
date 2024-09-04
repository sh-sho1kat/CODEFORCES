///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2024-02-22 15:39:57
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
ll k;
bool cmp(const ll &p1, const ll &p2)
{
    ll rem1 = p1 % k;
    ll rem2 = p2 % k;
    return rem1 <= rem2;
}

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
        cin >> n >> k;
        vl a(n);
        for (ll i = 0; i < n; i++)
            cin >> a[i], ans += a[i] / k, a[i] %= k;
        sort(a.begin(), a.end());
        ll l = 0, r = n - 1;
        while (l <= r)
        {
            if (a[l] % k + a[r] % k >= k && l < r)
            {
                ans += (a[l] + a[r]) / k;
                r--;
            }
            else
                ans += a[l] / k;
            l++;
        }
        cout << ans << nl;
    }
    return SH;
}