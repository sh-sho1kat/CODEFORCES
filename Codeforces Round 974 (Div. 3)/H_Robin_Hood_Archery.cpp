#include <bits/stdc++.h>
using namespace std;

// 2025-01-12 01:26:01
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
typedef int ll;
typedef pair<ll, ll> pll;
typedef vector<ll> vl;
typedef vector<pll> vpll;

const ll block = 720;
ll cnt = 0;
ll result[200005];
ll freq[1000005];
ll a[200005];
struct query
{
    ll l, r, idx;
} Q[200005];

bool cmp(query a, query b)
{
    ll tmp1 = a.l / block;
    ll tmp2 = b.l / block;

    if (tmp1 != tmp2)
        return tmp1 < tmp2;
    if (tmp1 & 1)
        return a.r < b.r;
    return a.r > b.r;
}

void add(ll idx)
{
    freq[a[idx]]++;
    if (freq[a[idx]] & 1)
        cnt++;
    else
        cnt--;
}
void remove(ll idx)
{
    freq[a[idx]]--;
    if (freq[a[idx]] & 1)
        cnt++;
    else
        cnt--;
}

int main()
{
    fastio;
    ll t;
    cin >> t;
    while (t--)
    {
        ll sum = 0, tmp = 0, res = 0, ct = 0, ans = 0, mn = LONG_MAX, mx = 0;
        bool flag = true, fun = false, f = false;
        ll n, q;
        cin >> n >> q;
        cnt = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
            freq[a[i]] = 0;
        }
        for (ll i = 0; i < q; i++)
        {
            ll l, r;
            cin >> l >> r;
            --l;
            --r;
            Q[i].l = l;
            Q[i].r = r;
            Q[i].idx = i;
        }
        sort(Q, Q + q, cmp);
        ll curl = 0, curr = -1;
        for (ll i = 0; i < q; i++)
        {
            ll L = Q[i].l;
            ll R = Q[i].r;
            ll idx = Q[i].idx;

            while (curl > L)
                add(--curl);
            while (curr < R)
                add(++curr);
            while (curl < L)
                remove(curl++);
            while (curr > R)
                remove(curr--);
            result[idx] = 0;
            result[idx] = cnt;
        }
        for (ll i = 0; i < q; i++)
        {
            if (result[i])
                no;
            else
                yes;
        }
    }
    return SH;
}