#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define mod 1000000007
#define all(x) x.begin(), x.end()
#define eb emplace_back
#define pf push_front
#define fr(s, n) for (ll i = s; i < n; i++)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define nl '\n'
#define SH 0
typedef long long ll;
typedef pair<ll, ll> pll;
typedef vector<ll> vl;

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
        ll n;
        cin >> n;
        vector<string> v(n);
        fr(0, n) cin >> v[i];
        map<string, ll> mp;
        for (auto u : v)
        {
            mp[u]++;
        }
        // for (auto u : mp)
        // {
        //     cout << u.first << " " << u.second << nl;
        // }
        for (ll i = 0; i < n; i++)
        {
            flag = false;
            string s = v[i];
            for (ll j = 1; j < s.size(); j++)
            {
                string p = s.substr(0, j);
                string q = s.substr(j, s.size());
                if (mp[p] && mp[q])
                {
                    flag = true;
                    break;
                }
                // cout << s.substr(0, j) << " " << s.substr(j, s.size()) << nl;
            }
            cout << flag;
        }
        cout << nl;
    }
    return SH;
}