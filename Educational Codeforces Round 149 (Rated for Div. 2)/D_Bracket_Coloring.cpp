///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-05-26 07:38:53
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
        ll sum = 0, tmp = 0, res = 0, cnt = 0, ct = 0, ans = 0, mn = 0, mx = INT_MAX;
        bool flag = true, fun = false, f = false;
        ll n;
        cin >> n;
        string s;
        cin >> s;
        for (ll i = 0; i < n; i++)
        {
            if (s[i] == '(')
                cnt++;
        }
        if ((n - cnt) != cnt)
        {
            cout << -1 << nl;
            continue;
        }
        vl v1, v2;
        bool v1f = true;
        bool v2f = true;
        for (ll i = 0; i < n; i++)
        {
            if (s[i] == ')')
                sum--;
            if (sum < 0)
            {
                v1.eb(1);
                v1f = false;
            }
            else
                v1.eb(2);
            if (s[i] == '(')
                sum++;
        }
        for (ll i = n - 1; i >= 0; i--)
        {
            if (s[i] == '(')
                sum++;
            else
                sum--;
            if (sum < 0)
            {
                v2f = false;
            }
        }
        if (v1f || v2f)
        {
            cout << 1 << nl;
            for (ll i = 0; i < n; i++)
                cout << 1 << " ";
            cout << nl;
        }
        else
        {
            cout << 2 << nl;
            ap(v1, v1.size());
        }
    }
    return SH;
}