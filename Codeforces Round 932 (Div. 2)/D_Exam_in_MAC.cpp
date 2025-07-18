#include <bits/stdc++.h>
using namespace std;

// 2025-05-14 17:58:59
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
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T, typename R>
using ordered_map = tree<T, R, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
struct custom_hash
{
    static uint64_t splitmix64(uint64_t x)
    {
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }
    size_t operator()(uint64_t x) const
    {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};
typedef gp_hash_table<ll, ll, custom_hash> ht;

int main()
{
    fastio;
    ll t;
    cin >> t;
    while (t--)
    {
        ll sum = 0, tmp = 0, res = 0, cnt = 0, ct = 0, ans = 0, mn = LONG_MAX, mx = 0;
        bool flag = true, fun = false, f = false;
        ll n, c;
        cin >> n >> c;
        ordered_set<ll> os1, os2;
        for (ll i = 1; i <= n; i++)
        {
            ll p;
            cin >> p;
            if (p & 1)
                os1.insert(p);
            else
                os2.insert(p);
        }
        res = (c + 1) * (c + 2);
        res /= 2;
        for (auto u : os1)
        {
            res -= u / 2;
            if (c >= u)
                res -= c - u;
            res--;
            tmp = 2 * c - u;
            if (tmp >= u)
            {
                ll pos1 = os1.order_of_key(u);
                ll pos2 = os1.order_of_key(*(--os1.upper_bound(tmp)));
                if (pos2 > pos1)
                    res += pos2 - pos1;
            }
        }
        for (auto u : os2)
        {
            res -= u / 2;
            if (c >= u)
                res -= c - u;
            res--;
            tmp = 2 * c - u;
            if (tmp >= u)
            {
                ll pos1 = os2.order_of_key(u);
                ll pos2 = os2.order_of_key(*(--os2.upper_bound(tmp)));
                if (pos2 > pos1)
                    res += pos2 - pos1;
            }
        }
        cout << res << nl;
    }
    return SH;
}