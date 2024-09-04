///********************** بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ **********************///

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-03-02 01:19:50
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
    ll n, q;
    cin >> n >> q;
    ll a[n + 5];
    ll sum = 0;
    for (ll i = 1; i <= n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    bool check = true;
    map<ll, ll> mp;
    ll tmp = 0;
    while (q--)
    {
        ll t;
        cin >> t;
        if (t == 1)
        {
            ll pos, val;
            cin >> pos >> val;
            if (check)
            {
                if (a[pos] > val)
                {
                    sum -= a[pos] - val;
                }
                else
                {
                    sum += val - a[pos];
                }
                a[pos] = val;
                cout << sum << nl;
            }
            else
            {
                if (mp[pos])
                {
                    if (mp[pos] > val)
                    {
                        sum -= mp[pos] - val;
                    }
                    else
                    {
                        sum += val - mp[pos];
                    }
                    mp[pos] = val;
                    cout << sum << nl;
                }
                else
                {
                    if (tmp > val)
                    {
                        sum -= tmp - val;
                    }
                    else
                    {
                        sum += val - tmp;
                    }
                    mp[pos] = val;
                    cout << sum << nl;
                }
            }
        }
        else
        {
            ll val;
            cin >> val;
            sum = val * n;
            cout << sum << nl;
            check = false;
            tmp = val;
            mp.clear();
        }
    }
    return SH;
}