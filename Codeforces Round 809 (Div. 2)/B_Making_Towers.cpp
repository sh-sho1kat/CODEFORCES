// #include <bits/stdc++.h>
// using namespace std;

// #define fastio ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
// #define mod 1000000007
// #define all(x) x.begin(), x.end()
// #define eb emplace_back
// #define pf push_front
// #define mp make_pair
// #define ff first
// #define ss second
// #define fr(s, n) for (ll i = s; i < n; i++)
// #define yes cout << "YES" << endl
// #define no cout << "NO" << endl
// #define nl '\n'
// #define SH 0
// typedef long long ll;
// typedef pair<ll, ll> pll;
// typedef vector<ll> vl;
// typedef vector<pll> vpll;

// #define ok cout << "Eureka" << nl
// #define ap(arr, n)             \
//     for (ll i = 0; i < n; i++) \
//         cout << arr[i] << " "; \
//     cout << nl;

// int main()
// {
//     fastio;
//     ll t;
//     cin >> t;
//     while (t--)
//     {
//         ll sum = 0, tmp = 0, res = 0, cnt = 0, count = 0, ans = 0;
//         bool flag = true;
//         ll n;
//         cin >> n;
//         ll a[n + 5];
//         fr(1, n + 1)
//         {
//             cin >> a[i];
//         }
//         map<ll, ll> maap;
//         for (ll i = n; i >= 1; i--)
//         {
//             maap[a[i]] = i;
//         }
//         for (ll i = 1; i <= n; i++)
//         {
//             if (maap[i])
//             {
//                 flag = false;
//                 for (ll j = maap[i]; j <= n; j++)
//                 {
//                     if (a[j] == i)
//                     {
//                         flag = true;
//                         if (count & 1)
//                         {
//                             count++;
//                         }
//                         else
//                         {
//                             ans++;
//                             count = 0;
//                         }
//                     }
//                     else
//                     {
//                         if (flag)
//                             count++;
//                     }
//                 }
//                 cout << ans << " ";
//                 ans = 0;
//                 count = 0;
//                 flag = false;
//             }
//             else
//                 cout << 0 << " ";
//         }
//         cout << nl;
//     }
//     return SH;
// }
//                        بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ

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
        bool flag = true;
        bool fun = false;
        ll n;
        cin >> n;
        ll a[n + 5];
        fr(1, n + 1) cin >> a[i];
        map<ll, ll> mp;
        map<ll, ll> track;
        for (ll i = 1; i <= n; i++)
        {
            mp[a[i]] = 1;
        }
        for (ll i = 1; i <= n; i++)
        {
            if (((i - track[a[i]]) % 2 != 0) && track[a[i]])
            {
                mp[a[i]]++;
            }
            track[a[i]] = i;
        }
        for (ll i = 1; i <= n; i++)
        {
            cout << mp[i] << " ";
        }
        cout << nl;
    }
    return SH;
}