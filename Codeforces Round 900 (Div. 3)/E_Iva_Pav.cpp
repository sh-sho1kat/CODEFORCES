///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-09-26 21:23:13
 **/

#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define mod 1000000007
#define inf 1e18
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

int binary_search(ll arr[], ll start, ll end, ll x)
{

    return -1;
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
        ll n;
        cin >> n;
        ll a[n + 5];
        for (ll i = 1; i <= n; i++)
        {
            cin >> a[i];
            // string bit = dtob(5, a[i]);
            // cout << bit << nl;
        }
        ll b[n + 5][35] = {};
        for (ll i = 1; i <= 30; i++)
        {
            b[n + 1][i] = n + 1;
        }
        for (ll i = n; i >= 1; i--)
        {
            string bit = dtob(30, a[i]);
            for (ll j = 1; j <= 30; j++)
            {
                if (bit[j - 1] == '0')
                    b[i][j] = i;
                else
                    b[i][j] = b[i + 1][j];
            }
        }
        // for (ll i = 1; i <= n + 1; i++)
        // {
        //     for (ll j = 1; j <= 5; j++)
        //         cout << b[i][j] << " ";
        //     cout << nl;
        // }
        // cout << nl;

        ll q;
        cin >> q;
        while (q--)
        {
            ll l, k;
            cin >> l >> k;
            string bin = dtob(30, k);
            // cout << bin << " ";
            ll p1 = 0, p2 = 0;
            for (ll i = 0; i < bin.size(); i++)
            {
                if (bin[i] == '1')
                {
                    ans = b[l][i + 1];
                    break;
                }
            }
            for (ll i = 30; i >= 1; i--)
            {
                if (bin[i - 1] == '1')
                {
                    ans = min(b[l][i], ans);
                }
                else
                {
                    ans = max(b[l][i], ans);
                }
                // cout << ans << " ";
            }
            if (ans == l)
                cout << -1 << " ";
            else
                cout << ans - 1 << " ";
        }   
        cout << nl;
    }
    return SH;
}