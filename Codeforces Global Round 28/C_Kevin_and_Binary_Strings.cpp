#include <bits/stdc++.h>
using namespace std;

// 2024-12-19 21:05:25
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
        s = "#" + s;
        for (ll i = 1; i < s.size(); i++)
        {
            if (s[i] == '1')
                cnt++;
            else
                break;
        }
        for (ll i = cnt + 1; i < s.size(); i++)
        {
            if (s[i] == '0')
                ct++;
            else
                break;
        }
        cout << 1 << " " << s.size() - 1 << " ";
        if (cnt == s.size() - 1)
        {
            cout << 1 << " " << 1 << nl;
        }
        else if (cnt > ct)
        {
            cout << cnt - ct + 1 << " " << s.size() - 1 - ct << nl;
        }
        else
        {
            cout << 1 << " " << s.size() - 1 - cnt << nl;
        }
    }
    return SH;
}