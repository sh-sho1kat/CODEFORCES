#include <bits/stdc++.h>
const int mod = 1e9 + 7;
#define ll long long
#define int long long
#define vi vector<int>
#define vl vector<long long>
#define viread(n, v)            \
    for (int i = 0; i < n; i++) \
    {                           \
        int x;                  \
        cin >> x;               \
        v.push_back(x);         \
    }
#define vlread(n, v)           \
    for (ll i = 0; i < n; i++) \
    {                          \
        ll x;                  \
        cin >> x;              \
        v.push_back(x);        \
    }
#define sorta(v) sort(v.begin(), v.end())
#define all(_a) _a.begin(), _a.end()
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define mx(_a) *max_element(all(_a))
#define mn(_a) *min_element(all(_a))
using namespace std;
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vl v;
        vlread(n, v);
        ll ans = 1;
        for (ll i = 0; i < 5; i++)
        {
            ll temp = -1;
            for (ll j = 0; j < n; j++)
            {
                if (v[j] & (1 << i))
                {
                    ans = max(ans, j - temp);
                    temp = j;
                }
            }
            cout << temp << " " << ans << endl;
            if (temp != -1)
                ans = max(ans, n - temp);
            cout << temp << " " << ans << endl;
        }
        cout << ans << endl;
    }
}