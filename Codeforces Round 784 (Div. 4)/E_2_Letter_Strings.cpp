///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-03-02 14:22:37
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
        map<char, ll> mp1, mp2;
        map<string, ll> mp3;
        ll n;
        cin >> n;
        for (ll i = 1; i <= n; i++)
        {
            string s;
            cin >> s;
            mp1[s[0]]++;
            mp2[s[1]]++;
            mp3[s]++;
        }
        for (char i = 'a'; i <= 'k'; i++)
        {
            if (mp1[i])
                sum += (mp1[i] * (mp1[i] - 1)) / 2;
            if (mp2[i])
                sum += (mp2[i] * (mp2[i] - 1)) / 2;
        }
        for (auto u : mp3)
            sum -= u.ss * (u.ss - 1);
        cout << sum << nl;
    }
    return SH;
}