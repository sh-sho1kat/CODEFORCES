#include <bits/stdc++.h>
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define ll long long
#define MOD 1000000007
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k = 1;
        cin >> n;
        vector<pair<ll, ll>> a;
        vector<ll> b(n), ans(n);
        for (ll i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            a.push_back({x, i});
        }
        sort(a.begin(), a.end());
        for (ll i = n - 1; i >= 0; i--)
        {
            ans[a[i].second] = k++;
        }
        for (auto x : ans)
            cout << x << " ";
        cout << endl;
    }
    return 0;
}