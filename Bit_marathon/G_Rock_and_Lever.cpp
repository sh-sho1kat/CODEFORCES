///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-11-16 14:46:53
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
        vector<string> v;
        for (ll i = 0; i < n; i++)
        {
            ll p;
            cin >> p;
            string bit = dtob(32, p);
            v.push_back(bit);
        }
        sort(v.begin(), v.end(), greater<string>());
        fun = true;
        flag = true;
        cnt = 0;
        for (ll i = 0; i < n; i++)
        {
            if (v[i][tmp] == '0')
            {
                while (1)
                {
                    // ok;
                    if (v[i][tmp] == '0')
                        tmp++;
                    if (tmp == 32)
                        flag = false;
                    if (v[i][tmp] == '1')
                    {
                        cnt = 0;
                        break;
                    }
                }
            }
            if (flag == false)
                break;
            if (v[i][tmp] == '1')
            {
                ans += cnt;
                cnt++;
            }
        }
        cout << ans << nl;
    }
    return SH;
}