#include <bits/stdc++.h>
using namespace std;

// 2025-04-05 22:48:16
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
        ll sum = 0, tmp = 0, res = 1, cnt = 0, ct = 0, ans = 0, mn = LONG_MAX, mx = 0;
        bool flag = true, fun = false, f = false;
        ll n, m, k;
        cin >> n >> m >> k;
        ll mex;
        if (n >= k * (m + 1))
            mex = n / (m + 1);
        else
            mex = k;
        flag = true;
        cnt = 0;
        while (flag)
        {
            for (ll i = 0; i < mex; i++)
            {
                cout << i << " ";
                cnt++;
                if (cnt == n)
                {
                    flag = false;
                    break;
                }
            }
        }
        cout << nl;
    }
    return SH;
}