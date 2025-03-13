#include <bits/stdc++.h>
using namespace std;

// 2025-02-16 21:00:14
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define mod 1000000007
#define inf (1LL << 62)
#define all(x) x.begin(), x.end()
#define eb push_back
#define ff first
#define ss second
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
#define dtob(bits, n) bitset<bits>(n).to_string()
#define btod(bin) stoll(bin, nullptr, 2)
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
        map<ll, ll> mp;
        for (ll i = 1; i <= n; i++)
        {
            cin >> a[i];
            mp[a[i]]++;
        }
        mp[0] = 2;
        ll l = 0, r = 0;
        ll curr = 1, curl = 1;
        for (ll i = 1; i <= n; i++)
        {
            if (mp[a[i]] != 1)
            {
                curl = i + 1;
            }
            else
            {
                curr = i;
                if (curr - curl >= mx)
                {
                    mx = curr - curl;
                    r = curr;
                    l = curl;
                }
            }
        }
        if (r == 0)
            cout << 0 << nl;
        else
            cout << l << " " << r << nl;
    }
    return SH;
}