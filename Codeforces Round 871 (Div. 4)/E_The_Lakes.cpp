///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-05-06 21:32:37
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
ll n, m;
ll a[1005][1005];
bool isvalid(ll r, ll c)
{
    if (r < 0 || c < 0 || r > n || c > m)
        return false;
    if (a[r][c] == 0)
        return false;
    return true;
}
ll ans = 0;
void depth(ll p, ll q)
{
    if (isvalid(p, q))
    {
        ans += a[p][q];
        a[p][q] = 0;
        depth(p + 1, q);
        depth(p - 1, q);
        depth(p, q + 1);
        depth(p, q - 1);
    }
}

int main()
{
    fastio;
    ll t;
    cin >> t;
    while (t--)
    {
        ll sum = 0, tmp = 0, res = 0, mn = 0, mx = INT_MAX;
        bool flag = true, fun = false;
        cin >> n >> m;
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < m; j++)
                cin >> a[i][j];
        }
        for (ll i = 0; i < n; i++)
        {
            for (ll j = 0; j < m; j++)
            {
                if (a[i][j] != 0)
                {
                    ans = 0;
                    depth(i, j);
                    res = max(ans, res);
                }
            }
        }
        cout << res << nl;
    }
    return SH;
}