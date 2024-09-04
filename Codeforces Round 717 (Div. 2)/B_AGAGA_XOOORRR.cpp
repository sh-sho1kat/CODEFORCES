///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2024-03-24 14:08:36
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
#define dtob(bits, n) bitset<bits>(n).to_string()
#define btod(bin) stoll(bin, nullptr, 2)
#define ok cout << "Eureka" << nl
#define nl '\n'
#define SH 0
typedef long long ll;
typedef pair<ll, ll> pll;
typedef vector<ll> vl;
typedef vector<pll> vpll;

const int mxn = 2e5 + 5;
ll tree[4 * mxn];
ll lazy[4 * mxn];

const ll return_value = 0;
inline ll merge(ll x, ll y)
{
    return x ^ y;
}

inline void propagate(ll node, ll b, ll e)
{
    if (lazy[node] == 0) // this node is lazy. lazy node is already zero. No need to propagate
        return;
    tree[node] = tree[node] + lazy[node] * (e - b + 1); // normalize current node by removing laziness
    if (b != e)                                         // Current Node is not  Leaf node
    {
        // Propagate Lazy value to children
        ll left_node = node << 1;
        ll right_node = left_node | 1;

        lazy[left_node] = lazy[left_node] + lazy[node];
        lazy[right_node] = lazy[right_node] + lazy[node];
    }
    // current node processed. No longer lazy
    lazy[node] = 0;
}

void build(ll node, ll begin, ll end, ll a[])
{
    lazy[node] = 0;
    if (begin == end)
    {
        // leaf node. store value in node.
        tree[node] = a[begin];
        return;
    }
    ll left_node = node << 1;
    ll right_node = left_node | 1;
    ll mid = (begin + end) >> 1; // recurse deeper for children.

    build(left_node, begin, mid, a);
    build(right_node, mid + 1, end, a);

    tree[node] = merge(tree[left_node], tree[right_node]); // merge build results
}
// call this method as build(1,1,n,a);
// Here a[] is input array and n is its size.

ll query(ll node, ll begin, ll end, ll l, ll r)
{
    if (begin > r || end < l) // segment completely outside range
        return return_value;
    if (l <= begin && r >= end) // segment completely inside range
        return tree[node];

    ll left_node = node << 1;
    ll right_node = left_node | 1;
    ll mid = (begin + end) >> 1; // partial overlap of current segment and queried range. Recurse deeper.

    ll LQ = query(left_node, begin, mid, l, r);
    ll RQ = query(right_node, mid + 1, end, l, r);

    return merge(LQ, RQ); // merge query results
}
// call this method as query(1,1,n,l,r);
// Here [l..r] is the range/interval you are querying.
// This method relies on "null" nodes being equivalent to storing zero.

void update(ll node, ll begin, ll end, ll index, ll value)
{
    if (index > end || index < begin) // index completely outside range
        return;
    if (begin == end)
    {
        tree[node] = value; // leaf node. update element.
        return;
    }

    ll left_node = node << 1;
    ll right_node = left_node | 1;
    ll mid = (begin + end) >> 1; // recurse deeper for appropriate child

    update(left_node, begin, mid, index, value);
    update(right_node, mid + 1, end, index, value);

    tree[node] = merge(tree[left_node], tree[right_node]); // merge updates
}
// call this method as update(1,1,n,index, value);
// Here you want to update the value at index i with value val.

void lazy_update(ll node, ll begin, ll end, ll l, ll r, ll value)
{
    propagate(node, begin, end);
    if (begin > r || end < l) // out of range. escape.
        return;
    if (l <= begin && r >= end) // segment is fully within update range
    {
        // update segment
        lazy[node] = value;
        propagate(node, begin, end);
        return;
    }

    ll left_node = node << 1;
    ll right_node = left_node | 1;
    ll mid = (begin + end) >> 1; // recurse deeper for appropriate child

    lazy_update(left_node, begin, mid, l, r, value);
    lazy_update(right_node, mid + 1, end, l, r, value);

    tree[node] = merge(tree[left_node], tree[right_node]); // merge updates
}
// call this method as lazy_update(1,1,n,l,r,value);
// Here you want to update the range [l..r] with value val.

ll lazy_query(ll node, ll begin, ll end, ll l, ll r)
{
    // query for arr[l..r]
    propagate(node, begin, end);
    if (begin > r || end < l) // segment completely outside range
        return return_value;
    if (l <= begin && r >= end) // segment completely inside range
        return tree[node];

    ll left_node = node << 1;
    ll right_node = left_node | 1;
    ll mid = (begin + end) >> 1; // partial overlap of current segment and queried range. Recurse deeper.

    ll LQ = lazy_query(left_node, begin, mid, l, r);
    ll RQ = lazy_query(right_node, mid + 1, end, l, r);

    return merge(LQ, RQ); // merge query results
}
// call this method as lazy_query(1,1,n,l,r);
// Here [l..r] is the range/interval you are querying.
// This method relies on "null" nodes being equivalent to storing zero.

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
        cin >> n;
        ll a[n + 5];
        ll jor = 0;
        for (ll i = 1; i <= n; i++)
        {
            cin >> a[i];
            jor ^= a[i];
        }
        for (ll i = 1; i <= n; i++)
        {
            tmp ^= a[i];
            if (tmp == jor)
            {
                cnt++;
                tmp = 0;
            }
        }
        if (cnt >= 2)
            fun = true;
        build(1, 1, n, a);
        for (ll i = 1; i < n; i++)
        {
            if (query(1, 1, n, 1, i) == query(1, 1, n, i + 1, n))
                fun = true;
        }
        fun ? yes : no;
    }
    return SH;
}