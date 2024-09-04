///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-03-02 21:20:57
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
        ll n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        map<char, ll> mp;
        for (ll i = 0; i < n; i++)
        {
            mp[s[i]]++;
        }
        ll tt = 0;
        for (char i = 'a'; i <= 'z'; i++)
        {
            sum += min(mp[i], mp[toupper(i)]);
            if (k > 0)
            {
                ll p = abs(mp[i] - mp[toupper(i)]);
                if (p & 1)
                    p--;
                tt += p;
            }
        }
        ll ss = min(k, tt / 2);
        cout << sum + ss << nl;
    }
    return SH;
}