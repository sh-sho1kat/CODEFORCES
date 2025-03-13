#include <bits/stdc++.h>
using namespace std;

// 2024-10-06 13:06:51
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define mod 1000000007
#define inf (1LL << 62)
#define all(x) x.begin(), x.end()
#define pb push_back
#define ff first
#define ss second
#define yes cout << "YA" << nl
#define no cout << "TIDAK" << nl
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
        ll n, m, q;
        cin >> n >> m >> q;
        ll a[n + 5];
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        ll b[m + 5];
        map<ll, ll> mp;
        vl v;
        for (ll i = 0; i < m; i++)
        {
            cin >> b[i];
            if (!mp[b[i]])
                v.pb(b[i]);
            mp[b[i]]++;
        }
        ll len = v.size();
        for (ll i = 0; i < min(len, n); i++)
        {
            if (a[i] != v[i])
                flag = false;
        }
        flag ? yes : no;
    }
    return SH;
}
