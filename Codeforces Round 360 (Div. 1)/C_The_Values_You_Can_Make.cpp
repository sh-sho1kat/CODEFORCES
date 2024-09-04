///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2024-02-22 10:39:15
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

ll n, k;
ll a[505];
set<ll> st;
ll dp[505][505];
ll dp2[505][505];

void func2(ll vpos, ll currsum, ll vn, vl vec)
{
    if (vpos == vn)
        return;
    func2(vpos + 1, currsum, vn, vec);
    func2(vpos + 1, currsum + vec[vpos], vn, vec);
    st.insert(currsum + vec[vpos]);
}

ll func(ll pos, ll sum, vl v)
{
    if (sum == k)
    {
        // for (auto u : v)
        //     cout << u << " ";
        // cout << nl;
        memset(dp2, -1, sizeof(dp2));
        func2(0, 0, v.size(), v);
        return 1;
    }
    if (pos == n)
        return 0;
    ll way1 = 0, way2 = 0;
    if (sum + a[pos] <= k)
    {
        v.eb(a[pos]);
        way1 = func(pos + 1, sum + a[pos], v);
        v.pop_back();
    }
    way2 = func(pos + 1, sum, v);
    return dp[pos][sum] = way1 + way2;
}

int main()
{
    fastio;
    cin >> n >> k;
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    memset(dp, -1, sizeof(dp));
    vl v;
    ll p = func(0, 0, v);
    st.insert(0);
    cout << st.size() << nl;
    for (auto u : st)
        cout << u << " ";
    cout << nl;

    return SH;
}