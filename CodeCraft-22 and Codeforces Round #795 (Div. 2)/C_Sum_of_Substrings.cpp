/****************************************************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ ******************************************************/

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-02-11 23:37:31
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
        ll a, b;
        fr(0, n) if (s[i] == '1') cnt++;
        fr(0, n)
        {
            if (s[i] == '1')
            {
                a = i;
                break;
            }
        }
        for (ll i = n - 1; i >= 0; i--)
        {
            if (s[i] == '1')
            {
                b = n - i - 1;
                break;
            }
        }
        if (cnt == 0)
        {
            cout << 0 << nl;
        }
        else if (cnt == 1)
        {
            if (b <= k)
            {
                cout << 1 << nl;
            }
            else if (a <= k)
            {
                cout << 10 << nl;
            }
            else
            {
                cout << 11 << nl;
            }
        }
        else
        {
            if ((a + b) <= k)
            {
                cout << ((cnt - 2) * 11) + 11 << nl;
            }
            else if (b <= k)
            {
                cout << (cnt - 1) * 11 + 1 << nl;
            }
            else if (a <= k)
            {
                cout << (cnt - 1) * 11 + 10 << nl;
            }
            else
                cout << cnt * 11 << nl;
        }
    }
    return SH;
}