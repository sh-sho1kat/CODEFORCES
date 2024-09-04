///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-12-16 21:20:22
 **/

#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define mod 1000000007
#define inf (1LL << 62)
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
        ll n;
        cin >> n;
        string s;
        cin >> s;
        string s1;
        s1.push_back(s[n - 1]);
        s[n - 1] = '*';
        for (ll i = n - 2; i >= 0; i--)
        {
            if (s1[tmp] <= s[i])
            {
                s1.push_back(s[i]);
                s[i] = '*';
                tmp++;
            }
        }
        // cout << s << nl;
        for (ll i = 0; i < n; i++)
        {
            if (s[i] == '*')
                cnt++;
        }
        for (ll i = s1.size() - 1; i >= 0; i--)
        {
            if (s1[i] == s1[s1.size() - 1])
            {
                ct++;
            }
            else
                break;
        }
        tmp = 0;
        for (ll i = 0; i < n; i++)
        {
            if (s[i] == '*')
            {
                s[i] = s1[tmp];
                tmp++;
            }
        }

        for (ll i = 1; i < n; i++)
        {
            if (s[i - 1] > s[i])
            {
                flag = false;
                break;
            }
        }

        if (flag)
        {
            cout << cnt - ct << nl;
        }
        else
            cout << -1 << nl;
    }
    return SH;
}