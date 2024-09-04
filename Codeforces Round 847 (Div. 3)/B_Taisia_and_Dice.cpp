/**                        بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ
 *
 *
 *
 *     title : B_Taisia_and_Dice.cpp
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-01-27 20:44:19
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
        ll n, s, r;
        cin >> n >> s >> r;
        ll p1 = s / n;
        ll p2 = r / (n - 1);
        // cout << p1 << " " << p2 << nl;
        vl v;
        for (ll i = 1; i < n; i++)
        {
            v.eb(p2);
        }
        ll p3 = r % (n - 1);
        ll j = 0;
        for (ll i = 1; i <= 6; i++)
        {
            for (ll i = 0; i < v.size(); i++)
            {
                if (v[i] < s - r)
                {
                    if (p3 == 0)
                        break;
                    v[i]++;
                    p3--;
                }
            }
        }
        v.eb(s - r);
        sort(all(v));
        for (auto u : v)
        {
            cout << u << " ";
        }
        cout << nl;
    }
    return SH;
}