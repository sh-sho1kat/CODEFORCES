#include <bits/stdc++.h>
using namespace std;

// 2024-09-23 00:20:38
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define mod 1000000007
#define inf (1LL << 62)
#define all(x) x.begin(), x.end()
#define eb emplace_back
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
        ll n, d, k;
        cin >> n >> d >> k;
        ll strt[n + 5] = {}, end[n + 5] = {};
        for (ll i = 1; i <= k; i++)
        {
            ll l, r;
            cin >> l >> r;
            strt[l]++;
            end[r]++;
        }
        for (ll i = 1; i <= n; i++)
            strt[i] += strt[i - 1];
        ll tmp1 = 0, tmp2 = inf, bro, mom;
        for (ll i = 1; i <= n - d + 1; i++)
        {
            tmp = strt[i + d - 1] - sum;
            if (tmp > tmp1)
            {
                tmp1 = tmp;
                bro = i;
            }
            if (tmp < tmp2)
            {
                tmp2 = tmp;
                mom = i;
            }
            sum += end[i];
        }
        cout << bro << " " << mom << nl;
    }
    return SH;
}