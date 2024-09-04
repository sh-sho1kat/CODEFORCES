///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-10-12 00:51:17
 **/

#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define mod 1000000007
#define inf 1e18
#define all(x) x.begin(), x.end()
#define eb emplace_back
#define ff first
#define ss second
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define dtob(p, n) bitset<p>(n).to_string()
#define btod(bin) stoi(bin, nullptr, 2)
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
        ll n;
        cin >> n;
        ll len = s.size();
        ll a[len + 5];
        ll j = 1;
        a[0] = 0;
        for (ll i = len; i > 0; i--)
        {
            a[j] = i;
            a[j] += a[j - 1];
            j++;
        }
        // for (ll i = 0; i <= len; i++)
        //     cout << a[i] << " ";
        // cout << nl;
        ll chk, ttt = 0;
        for (ll i = 1; i <= s.size(); i++)
        {
            if (a[i] >= n)
            {
                chk = i - 1;
                break;
            }
        }
        // cout << chk << nl;
        s += "z";
        vector<char> stack;
        for (ll i = 0; i <= len; i++)
        {
            if (flag && stack.size() > 0)
            {
                // cout << stack.back() << " " << s[i] << nl;
                while ((stack.back() > s[i] || i == len) && flag)
                {
                    if (cnt == chk)
                    {
                        flag = false;
                        break;
                    }
                    stack.pop_back();
                    cnt++;

                    if (stack.size() == 0)
                        break;
                }
            }
            stack.push_back(s[i]);
            // for (auto u : stack)
            //     cout << u;
            // cout << nl;
        }
        // cout << cnt << nl;
        // for (auto u : stack)
        //     cout << u;
        // cout << nl;
        // cout << nl;
        ll pos;
        for (ll i = 1; i <= len; i++)
        {
            if (n > a[i - 1] && n <= a[i])
            {
                pos = n - a[i - 1] - 1;
            }
        }
        cout << stack[pos];
    }
    return SH;
}