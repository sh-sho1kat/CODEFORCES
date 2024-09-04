///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-03-09 12:25:14
 **/

#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define mod 1000000007
#define all(x) x.begin(), x.end()
#define eb emplace_back
#define pf push_front
#define MP make_pair
#define ff first
#define ss second
#define fr(s, n) for (ll i = s; i < n; i++)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define dtob(p, n) bitset<p>(n).to_string()
#define btod(bin) stoi(bin, nullptr, 2)
#define nl '\n'
#define SH 0
typedef long long ll;
typedef pair<ll, ll> pll;
typedef vector<ll> vl;
typedef vector<pll> vpll;

#define ok cout << "Eureka" << nl
#define ap(arr, n)             \
    for (ll i = 0; i < n; i++) \
        cout << arr[i] << " "; \
    cout << nl;

bool cmp(const tuple<ll, ll, ll> &t1, const tuple<ll, ll, ll> &t2)
{
    if (get<1>(t1) < get<1>(t2))
        return 1;
    else
        return 0;
}
int main()
{
    fastio;
    ll t;
    cin >> t;
    while (t--)
    {
        ll sum = 0, tmp = 0, res = 0, cnt = 0, count = 0, ans = 0;
        bool flag = true, fun = false;
        ll n, m;
        cin >> n >> m;
        vector<tuple<ll, ll, ll>> v;
        for (ll i = 1; i <= m; i++)
        {
            ll a, b;
            cin >> a >> b;
            v.push_back({b, a, i});
        }
        sort(all(v));
        sort(v.begin(), v.begin() + 2 * n, cmp);

        for (int i = 0; i < 2 * n; i++)
            sum += get<0>(v[i]);
        cout << sum << nl;
        for (int i = 0; i < n; i++)
            cout << get<2>(v[i]) << " "
                 << get<2>(v[2 * n - i - 1]) << "\n";
    }
    return SH;
}