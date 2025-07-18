#include <bits/stdc++.h>
using namespace std;

// 2025-04-23 18:23:23
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
    return max(a, b);
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

ll sum_query(ll l, ll r)
{
    ll sum = 0;
    for (ll pw = K; pw >= 0; pw--)
    {
        if ((1 << pw) <= r - l + 1)
        {
            sum += st[pw][l];
            l += 1 << pw;
        }
    }
    return sum;
}

int main()
{
    fastio;
    ll n, m;
    cin >> n >> m;
    ll a[m + 5];
    for (ll i = 1; i <= m; i++)
        cin >> a[i];
    build(a, m);
    ll q;
    cin >> q;
    while (q--)
    {
        ll a, b, c, d, k;
        cin >> a >> b >> c >> d >> k;
        if (b > d)
            swap(b, d);
        ll mx = query(b, d);
        ll rem1 = n - ((n - a) % k);
        ll rem2 = n - ((n - c) % k);
        ll rem = min(rem1, rem2);
        ll p = (d - b) % k;
        ll q = (a - c) % k;
        if (p == 0 and q == 0 and rem > mx)
            yes;
        else
            no;
    }
    return SH;
}