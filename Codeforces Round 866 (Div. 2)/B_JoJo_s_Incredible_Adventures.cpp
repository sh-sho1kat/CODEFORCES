///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-04-23 17:52:26
 **/

#include <bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define mod 1000000007
#define all(x) x.begin(), x.end()
#define eb emplace_back
#define pf push_front
#define MP make_pair
#define ff first
#define ss second
#define fr(s, n) for (ll i = s; i < n; i++)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define dtob(p, n) bitset<p>(n).to_string()
#define btod(bin) stoi(bin, nullptr, 2)
#define nl '\n'
#define SH 0
typedef long long ll;
typedef pair<ll, ll> pll;
typedef vector<ll> vl;
typedef vector<pll> vpll;

#define ok cout << "Eureka" << nl
#define ap(arr, n)             \
    for (ll i = 0; i < n; i++) \
        cout << arr[i] << " "; \
    cout << nl;

int main()
{
    fastio;
    ll t;
    cin >> t;
    while (t--)
    {
        ll sum = 0, tmp = 0, res = 0, cnt = 0, count = 0, ans = 0;
        bool flag = true, fun = false;
        string s;
        cin >> s;
        for (ll i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
            {
                tmp = max(tmp, cnt);
                cnt = 0;
            }
            else
                cnt++;
        }
        tmp = max(tmp, cnt);
        cnt = 0;
        for (ll i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
                break;
            else
                cnt++;
        }
        for (ll i = s.size() - 1; i >= 0; i--)
        {
            if (s[i] == '0')
                break;
            else
                cnt++;
        }
        if (cnt > s.size())
        {
            cout << s.size() * s.size() << nl;
            continue;
        }
        tmp = max(cnt, tmp);
        // cout << tmp << nl;
        for (ll i = 1; i <= (tmp / 2) + 1; i++)
        {
            ans = max(ans, i * (tmp - i + 1));
        }
        cout << ans << nl;
    }
    return SH;
}