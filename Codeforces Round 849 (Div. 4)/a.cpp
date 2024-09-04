/************************************************* بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ *************************************************/

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-02-05 00:55:13
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

string sod(string s)
{
    ll sum = 0;
    for (ll i = 0; i < s.size(); i++)
    {
        sum += s[i] - '0';
    }
    return to_string(sum);
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
        ll n, q;
        cin >> n >> q;
        ll a[n + 5];
        fr(0, n) cin >> a[i];
        vector<string> vs1, vs2, vs3;
        map<ll, ll> mp;
        for (ll i = 0; i < n; i++)
        {
            string tt = to_string(a[i]);
            vs1.push_back(sod(tt));
        }
        for (ll i = 0; i < n; i++)
        {
            vs2.push_back(sod(vs1[i]));
        }
        for (ll i = 0; i < n; i++)
        {
            vs3.push_back(sod(vs2[i]));
        }
        while (q--)
        {
            ll p;
            cin >> p;
            if (p == 1)
            {
                ll a, b;
                cin >> a >> b;
                for (ll i = a - 1; i < b; i++)
                {
                    mp[i]++;
                }
            }
            else
            {
                ll x;
                cin >> x;
                if (mp[x - 1] == 0)
                {
                    cout << a[x - 1] << nl;
                }
                else if (mp[x - 1] == 1)
                {
                    cout << vs1[x - 1] << nl;
                }
                else if (mp[x - 1] == 2)
                {
                    cout << vs2[x - 1] << nl;
                }
                else
                {
                    cout << vs3[x - 1] << nl;
                }
            }
        }
    }
    return SH;
}