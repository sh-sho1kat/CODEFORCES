#include <bits/stdc++.h>
using namespace std;

// 2025-02-11 21:08:30
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define mod 1000000007
#define inf (1LL << 62)
#define all(x) x.begin(), x.end()
#define eb push_back
#define ff first
#define ss second
#define yes cout << "Yes" << nl
#define no cout << "No" << nl
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
            cin >> a[i], mp[a[i]]++;
        ll dorkar = 0;
        for (ll i = n; i >= 0; i--)
        {
            if (dorkar)
            {
                if (mp[i] >= dorkar)
                {
                    mp[i] -= dorkar;
                    dorkar = 0;
                }
                else
                {
                    dorkar -= mp[i];
                    dorkar += 2;
                    mp[i] = 0;
                }
            }
            if (mp[i] & 1)
                dorkar = 3;
        }
        (!dorkar) ? yes : no;
    }
    return SH;
}