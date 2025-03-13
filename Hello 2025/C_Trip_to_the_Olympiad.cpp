#include <bits/stdc++.h>
using namespace std;

// 2025-01-10 20:04:53
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
        ll l, r;
        cin >> l >> r;
        string L, R;
        L = dtob(32, l);
        R = dtob(32, r);
        string s;
        for (ll i = 0; i < 32; i++)
        {
            if (L[i] != R[i])
            {
                s.eb('1');
                for (ll j = i + 1; j < 32; j++)
                    s.eb('0');
                break;
            }
            s.eb(L[i]);
        }
        ll num = btod(s);
        if (num < r)
        {
            cout << num - 1 << " " << num << " " << num + 1 << nl;
        }
        else
            cout << num - 2 << " " << num - 1 << " " << num << nl;
    }
    return SH;
}