#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define mod 1000000007
#define all(x) x.begin(), x.end()
#define eb emplace_back
#define pf push_front
#define mp make_pair
#define ff first
#define ss second
#define fr(s, n) for (ll i = s; i < n; i++)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
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

int main()
{
    fastio;
    ll t;
    cin >> t;
    while (t--)
    {
        ll sum = 0, tmp = 0, res = 0, cnt = 0, count = 0, ans = 0;
        bool flag = true;
        ll ch, cd, mh, md;
        ll taka, attack, armor;
        cin >> ch >> cd >> mh >> md >> taka >> attack >> armor;
        // ll tmp1, tmp2;
        ll tt = taka + 1;
        flag = false;
        ll tmp1 = (ch + taka * armor);
        ll tmp2 = (cd + 0 * attack);
        while (tt--)
        {
            ll res1 = ceil((tmp1 * 1.0) / md);
            ll res2 = ceil((mh * 1.0) / tmp2);
            if (res1 >= res2)
            {
                flag = true;
                break;
            }
            tmp1 -= armor;
            tmp2 += attack;
        }
        // ll res1 = ceil((ch + taka * armor) * 1.0 / md);
        // ll res4 = ceil(mh * 1.0 / cd);

        // ll res2 = ceil(mh * 1.0 / (cd + taka * attack));
        // ll res3 = ceil(ch * 1.0 / md);
        // // cout << res1 << " " << res3 << "   " << res2 << " " << res4 << nl;
        // if (res1 >= res4 || res3 >= res2)
        //     yes;
        // else
        //     no;
        flag ? yes : no;
    }
    return SH;
}