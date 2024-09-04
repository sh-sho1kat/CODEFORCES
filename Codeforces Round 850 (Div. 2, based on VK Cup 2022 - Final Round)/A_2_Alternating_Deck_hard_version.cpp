/************************************************* بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ *************************************************/

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-02-06 02:22:36
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
        sum = 0;
        ll aw = 1, ab = 0;
        ll j = 1;
        ll i = 1;
        sum = 4;
        ll k = 7;
        while (k <= n)
        {
            if (cnt < 2)
            {
                j = sum;
                while (j--)
                {
                    if (k > n)
                        break;
                    if (k & 1)
                    {
                        aw++;
                    }
                    else
                    {
                        ab++;
                    }
                    if (j != 0)
                        k++;
                }
                sum++;
                cnt++;
                k++;
            }
            else
            {
                cnt = 0;
                k += sum;
                // k++;
                sum++;
                // cout << k << sum << nl;
                k += sum;
                sum++;
            }
        }
        if (n & 1)
        {
            ll p = (n + 1) / 2;
            cout << aw << " " << ab << " " << p - aw << " " << n - p - ab << nl;
        }
        else
        {
            ll p = (n) / 2;
            cout << aw << " " << ab << " " << p - aw << " " << n - p - ab << nl;
        }
    }
    return SH;
}