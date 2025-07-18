#include <bits/stdc++.h>
using namespace std;

// 2025-04-09 23:51:30
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

vl divisor[100005];
map<ll, ll> mp;
ll cnt;

void getfact()
{
    for (ll i = 1; i <= 100000; i++)
        for (ll j = i; j <= 100000; j += i)
            divisor[j].eb(i);
}

void add(ll num, ll k)
{
    for (auto u : divisor[num])
    {
        if (!mp[u] and u <= k)
            cnt++;
        mp[u]++;
    }
}

void remove(ll num, ll k)
{
    for (auto u : divisor[num])
    {
        if (mp[u] == 1 and u <= k)
            cnt--;
        mp[u]--;
    }
}

int main()
{
    fastio;
    getfact();
    ll t;
    cin >> t;
    while (t--)
    {
        ll sum = 0, tmp = 0, res = 0, ct = 0, ans = 0, mn = LONG_MAX, mx = 0;
        bool fun = false, f = false;
        ll n, k;
        cin >> n >> k;
        ll a[n + 5];
        for (ll i = 1; i <= n; i++)
            cin >> a[i];
        sort(a + 1, a + n + 1);
        ll l = 1;
        mp.clear();
        res = inf;
        cnt = 0;
        for (ll r = 1; r <= n; r++)
        {
            add(a[r], k);
            while (cnt >= k)
            {
                res = min(res, a[r] - a[l]);
                remove(a[l], k);
                l++;
            }
        }
        if (res == inf)
            cout << -1 << nl;
        else
            cout << res << nl;
    }
    return SH;
}