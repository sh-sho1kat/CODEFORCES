///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2024-01-27 23:00:54
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
        ll n, k, m;
        cin >> n >> k >> m;
        string s;
        cin >> s;
        string ss;
        map<char, ll> mp;
        for (ll i = 0; i < m; i++)
        {
            mp[s[i]]++;
            flag = true;
            for (char c = 'a'; c < 'a' + k; c++)
            {
                if (mp[c] == 0)
                    flag = false;
            }
            if (flag)
            {
                cnt++;
                ss.push_back(s[i]);
                for (char c = 'a'; c < 'a' + k; c++)
                {
                    mp[c] = 0;
                }
            }
        }
        cnt >= n ? yes : no;
        if (cnt < n)
        {
            tmp = n - ss.size();
            while (tmp--)
            {
                for (char c = 'a'; c < 'a' + k; c++)
                {
                    if (mp[c] == 0)
                    {
                        ss.push_back(c);
                        break;
                    }
                }
            }
            cout << ss << nl;
        }
    }
    return SH;
}