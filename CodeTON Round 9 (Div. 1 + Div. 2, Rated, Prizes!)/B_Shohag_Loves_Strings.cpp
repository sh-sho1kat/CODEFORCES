#include <bits/stdc++.h>
using namespace std;

// 2024-11-27 23:37:41
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
        string s;
        cin >> s;
        for (ll i = 0; i < s.size(); i += 2)
        {
            if (s[i] != s[0] or s[i]==s[i+1])
                fun = true;
        }
        for (ll i = 1; i < s.size(); i += 2)
        {
            if (s[i] != s[1] or s[i]==s[i-1])
                fun = true;
        }
        if (!fun)
        {
            cout << -1 << nl;
            continue;
        }
        for (ll i = 0; i < s.size(); i++)
        {
            if (s[i] == s[i + 1])
            {
                cout << s[i] << s[i + 1] << nl;
                break;
            }
            else if (s[i] != s[i + 1] and s[i] != s[i + 2] and s[i + 1] != s[i + 2])
            {
                cout << s[i] << s[i + 1] << s[i + 2] << nl;
                break;
            }
        }
    }
    return SH;
}