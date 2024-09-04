/****************************************************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ ******************************************************/

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-02-12 19:22:13
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
        fr(0, n) cin >> a[i];
        ll i = 0;
        ll j = n - 1;
        ll mn = 1;
        ll mx = n;
        while (i < j)
        {
            if ((a[i] != mn && a[i] != mx) && (a[j] != mn && a[j] != mx))
            {
                cout << i + 1 << " " << j + 1 << nl;
                flag = false;
                break;
            }
            if (a[i] == mn || a[j] == mn)
            {
                if (a[i] == mn)
                    i++;
                else
                    j--;
                mn++;
            }
            if (a[i] == mx || a[j] == mx)
            {
                if (a[i] == mx)
                    i++;
                else
                    j--;
                mx--;
            }
        }
        if (flag)
        {
            cout << -1 << nl;
        }
    }
    return SH;
}