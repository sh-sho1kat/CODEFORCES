#include <bits/stdc++.h>
using namespace std;

// 2025-01-31 15:57:57
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
        ll n, x;
        cin >> n >> x;
        string a = dtob(63, n);
        string b = dtob(63, x);
        for (ll i = 0; i < a.size(); i++)
        {
            if (a[i] == '0' and b[i] == '1')
            {
                flag = false;
                break;
            }
            if (a[i] == '1' and b[i] == '0')
            {
                if (b[i - 1] == '1')
                    flag = false;
                else
                    b[i - 1] = '1';
                for (ll j = i; j < a.size(); j++)
                {
                    if (b[j] == '1')
                        flag = false;
                }
                break;
            }
        }
        ll num = btod(b);
        if (flag)
            cout << num << nl;
        else
            cout << -1 << nl;
    }
    return SH;
}