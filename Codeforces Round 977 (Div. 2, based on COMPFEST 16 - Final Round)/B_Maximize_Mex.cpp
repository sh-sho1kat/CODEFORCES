#include <bits/stdc++.h>
using namespace std;

// 2024-10-06 12:23:47
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define mod 1000000007
#define inf (1LL << 62)
#define all(x) x.begin(), x.end()
#define pb push_back
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
        ll n, x;
        cin >> n >> x;
        map<ll, ll> mp, mp1;
        ll a[n + 5];
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        ll mex = 0;
        for (ll i = 0; i < n; i++)
        {
            if (a[i] == mex)
                mex++;
            else if (a[i] < mex)
            {
                mp[a[i] % x]++;
            }
            else
            {
                if (mp[mex % x])
                {
                    mp[mex % x]--;
                    mex++;
                    i--;
                }
                else
                    break;
            }
        }
        while (1)
        {
            if (mp[mex % x])
            {
                mp[mex % x]--;
                mex++;
            }
            else
                break;
        }
        cout << mex << nl;
    }
    return SH;
}