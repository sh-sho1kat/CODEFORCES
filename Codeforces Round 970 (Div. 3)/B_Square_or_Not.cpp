#include <bits/stdc++.h>
using namespace std;

// 2024-11-29 23:55:58
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
        string s;
        cin >> s;
        s = "#" + s;
        ll p = sqrt(n);
        if (p * p == n)
        {
            tmp = p + 1;
            for (ll i = 2; i < p; i++)
            {
                for (ll j = tmp + 1; j < tmp + p - 1; j++)
                {
                    if (s[j] != '0')
                        flag = false;
                }
                tmp += p;
            }
        }
        else
            flag = false;

        flag ? yes : no;
    }
    return SH;
}