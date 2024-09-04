#include <bits/stdc++.h>
using namespace std;

// 2024-04-04 17:47:58
#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define mod 1000000007
#define inf (1LL << 62)
#define all(x) x.begin(), x.end()
#define eb emplace_back
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
        ll n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        s = "?" + s;
        if (k & 1)
        {
            no;
            continue;
        }
        char str[k + 5];
        for (ll i = 0; i <= k; i++)
            str[i] = '?';
        for (ll i = 1; i <= n; i ++)
        {
            if (s[i] != '?')
            {
                if (str[i % k] == '?')
                    str[i % k] = s[i];
                else if (str[i % k] != s[i])
                    flag = false;
            }
        }
        ll z = 0, o = 0;
        for (ll i = 0; i < k; i++)
        {
            if (str[i] == '1')
                o++;
            else if (str[i] == '0')
                z++;
        }
        if (2 * z > k || 2 * o > k)
            flag = false;
        flag ? yes : no;
    }
    return SH;
}