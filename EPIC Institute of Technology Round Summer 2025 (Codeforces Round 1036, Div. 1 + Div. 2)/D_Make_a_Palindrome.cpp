#include <bits/stdc++.h>
using namespace std;

// 2025-07-06 21:32:38
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define mod 1000000007
#define inf (1LL << 62)
#define all(x) x.begin(), x.end()
#define eb push_back
#define ff first
#define ss second
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
#define dtob(bits, n) bitset<bits>(n).to_string()
#define btod(bin) stoll(bin, nullptr, 2)
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
        for (ll i = 1; i <= n; i++)
            cin >> a[i];
        map<ll, ll> mp;
        for (ll i = 1; i <= n; i++)
            mp[a[i]]++;
        ll req = 0;
        for (auto u : mp)
        {
            req += u.ss;
            if (req >= k - 1)
            {
                tmp = u.ff;
                break;
            }
        }
        vl v;
        for (ll i = 1; i <= n; i++)
        {
            if (a[i] <= tmp)
                v.eb(a[i]);
        }
        ll extra = req - k + 1;
        ll l = 0, r = v.size() - 1;
        while (l <= r)
        {
            if (v[l] != v[r])
            {
                if (v[l] == tmp and extra)
                {
                    l++;
                    extra--;
                }
                else if (v[r] == tmp and extra)
                {
                    r--;
                    extra--;
                }
                else
                {
                    flag = false;
                    break;
                }
            }
            else
            {
                l++;
                r--;
            }
        }
        flag ? yes : no;
    }
    return SH;
}