#include <bits/stdc++.h>
using namespace std;

// 2025-04-28 15:10:18
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

#define alice cout << "Alice" << nl
#define bob cout << "Bob" << nl

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
        map<ll, ll> mp;
        for (ll i = 1; i <= n; i++)
        {
            char p;
            cin >> p;
            if (p == 'A')
            {
                mp[i]++;
                cnt++;
            }
        }
        if (n == 2)
        {
            if (mp[1])
                alice;
            else
                bob;
        }
        else
        {
            if (mp[1] and mp[n])
                alice;
            else if (mp[n] and mp[n - 1])
                alice;
            else if (!mp[1] and cnt == n - 1)
                alice;
            else if (!mp[n] and cnt == n - 1)
                alice;
            else
                bob;
        }
    }
    return SH;
}