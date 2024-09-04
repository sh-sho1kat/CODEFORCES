/**                        بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ
 *
 *
 *
 *     title : A_Hayato_and_School.cpp
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-01-25 20:56:18
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
        ll co = 0, ce = 0;
        ll freq[n + 5] = {};
        fr(0, n)
        {
            if (a[i] & 1)
                co++;
            else
                ce++;
        }
        if (ce == n)
        {
            no;
        }
        else if (n == 3)
        {
            if ((a[0] + a[1] + a[2]) % 2 == 0)
                no;
            else
            {
                yes;
                cout << 1 << " " << 2 << " " << 3 << nl;
            }
        }
        else
        {
            yes;
            if (co >= 3)
            {

                for (ll i = 0; i < n; i++)
                {
                    if (a[i] & 1)
                    {
                        cnt++;
                        if (cnt == 3)
                        {
                            cout << i + 1 << nl;
                            break;
                        }
                        cout << i + 1 << " ";
                    }
                }
            }
            else
            {
                for (ll i = 0; i < n; i++)
                {
                    if (a[i] % 2 == 0)
                    {
                        if (cnt == 2)
                            break;
                        cout << i + 1 << " ";
                        cnt++;
                    }
                }
                for (ll i = 0; i < n; i++)
                {
                    if (a[i] & 1)
                    {

                        cout << i + 1 << nl;
                        break;
                    }
                }
            }
        }
    }
    return SH;
}