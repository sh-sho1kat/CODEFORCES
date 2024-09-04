/********************************************************* بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ *********************************************************/

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-02-09 14:44:38
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
#define no cout << "-1" << endl
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
#define debug(x) cout << #x << "-->" << x << nl

int main()
{
    fastio;
    ll f = 1;
    vl v;
    for (ll i = 1; i <= 32; i++)
    {
        v.eb(f);
        f *= 2;
    }
    // ap(v, v.size());
    ll t;
    cin >> t;
    while (t--)
    {
        ll sum = 0, tmp = 0, res = 0, cnt = 0, count = 0, ans = 0;
        bool flag = true, fun = false;
        ll n;
        cin >> n;
        if (n & 1)
            no;
        else
        {
            // n >>= 1;
            //  debug(n);
            string bin = bitset<32>(n).to_string();
            reverse(bin.begin(), bin.end());
            // cout << bin << nl;
            map<ll, ll> mp;
            for (ll i = 0; i < bin.size(); i++)
            {
                if (bin[i] == '1')
                {
                    mp[v[i]] = 1;
                    // cout << v[i] << " ";
                }
            }
            // cout << nl;
            sum = 0;
            for (ll i = v.size(); i >= 0; i--)
            {
                if (bin[i] == '0')
                {
                    if (sum + v[i] <= n / 2)
                    {
                        sum += v[i];
                        mp[v[i]] = 1;
                    }
                }
            }
            // for (auto u : mp)
            // {
            //     cout << u.ff << " ";
            // }
            // cout << nl << sum << nl;
            if (sum == n / 2)
            {
                ll a = 0, b;
                for (auto u : mp)
                {
                    a += u.ff;
                }
                b = a;
                for (ll i = 0; i < bin.size(); i++)
                {
                    if (bin[i] == '1')
                    {
                        b -= v[i];
                    }
                }
                cout << a << " " << b << nl;
            }
            else
                no;
        }
    }
    return SH;
}