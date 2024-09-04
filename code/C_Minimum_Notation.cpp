#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define mod 1000000007
#define all(x) x.begin(), x.end()
#define eb emplace_back
#define pf push_front
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
        ll mn = INT_MAX;
        bool flag = true;
        string s;
        cin >> s;
        flag = is_sorted(s.begin(), s.end());
        if (flag)
        {
            cout << s << nl;
            continue;
        }
        ll len = s.size();
        vector<char> v, vv;
        char tt = s[len - 1];
        vv.eb(s[len - 1]);
        for (ll i = s.size() - 2; i >= 0; i--)
        {
            if (tt >= s[i])
            {
                tt = s[i];
                vv.eb(tt);
            }
            else if (s[i] > tt)
            {

                ll p = (s[i] - '0') + 1;
                ll q = 9;
                ll mn = min(p, q);
                char c = mn + '0';
                v.eb(c);
            }
        }

        sort(v.begin(), v.end());
        for (auto u : v)
        {
            vv.eb(u);
        }
        sort(vv.begin(), vv.end());
        for (auto u : vv)
            cout << u;
        cout << nl;
    }
    return SH;
}