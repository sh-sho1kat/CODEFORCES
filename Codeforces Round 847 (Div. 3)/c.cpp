/********************************************************* بِسْمِ ٱللَّهِ ٱلرَّحْمَـٰنِ ٱلرَّحِيمِ *********************************************************/

/**
 *     author: Shefat Hossen Shoikat
 *     date  : 2023-02-10 15:33:43
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
        for (ll i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        map<ll, ll> mp;
        for (ll i = 1; i < n; i++)
        {
            mp[i] = a[i];
        }
        map<ll, ll> mpen;
        {
            for (ll i = 0; i <= n; i++)
            {
                mpen[i] = i;
            }
        }
        ll q;
        cin >> q;
        while (q--)
        {
            ll a;
            cin >> a;
            if (a == 1)
            {
                ll b, c;
                cin >> b >> c;
                if (mp[b] != mp[c])
                {
                    ll s = mp[b] + mp[c];
                    if (mp[b] < mp[c])
                    {
                        mp[c] += mp[b];
                        mp[b] -= mp[b];
                    }
                    else
                    {
                        mp[b] += mp[c];
                        mp[c] -= mp[c];
                    }
                }
            }
            if (a == 2)
            {
                ll b;
                cin >> b;
                cout << mp[b];
            }
            if (a == 3)
            {
                ll c;
                cin >> c;
                cout << mpen[c] << nl;
            }
        }
    }
    return SH;
}