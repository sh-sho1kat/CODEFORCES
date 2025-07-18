#include <bits/stdc++.h>
using namespace std;

// 2025-03-30 15:39:34
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

const ll K = 25;
const ll mxn = 2e5 + 5;
ll st[K][mxn];

inline ll merge(ll a, ll b)
{
    return __gcd(a, b);
}

void build(ll a[], ll n)
{
    for (ll i = 1; i <= n; i++)
        st[0][i] = a[i];
    for (ll pw = 1; pw <= K; pw++)
        for (ll j = 1; j + (1 << pw) - 1 <= n; j++)
            st[pw][j] = merge(st[pw - 1][j], st[pw - 1][j + (1 << (pw - 1))]);
}

ll query(ll l, ll r)
{
    ll len = r - l + 1;
    ll k = 31 - __builtin_clz(len);
    ll res = merge(st[k][l], st[k][r - (1 << k) + 1]);
    return res;
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
        ll n, q;
        cin >> n >> q;
        ll a[n + 5] = {};
        for (ll i = 1; i <= n; i++)
            cin >> a[i];
        ll div[n + 5] = {};
        for (ll i = 1; i <= n; i++)
            div[i] = abs(a[i] - a[i - 1]);
        build(div, n);
        while (q--)
        {
            ll l, r;
            cin >> l >> r;
            if (l == r)
            {
                cout << 0 << " ";
                continue;
            }
            cout << query(l + 1, r) << " ";
        }
        cout << nl;
    }
    return SH;
}