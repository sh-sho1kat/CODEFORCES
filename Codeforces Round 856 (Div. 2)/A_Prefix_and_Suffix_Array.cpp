///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-03-04 23:39:19
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

bool checkp(string s)
{
    ll l = 0;
    ll r = s.size() - 1;
    while (l <= r)
    {
        if (s[l] != s[r])
            return false;
        l++;
        r--;
    }
    return true;
}

int main()
{
    fastio;
    ll t;
    cin >> t;
    while (t--)
    {
        ll sum = 0, tmp = 0, res = 0, cnt = 0, count = 0, ans = 0;
        bool flag = true, fun = false;
        ll n;
        cin >> n;
        vector<string> v;
        for (ll i = 1; i <= (2 * n - 2); i++)
        {
            string s;
            cin >> s;
            v.push_back(s);
        }
        // sort(all(v));
        string ss;
        // for (auto u : v)
        //     cout << u << nl;
        for (auto u : v)
        {
            if (u.size() > tmp)
            {
                tmp = u.size();
            }
        }
        vector<string> pp;
        for (auto u : v)
        {
            if (u.size() == tmp)
            {
                pp.push_back(u);
            }
        }
        // for (ll i = 1; i < 2 * n - 2; i++)
        // {
        //     if (v[i][0] != v[i - 1][0])
        //     {
        //         ss = v[i - 1] + v[i + 1];
        //     }
        // }

        // cout << ss << nl;
        reverse(pp[0].begin(), pp[0].end());
        (pp[0] == pp[1]) ? yes : no;
    }
    return SH;
}