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
        ll sum = 0, tmp = -1, res = 0, cnt = 0, count = 0, ans = 0;
        bool flag = true;
        ll n;
        cin >> n;
        char c;
        cin >> c;
        string s;
        cin >> s;
        // if (c == 'g')
        // {
        //     cout << "0" << nl;
        //     continue;
        // }
        // for (ll i = 0; i < n; i++)
        // {

        //     if (s[i] == 'g')
        //     {
        //         ans = max(tmp, ans);
        //         tmp = -1;
        //     }
        //     if (tmp != -1)
        //     {
        //         tmp++;
        //     }
        //     if ((s[i] == c) && tmp == -1)
        //     {
        //         tmp = 1;
        //     }
        // }
        // ll tmp1 = 0;
        // for (ll i = 0; i < n; i++)
        // {
        //     if (s[i] == 'g')
        //     {
        //         tmp1 = i;
        //         break;
        //     }
        // }
        // res = tmp1 + tmp;
        // ans = max(res, ans);
        // cout << ans << nl;
        s += s;
        flag = false;
        for (ll i = 0; i < 2 * n; i++)
        {
            if (s[i] == 'g')
            {
                ans = max(ans, count);
                flag = false;
                count = 0;
            }
            else if (s[i] == c)
            {
                flag = true;
            }
            if (flag)
            {
                count++;
            }
        }
        cout << ans << nl;
    }
    return SH;
}