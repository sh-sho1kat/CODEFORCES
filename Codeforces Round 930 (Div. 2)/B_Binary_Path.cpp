///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2024-03-01 01:36:14
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
#define dtob(bits, n) bitset<bits>(n).to_string()
#define btod(bin) stoll(bin, nullptr, 2)
#define ok cout << "Eureka" << nl
#define nl '\n'
#define SH 0
typedef long long ll;
typedef pair<ll, ll> pll;
typedef vector<ll> vl;
typedef vector<pll> vpll;

string s;
char a[5][200005];

ll find_path(ll vpos, ll pos, ll n, string str)
{
    if (pos > n)
    {
        if (str.size() == n + 1)
        {
            if (s == str)
                return 1;
        }
        return 0;
    }
    str.push_back(a[vpos][pos]);
    ll res = 0;
    if (vpos == 1)
    {
        res += find_path(1, pos + 1, n, str);
        res += find_path(2, pos, n, str);
    }
    else
        res += find_path(2, pos + 1, n, str);
    str.pop_back();
    return res;
}

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
        for (ll i = 1; i <= 2; i++)
        {
            for (ll j = 1; j <= n; j++)
                cin >> a[i][j];
        }
        string str;
        s.clear();
        s.push_back(a[1][1]);
        res = 1;
        tmp = n;
        for (ll i = 1; i < n; i++)
        {
            if (a[1][i + 1] > a[2][i])
            {
                tmp = i;
                for (ll j = i; j < n; j++)
                    s.push_back(a[2][j]);
                break;
            }
            s.push_back(a[1][i + 1]);
        }
        s.push_back(a[2][n]);
        for (ll i = tmp; i > 1; i--)
        {
            if (a[1][i] == a[2][i - 1])
                res++;
            else
                break;
        }
        // ans = find_path(1, 1, n, str);
        cout << s << nl;
        cout << res << nl;
    }
    return SH;
}