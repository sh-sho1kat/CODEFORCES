#include <bits/stdc++.h>
using namespace std;

// 2025-02-11 22:02:39
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

ll get_power(ll lenth)
{
    ll fact = 1;
    while (lenth)
    {
        fact *= 10;
        lenth--;
    }
    return fact;
}

bool check_seven(ll num)
{
    while (num)
    {
        ll val = num % 10;
        num /= 10;
        if (val == 7)
            return true;
    }
    return false;
}

int main()
{
    fastio;
    ll t;
    cin >> t;
    while (t--)
    {
        ll sum = 0, tmp = 0, res = 0, cnt = 0, ct = 0, ans = 0, mn = LONG_MAX, mx = 0;
        bool flag = true, fun = false, f = false;
        string s;
        cin >> s;
        s = "0" + s;
        ll len = s.size();
        res = inf;
        ll n = stoll(s);
        for (ll i = 0; i < len; i++)
        {
            ll val = get_power(len - i);
            for (ll j = 0; j < 10; j++)
            {
                ll num = n;
                num += j * val;
                num -= j;
                if (check_seven(num))
                {
                    res = min(res, j);
                }
            }
        }
        cout << res << nl;
    }
    return SH;
}