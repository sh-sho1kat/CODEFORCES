/**                        بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ
 *
 *
 *
 *     title : A_Common_Prefixes.cpp
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-01-26 07:29:28
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
        ll a[n + 5];
        a[0] = 0;
        a[n + 1] = 0;
        fr(0, n) cin >> a[i];
        vector<string> s(n + 5);
        char cha = 'a';
        char chb = 'b';
        for (ll i = 0; i < a[0]; i++)
        {
            s[0].push_back(cha);
        }
        if (a[0] == 0)
        {
            s[0].push_back(cha);
        }
        ll ttt = 1;
        while (a[ttt] == 0 && ttt < n && a[0] == 0)
        {
            if (s[ttt - 1][0] == cha)
                s[ttt].push_back(chb);
            else
                s[ttt].push_back(cha);
            ttt++;
        }
        if (ttt == n && n != 1)
        {
            if (s[ttt - 1][0] == cha)
                s[ttt].push_back(chb);
            else
                s[ttt].push_back(cha);
        }
        for (ll i = 1; i < n; i++)
        {
            if (a[i - 1] >= a[i])
            {
                for (ll j = 0; j < a[i - 1]; j++)
                {
                    s[i].push_back(s[i - 1][j]);
                }
            }
            if (a[i - 1] < a[i])
            {
                ll j = 0;
                for (j = 0; j < a[i - 1]; j++)
                {
                    s[i].push_back(s[i - 1][j]);
                }
                if (s[i - 1][j] == cha)
                {
                    for (ll j = a[i - 1]; j < a[i]; j++)
                    {
                        s[i].push_back(chb);
                    }
                }
                else
                {
                    for (ll j = a[i - 1]; j < a[i]; j++)
                    {
                        s[i].push_back(cha);
                    }
                }
            }
            if (s[i].size() == 0)
            {
                if (s[i - 1][0] == cha)
                {
                    s[i].push_back(chb);
                }
                else
                {
                    s[i].push_back(cha);
                }
            }
        }
        for (ll i = 0; i < a[n - 1]; i++)
        {
            s[n].push_back(s[n - 1][i]);
        }
        if (s[n].size() == 0)
        {
            if (s[n - 1][0] == cha)
            {
                s[n].push_back(chb);
            }
            else
            {
                s[n].push_back(cha);
            }
        }
        char ch = 'a';
        for (ll i = 0; i <= n; i++)
        {
            for (auto u : s[i])
            {
                cout << u;
            }
            cout << nl;
        }
    }
    return SH;
}