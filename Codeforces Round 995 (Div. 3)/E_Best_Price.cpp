#include <bits/stdc++.h>
using namespace std;

// 2024-12-23 12:29:41
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
using ordered_set = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
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
        ll n, k;
        cin >> n >> k;
        vpll v(n);
        ordered_set<ll> os;
        for (ll i = 0; i < n; i++)
            cin >> v[i].ss, os.insert(v[i].ss);
        for (ll i = 0; i < n; i++)
            cin >> v[i].ff;
        sort(all(v));
        for (ll i = 0; i < n; i++)
        {
            ll p = *os.find_by_order(k);
            sum = 0;
            // cout << p << " ";
            if (os.size() <= k)
            {
                if (v[i].ff > tmp)
                    sum = v[i].ff * (n - i);
            }
            else if (p >= v[i].ff and v[i].ff > tmp)
                sum = v[i].ff * (n - i);
            else if (p < v[i].ff and p > tmp)
                sum = p * (n - i);
            res = max(sum, res);
            os.erase(os.upper_bound(v[i].ss));
            tmp = v[i].ff;
            // cout << sum << nl;
        }
        cout << res << nl;
    }
    return SH;
}