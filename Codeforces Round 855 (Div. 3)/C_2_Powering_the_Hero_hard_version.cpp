///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-03-02 21:39:21
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
    for (ll i = 1; i < n; i++) \
        cout << arr[i] << " "; \
    cout << nl;

int main()
{
    fastio;
    ll t;
    cin >> t;
    for (ll j = 1; j <= t; j++)
    {
        ll sum = 0, tmp = 0, res = 0, cnt = 0, count = 0, ans = 0;
        bool flag = true, fun = false;
        ll n;
        cin >> n;
        ll a[n + 5];
        for (ll i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        // tmp = 1;
        // for (ll i = 1; i <= n; i++)
        // {
        //     if (a[i] == 0)
        //     {
        //         sort(a + tmp, a + i);
        //         tmp = i;
        //     }
        // }
        // // ap(a, n + 1);
        // for (ll i = n; i > 0; i--)
        // {
        //     if (a[i] == 0)
        //     {
        //         if (flag)
        //         {
        //             cnt = 0;
        //             flag = false;
        //         }
        //         cnt++;
        //     }
        //     else
        //     {
        //         flag = true;
        //         if (cnt > 0)
        //         {
        //             sum += a[i];
        //             cnt--;
        //         }
        //     }
        // }
        priority_queue<ll> pq;
        for (ll i = 1; i <= n; i++)
        {
            if (a[i] != 0)
            {
                pq.push(a[i]);
            }
            else
            {
                if (pq.empty())
                {
                    continue;
                }
                sum += pq.top();
                pq.pop();
            }
        }
        cout << sum << nl;
    }
    return SH;
}