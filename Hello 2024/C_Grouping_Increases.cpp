///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2024-01-06 21:00:07
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
        ll a[n + 5];
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        ll tmp1 = 0, tmp2 = 0;
        tmp1 = a[0];
        for (ll i = 1; i < n; i++)
        {
            // cout << tmp1 << " " << tmp2 << nl;
            if (tmp1 >= a[i] && tmp2 >= a[i])
            {
                if (abs(tmp1 - a[i]) > abs(tmp2 - a[i]))
                {
                    tmp2 = a[i];
                }
                else
                {
                    tmp1 = a[i];
                }
            }
            else if (tmp1 >= a[i])
            {
                tmp1 = a[i];
            }
            else if (tmp2 >= a[i])
            {
                tmp2 = a[i];
            }
            else
            {
                if (a[i] > tmp1 && tmp2 == 0)
                {
                    tmp2 = a[i];
                }
                else if (abs(tmp1 - a[i]) > abs(tmp2 - a[i]))
                {
                    cnt++;
                    tmp1 = a[i];
                }
                else
                {
                    cnt++;
                    tmp2 = a[i];
                }
            }
        }
        cout << cnt << nl;
    }
    return SH;
}